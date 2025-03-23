#include "Queue.h"

template <typename T>
Queue<T>::Queue(int size) {
    this->size = size;
    buffer = new T[size];
    head = tail = 0;
}

template <typename T>
void Queue<T>::enqueue(T value) {
    if ((tail + 1) % size != head) {
        buffer[tail] = value;
        tail = (tail + 1) % size;
    }
}

template <typename T>
T Queue<T>::dequeue() {
    if (head != tail) {
        T value = buffer[head];
        head = (head + 1) % size;
        return value;
    }
    return T();  // Return default value
}
