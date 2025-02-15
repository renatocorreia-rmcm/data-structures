#include "../node/node.hpp"

#ifndef QUEUE_HPP
#define QUEUE_HPP

class queue
{
private:
    node* head;
    node* tail;

public:

    queue(){
        head = tail = new node();
    }

    void push(int value){
        node* new_node = new node(value);
        tail->next = new_node;
        tail = new_node;
    }

    void pop(){
        if (is_empty())
        {
            throw("queue underflow");
        }

        node* trash = head->next;
        head->next = head->next->next;
        delete (trash);

        if (head->next == nullptr)
        {
            tail = head;
        }
        
    }

    int get_front(){
        if (is_empty())
        {
            throw("queue underflow");
        }
        return head->next->data;
    }

    bool is_empty(){
        return head->next == nullptr;
    }
};




#endif