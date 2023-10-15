//
// Created by cartwrightr on 10/13/2023.
//

// sstack.cpp: implementation of simple string stack

#include "sstack.h"
#include <string>

using namespace std;

// TODO: implement StringStack here:

StringStack::StringStack() {
    headNode = new StackNode("");
    currentNode = headNode;
    stkPoint = currentNode;
    previousNode = nullptr;
    placeFindingNode = headNode;
}

bool StringStack::empty() const {
    if (currentNode == headNode && headNode->next() == nullptr) {
        return true;
    }
    return false;
}

void StringStack::push(std::string new_item) {
    previousNode = currentNode;
    if (currentNode == headNode && headNode->next() == nullptr) {
        headNode->setNext(new StackNode(new_item));
        currentNode = headNode->next();
    }
    else {
        currentNode->setNext(new StackNode(new_item));
        currentNode = currentNode->next();
        stkPoint = currentNode;
    }
}

std::string StringStack::pop() {
    stkPoint = previousNode;
    while(placeFindingNode->next() != currentNode) {
        previousNode = placeFindingNode;
        placeFindingNode = placeFindingNode->next();
    }
    placeFindingNode = headNode;
    std::string poppedItem = currentNode->item();
    currentNode = stkPoint;
    currentNode->setNext(nullptr);
    stkPoint->setNext(nullptr);
    return poppedItem;
}

void StringStack::clear() {
    headNode->setNext(nullptr);
    currentNode = headNode;
    stkPoint = headNode;
    previousNode = nullptr;
}


