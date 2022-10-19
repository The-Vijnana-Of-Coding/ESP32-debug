#include <Arduino.h>

#include <isDebug.h> // change isDebug to true to enable print, false to disable

//#####  main Setup  ######//
void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);
}
//////////////////////////////////////////////////////////////////////////

//#####  main Loop  ######//
void loop() {
    // put your main code here, to run repeatedly:
    debugln("This is a new line print");
    debug("This is an inline print");
    debugln("This is a new line print again");
    delay(1000);
}
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////