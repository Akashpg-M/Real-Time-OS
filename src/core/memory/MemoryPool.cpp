#include "MemoryPool.h"

MemoryPool::MemoryPool(size_t size) {
    poolSize = size;
    pool = malloc(size);
}

void* MemoryPool::allocate() {
    // Return a block of memory
    return pool;
}

void MemoryPool::deallocate(void* pointer) {
    free(pointer);
}
