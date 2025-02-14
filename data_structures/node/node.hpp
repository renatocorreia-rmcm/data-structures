
#ifndef NODE_HPP
#define NODE_HPP

class node {
public:
    int data;
    node* next;
    node(int new_data, node* next)
    {
        data = new_data;
        this->next = next;
    }
};

#endif