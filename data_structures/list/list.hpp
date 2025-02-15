#include <iostream>
#include "../node/node.hpp"

#ifndef LIST_HPP
#define LIST_HPP


using namespace std;



class list{

private:

    node* head;
    node* tail;
    node* curr;

    int index;

public:

    list(){
        head = tail = curr = new node();
    }

    void push(int value){
        node* new_node = new node(value);
        curr = new_node;
        
    }

    void remove(){
        if (is_empty())
        {
            throw("list underflow");
        }

    }

    bool is_empty(){
        return ;
    }

    int get_top(){
        if (is_empty())
        {
            throw("list underflow");
        }
        return ;
    }

    void clear(){
        while (!is_empty()) ;    
    }

};



#endif