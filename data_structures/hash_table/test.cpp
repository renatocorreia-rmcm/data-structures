#include <iostream>

#include "hash_table.hpp"

using namespace std;


int main(){


    hash_table ht(10);



    ht.add(5);
    ht.add(15);

    cout << (ht.find(5) == 1 ) << "\n";
    cout << (ht.find(15) == 1)<< "\n";
    cout << (ht.find(25) == 0) << "\n";

    ht.remove(5);
    cout << (ht.find(5) == 0) << "\n";
    ht.remove(15);
    cout << (ht.find(15) == 0) << "\n";
    
    
    cout << (ht.find(33) == 0) << "\n";
    ht.add(33);
    cout << (ht.find(33) == 1) << "\n";
    ht.remove(33);
    cout << (ht.find(33) == 0) << "\n";


    return 0;
}