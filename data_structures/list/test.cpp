#include <iostream>
using namespace std;

#include "list.hpp"



int main(){


    list l;

    l.insert(1);
    l.insert(2);
    l.insert(3);


    cout << l.get_value() << ' ';
    l.go_front();
    cout << l.get_value() << ' ';    
    l.go_front();
    cout << l.get_value() << ' ';
    
    l.go_back();
    l.remove();

    cout << '\n';

    l.go_back(true);

    cout << l.get_value() << ' ';
    l.go_front();
    cout << l.get_value() << ' ';    




    return 0;
}