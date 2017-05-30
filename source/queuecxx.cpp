//
// Created by Selek, Abdullah on 29.05.17.
//

#include "../include/queuecxx.h"

Queue::Queue(int maxSize) {
    this->items = new int[maxSize];
    this->maxSize = maxSize;
}

Queue::~Queue() {

}

int * Queue::getAllItems() {
    return this->items;
}

bool Queue::isEmpty() {
    return this->itemCount == 0;
};

bool Queue::isFull() {
    return this->itemCount == maxSize;
}

int Queue::size() {
    return this->itemCount;
};

void Queue::insert(int data) {
    if (isFull()) {
        return;
    }
    if (rear == this->maxSize - 1) {
        rear = -1;
    }
    items[rear++] = data;
    itemCount++;
}

int Queue::removeData(int data) {
    if (!isEmpty()) {
        int data = this->items[front++];
        if (front == this->maxSize) {
            front = 0;
        }
        itemCount--;
        return data;
    }
}
