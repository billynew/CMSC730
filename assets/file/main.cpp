#include <Arduino.h>
#include <Wire.h>
#define SSD1306_I2C_ADDRESS 0x3C // SSD1306 address
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define BUFFER_SIZE (SCREEN_WIDTH * SCREEN_HEIGHT / 8)

uint8_t buffer[BUFFER_SIZE]; // Screen buffer

// Function to send a command to the SSD1306
void sendCommand(uint8_t command)
{
  Wire.beginTransmission(SSD1306_I2C_ADDRESS);
  Wire.write(0x00); // Co = 0, D/C# = 0 (Command) 0b0000-0000
  Wire.write(command);
  Wire.endTransmission();
}

// Initialize the SSD1306 display
void initSSD1306()
{
  sendCommand(0xAE); // Display OFF
  sendCommand(0xD5); // Set display clock divide ratio
  sendCommand(0x80); // Default clock divide ratio
  sendCommand(0xA8); // Set multiplex ratio
  sendCommand(0x3F); // 1/64 duty
  sendCommand(0xD3); // Set display offset
  sendCommand(0x00); // No offset
  sendCommand(0x40); // Set start line address
  sendCommand(0x8D); // Charge pump setting
  sendCommand(0x14); // Enable charge pump
  sendCommand(0xAF); // Display ON
}

// Clear the display buffer
void clearBuffer()
{
  for (uint16_t i = 0; i < BUFFER_SIZE; i++)
  {
    buffer[i] = 0x00;
  }
}

//Update the display per Page. 
void updatePage(int i)
{
  sendCommand(0xB0 | i); // Set the page address (0xB0 to 0xB7)
  sendCommand(0x00);     // Set lower column address
  sendCommand(0x10);     // Set higher column address
  Wire.beginTransmission(SSD1306_I2C_ADDRESS);
  Wire.write(0x40); // Co = 0, D/C# = 1 (Data)
  for (uint8_t col = 0; col < SCREEN_WIDTH; col++)
  {
    Wire.write(buffer[i * SCREEN_WIDTH + col]);
  }
  Wire.endTransmission();
}

// Update display following the default page addressing mode
void updateDisplay()
{
  for (int page = 0; page < 8; page++)
    updatePage(page);
}

// Draw a pixel in the buffer
void drawPixel(uint8_t x, uint8_t y)
{
  uint16_t index = x + (y / 8) * SCREEN_WIDTH;
  buffer[index] |= (1 << (y % 8));
}

void setup()
{
  Wire.begin(21, 22); // SDA, SCL pins
  initSSD1306();
  clearBuffer();
  updateDisplay(); // Send the buffer to the display
}

void loop()
{
  drawPixel(11, 10);
  updateDisplay();
}
