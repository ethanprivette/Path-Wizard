#include "my_library.h"

void setup() {
    Serial.begin(9600);
    Serial.print(addTwoInts(3, 5));
}

void loop() {
}