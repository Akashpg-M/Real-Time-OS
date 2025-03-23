#include "Timer.h"
#include <Arduino.h>

void Timer::init() {
    // Initialize timer settings
}

void Timer::delay(int ms) {
    ::delay(ms); // Arduino built-in delay function
}
