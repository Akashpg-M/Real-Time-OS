#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
public:
    Queue(int size);
    void enqueue(T value);
    T dequeue();
private:
    int size;
    T* buffer;
    int head, tail;
};

#endif
