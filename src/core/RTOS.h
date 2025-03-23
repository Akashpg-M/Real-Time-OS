#ifndef RTOS_H
#define RTOS_H

#include "TaskManager.h"
#include "Timer.h"
#include "Semaphore.h"
#include "Mutex.h"
#include "Queue.h"

class RTOS {
public:
    static void init();
    static void start();
    static void addTask(Task* task);
    static void schedule();
    static void sleep(int ms);
};

#endif
