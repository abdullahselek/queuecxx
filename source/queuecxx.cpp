//
// Created by Selek, Abdullah on 29.05.17.
//

#include "../include/queuecxx.h"

Queue::Queue(int maxSize) {
    this->items = new int[maxSize];
}

Queue::~Queue() {

}

int * Queue::getAllItems() {
    return this->items;
}

bool Queue::isEmpty() {
    return this->itemCount == 0;
};

int Queue::size() {
    return this->itemCount;
};
