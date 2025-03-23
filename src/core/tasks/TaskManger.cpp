#include "TaskManager.h"
#include <vector>

std::vector<Task*> tasks;

void TaskManager::init() {
    tasks.clear();
}

void TaskManager::addTask(Task* task) {
    tasks.push_back(task);
}

void TaskManager::schedule() {
    for (Task* task : tasks) {
        task->run();
    }
}
