//
// Created by cartwrightr on 10/13/2023.
//

// sstack.h: simple string stack

#ifndef _sstack_h
#define _sstack_h

#include <string>

class StringStack {

public:
    // construct empty stack
    StringStack();

    // return true if stack empty, false otherwise
    bool empty() const;

    // push new_item on top of stack
    void push(std::string new_item);

    // remove top element of stack and return it; undefined if stack empty
    std::string pop();

    // remove all items from the stack
    void clear();


private:
    class StackNode {
        std::string _item;
        StackNode *_next;
    public:
        StackNode(std::string value, StackNode *n = nullptr)
                : _item(value), _next(n)
        { }
        std::string item() const { return _item; }
        StackNode *next() const { return _next; }
        void setNext(StackNode *n) { _next = n; }
    };
    // TODO: declare the node pointer:
    StackNode *stkPoint = nullptr;
    StackNode *headNode = nullptr;
    StackNode *currentNode = nullptr;
    StackNode *previousNode = nullptr;
    StackNode *placeFindingNode = nullptr;
};

#endif