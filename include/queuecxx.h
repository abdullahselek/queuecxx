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
    bool isFull();
    int size();
    void insert(int data);

private:
    int * items = nullptr;
    int maxSize = 0;
    int front = 0;
    int rear = -1;
    int itemCount = 0;

};

#endif //QUEUECXX_QUEUECXX_H
