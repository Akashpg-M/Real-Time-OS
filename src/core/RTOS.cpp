#include "RTOS.h"

void RTOS::init() {
    // Initialize task manager and timer
    TaskManager::init();
    Timer::init();
}

void RTOS::start() {
    // Start the task scheduler
    while (true) {
        TaskManager::schedule();
    }
}

void RTOS::addTask(Task* task) {
    TaskManager::addTask(task);
}

void RTOS::sleep(int ms) {
    Timer::delay(ms);
}

void RTOS::schedule() {
    TaskManager::schedule();
}
