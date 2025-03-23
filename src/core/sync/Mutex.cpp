#include "Mutex.h"
#include <Arduino.h>

Mutex::Mutex() {
    locked = false;
}

void Mutex::lock() {
    while (locked) {
        // Wait for the mutex to become available
    }
    locked = true;
}

void Mutex::unlock() {
    locked = false;
}
