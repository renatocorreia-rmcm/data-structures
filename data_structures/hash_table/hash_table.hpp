#include "../list/list.hpp"

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
        if (keys[hash_address]==nullptr)
        {
            /* code */
        }
        
    }

    hash_table(int m, int n){
        keys = new list*[m];
        
    };
    
};
