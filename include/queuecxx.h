//
// Created by Selek, Abdullah on 29.05.17.
//

#ifndef QUEUECXX_QUEUECXX_H
#define QUEUECXX_QUEUECXX_H

#include <vector>

class Queue {

public:
    Queue();
    ~Queue();
    std::vector<int> getAllItems();
    bool isEmpty();
    int size();

private:
    std::vector<int> items;

};

#endif //QUEUECXX_QUEUECXX_H
