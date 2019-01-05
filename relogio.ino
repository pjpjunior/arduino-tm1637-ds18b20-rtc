#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3

// The amount of time (in milliseconds) between tests
#define TEST_DELAY   1000

TM1637Display display(CLK, DIO);

const uint8_t SEG_DONE[] = {
   0xff,  SEG_G, SEG_G, SEG_G 
   };

void setup()
{


  
}

void loop()
{
  int k = 1353;
 
  uint8_t data[] = { 0xff, 0xff, 0xff, 0xff };
  uint8_t blank[] = { 0x00, 0x00, 0x00, 0x00 };
  display.setBrightness(0x03); 

  display.showNumberDecEx(k, 0xff,  true);  // Expect: 0000
  delay(TEST_DELAY);
  display.showNumberDecEx(k, 0x00,  true);  // Expect: 0000
  delay(TEST_DELAY);
  display.showNumberDecEx(k, 0xff,  true);  // Expect: 0000
  delay(TEST_DELAY);
  display.showNumberDecEx(k, 0x00,  true);  // Expect: 0000
  delay(TEST_DELAY);
  display.showNumberDecEx(k, 0xff,  true);  // Expect: 0000
  delay(TEST_DELAY);
  display.showNumberDecEx(k, 0x00,  true);  // Expect: 0000
  delay(TEST_DELAY);
//  display.setSegments(blank);
   display.setSegments(SEG_DONE);
  delay(TEST_DELAY);
  delay(TEST_DELAY);

  delay(TEST_DELAY);
  


  

}
