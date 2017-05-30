//
// Created by Selek, Abdullah on 29.05.17.
//

#ifndef QUEUECXX_QUEUECXX_H
#define QUEUECXX_QUEUECXX_H

#include <vector>

class Queue {

public:
    Queue(int maxSize);
    ~Queue();
    int * getAllItems();
    bool isEmpty();
    int size();

private:
    int * items = nullptr;
    int front = 0;
    int rear = -1;
    int itemCount = 0;

};

#endif //QUEUECXX_QUEUECXX_H
