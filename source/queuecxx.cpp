//
// Created by Selek, Abdullah on 29.05.17.
//

#include "../include/queuecxx.h"

Queue::Queue() {

}

Queue::~Queue() {

}

std::vector<int> Queue::getAllItems() {
    return this->items;
}

bool Queue::isEmpty() {
    return this->items.size() == 0;
};

int Queue::size() {
    return this->items.size();
};
