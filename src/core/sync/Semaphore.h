#ifndef SEMAPHORE_H
#define SEMAPHORE_H

class Semaphore {
public:
    Semaphore(int initialCount);
    void wait();
    void signal();
private:
    int count;
};

#endif
