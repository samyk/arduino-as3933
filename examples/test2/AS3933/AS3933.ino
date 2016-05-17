//Includes for libraries must be done in *.ino file
#include "SPI.h"

//Includes needed for this file
#include <as3933gen.h>
#include <as3933.h>

As3933Gen as;

// the setup function runs once when you press reset or power the board
void setup()
{
    pinMode(11, OUTPUT);
    as.begin();
}

// the loop function runs over and over again forever
void loop()
{
    while(!as.push(0xAA));
    while(!as.push(0x55));
//    if(!as.isBusy())
//    {
//        as.generate(a);
//        bitClear(PORTB,PB3);
//    }
}

