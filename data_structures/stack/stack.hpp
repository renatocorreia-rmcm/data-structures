// linked stack

#include <iostream>
#include "../node/node.hpp"

#ifndef STACK_HPP
#define STACK_HPP


using namespace std;



class stack{

private:

    node* top;

public:

    stack(){
        top = new node(NULL, nullptr);
    }

    void push(int value){
        node* new_node = new node(value, top);
        top = new_node;
    }

    void pop(){
        if (is_empty())
        {
            throw("stack underflow");
        }
        node* old_top = top;
        top = top->next;
        delete old_top;
    }

    bool is_empty(){
        return (top->next == nullptr);
    }

    int get_top(){
        if (is_empty())
        {
            throw("empty stack has no top");
        }
        return top->data;
    }

    void clear(){
        while (!is_empty()) pop();    
    }

};



#endif