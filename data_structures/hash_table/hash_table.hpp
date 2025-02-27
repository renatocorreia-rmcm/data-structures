class node{
public:
    int data;
    node* next;
    node(int data=0, node* next = nullptr): data(data), next(next) {}
};
class list{
private:
    node* head;
    node* tail;
public:
    
    bool find(int value){
        node* itr = head;
        while (itr->next != nullptr)
        {
            if (itr->next->data == value)
            {
                return true;
            }
            itr = itr->next;
        }
        return false;
    }

    void remove(int value){
        node* itr = head;
        while (itr != nullptr)
        {
            if (itr->next->data == value)
            {
                node* trash = itr->next;
                itr->next = itr->next->next;
                if (trash == tail)
                {
                    tail = head;
                }
                
                delete trash;
                return;
            }
            itr = itr->next;
        }
        
    }

    void push(int value){
        tail->next = new node(value);
        tail = tail->next;
    }

    list(){
        head = tail = new node();
    }
};



class hash_table
{
private:
    
    list** keys = {nullptr};
    int m;  // keys array size

    int hash_function(int key){
        int hash_address;
        hash_address = key%m;
        return hash_address;
    };

public:

    void add(int key){
        int hash_address = hash_function(key);
        
        keys[hash_address]->push(key);
        
    }

    void remove(int key){
        int hash_address = hash_function(key);

        keys[hash_address]->remove(key);
    }

    bool find(int key){
        int hash_address = hash_function(key);

        return keys[hash_address]->find(key);
    }

    hash_table(int m): m(m){
        keys = new list*[m];
        for (int i = 0; i < m; i++)
        {
            (keys)[i] = new list();
        }
    };
    
};
