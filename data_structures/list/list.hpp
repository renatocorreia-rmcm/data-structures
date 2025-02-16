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
        index = 0;
    }


    void insert(int value){
        node* new_node = new node(value, curr->next);
        curr->next = new_node;

        if (tail == curr)  // element was inserted at tail - becomes new tail
        {
            tail = curr->next;
        }

        index++;
    }

    void remove(){
        if (curr == tail)  // is last element or list is empty
        {
            throw("list underflow");
        }

        node* trash = curr->next;

        if (tail == trash)
        {
            tail = curr;
        }

        curr->next = curr->next->next;

        delete trash;

        index--;
    }

    void go_front(){
        if (curr==tail)
        {
            throw("index out of range");
        }
        
        curr = curr->next;
    }
    void go_back(bool to_head=false){
        if (curr==head)
        {
            throw("index out of range");
        }
        if (to_head)
        {
            curr = head;
            return;
        }
        

        node* temp = head;
        while (temp->next != curr)
        {
            temp=temp->next;
        }

        curr = temp;
    }

    int get_value(){
        if (curr->next == nullptr)
        {
            throw("list underflow");
        }
        return curr->next->data;
    }


    bool is_empty(){
        return head->next == nullptr;
    }

    void clear(){
        while (!is_empty()) ;    
    }

};



#endif