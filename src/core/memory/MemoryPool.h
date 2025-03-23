#ifndef MEMORY_POOL_H
#define MEMORY_POOL_H

class MemoryPool {
public:
    MemoryPool(size_t size);
    void* allocate();
    void deallocate(void* pointer);
private:
    size_t poolSize;
    void* pool;
};

#endif
