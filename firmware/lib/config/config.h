#ifndef CONFIG_H
#define CONFIG_H

#include <inttypes.h>

//#include <valve.h>

// ADAFRUIT FEATHER ESP32
// RST
// 3V
// NC
// GND
// 26 DAC2 A0   BATT
// 25 DAC1 A1   EN
// 34 A2     USB
// 39 A3     13 A12
// 36 A4     12 A11
// 4 A5      27 A10
// 5 SCK     33 A9
// 18 MO     15 A8
// 19 MI     32 A7
// 16 RX     14 A6
// 17 TX     SCL 22
// 21 21     SDA 23

// Pins
#define CONTROL_VALVE_A 12
#define CONTROL_VALVE_B 13
#define BALANCE_VALVE_A 33
#define BALANCE_VALVE_B 27


// SPI Display
#define TFT_CLK 5
#define TFT_MISO  19
#define TFT_MOSI 18
#define TFT_CS 14
#define TFT_DC 32
#define TFT_RST 15

// Shift register
#define DS 13 // 747HC pin 14 - serial data
#define ST_CP 12 // 747HC pin 12 - storage register clock (latch)
#define SH_CP 27 // 747HC pin 11 - shift register clock

// DISPLAY
/*
#define TOUCH_Y1 5
#define TOUCH_X1 6
#define TOUCH_Y2 34
#define TOUCH_X2 39

#define LCD_RST 36
#define LCD_RD 4
#define LCD_WR 5
#define LCD_CD 18
#define LCD_CS 19

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RST);
*/

///////// VALVES //////////

#define TOTAL_CYCLE_TIME 5000 //ms
#define TIME_STEP 10 //ms
#define NUM_VALVES 4 //1-8

// { name, num, state, pin, start, stop }
PIOC_Controller::Valve valveArray[NUM_VALVES] = {
  { 'A', 0, 0, 1, 500, 2000, },
  { 'B', 1, 0, 2, 2000, 2400, },
  { 'C', 2, 0, 4, 2400, 4400, },
  { 'D', 3, 0, 8, 4400, 4900, }};

#endif



/*PIOC_Controller::Valve valveArray[NUM_VALVES] = {
  { .name = 'A',
    .num = 0,
    .state = 0,
    .pin = 1,
    .start = 500,
    .stop = 2000, },
  { .name = 'B',
      .num = 1,
      .state = 0,
      .pin = 2,
      .start = 2000,
      .stop = 2400, },
  { .name = 'C',
      .num = 2,
      .state = 0,
      .pin = 4,
      .start = 2400,
      .stop = 4400, },
  { .name = 'D',
      .num = 3,
      .state = 0,
      .pin = 8,
      .start = 4400,
      .stop = 4900, }};*/