//
// Created by zbh on 2021/8/8.
//

#include "../../include/memory/memory_pool.h"

MemoryPool::MemoryPool(uint size) {

    chunk = new MemoryChunk(size);
}

MemoryPool::~MemoryPool() {
    INFO_PRINT("MemoryPool调用析构函数");
    delete (chunk);
}

MemoryChunk *MemoryPool::get_chunk() {
    return this->chunk;
}
