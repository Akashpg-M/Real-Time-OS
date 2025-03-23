#ifndef TASK_H
#define TASK_H

class Task {
public:
    Task(void (*taskFunction)(), int priority);
    void (*taskFunction)();
    int priority;
    void run();
};

#endif
