#include "Task.h"

Task::Task(void (*taskFunction)(), int priority) {
    this->taskFunction = taskFunction;
    this->priority = priority;
}

void Task::run() {
    this->taskFunction();
}
