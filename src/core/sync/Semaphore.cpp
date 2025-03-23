#include "Semaphore.h"
#include <Arduino.h>

Semaphore::Semaphore(int initialCount) {
    count = initialCount;
}

void Semaphore::wait() {
    while (count <= 0) {
        // Wait until semaphore is signaled
    }
    count--;
}

void Semaphore::signal() {
    count++;
}
