#ifndef MUTEX_H
#define MUTEX_H

class Mutex {
public:
    Mutex();
    void lock();
    void unlock();
private:
    bool locked;
};

#endif
