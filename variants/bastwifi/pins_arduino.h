#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        14
#define NUM_ANALOG_INPUTS       6

#define analogInputToDigitalPin(p)  (((p)<6)?(esp32_adc2gpio[(p)]):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 15;
static const uint8_t SCL = 16;

static const uint8_t SS    = 11;
static const uint8_t MOSI  = 37;
static const uint8_t MISO  = 35;
static const uint8_t SCK   = 36;

static const uint8_t LED_BUILTIN = 14;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;


static const uint8_t T1 = 1;
static const uint8_t T2 = 2;
static const uint8_t T3 = 3;
static const uint8_t T4 = 4;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;
static const uint8_t T10 = 10;
static const uint8_t T13 = 13;
static const uint8_t T14 = 14;

static const uint8_t DAC1 = 17;


#endif /* Pins_Arduino_h */
