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
    stkPoint = headNode;
    currentNode = headNode;
}

bool StringStack::empty() const {
    if (currentNode == headNode && headNode == nullptr) {
        return true;
    }
    return false;
}

void StringStack::push(std::string new_item){
    if (
    }




}


