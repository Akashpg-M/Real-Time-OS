#include <Arduino.h>
#include "./RTOS.h"

// Task functions
void blinkLED() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}

void readSensor() {
    // Replace with actual sensor code
    int sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    delay(1000);
}

Task task1(blinkLED, 1);  // LED blink task
Task task2(readSensor, 2); // Sensor read task

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);

    RTOS::init();
    RTOS::addTask(&task1);
    RTOS::addTask(&task2);
}

void loop() {
    RTOS::schedule();
}
