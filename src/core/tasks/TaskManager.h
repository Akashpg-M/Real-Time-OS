#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "Task.h"

class TaskManager {
public:
    static void init();
    static void addTask(Task* task);
    static void schedule();
};

#endif
