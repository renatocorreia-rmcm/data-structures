#include <iostream>
#include "binary_tree.hpp"

using namespace std;


int main(){


    binary_tree bt;

    cout << ( bt.find(1) == false ) << '\n';
    cout << ( bt.find(2) == false ) << '\n';
    cout << ( bt.find(3) == false ) << '\n';

    bt.insert(2);
    cout << ( bt.find(2) == true ) << '\n';

    bt.insert(3);
    cout << ( bt.find(3) == true ) << '\n';

    bt.insert(1);
    cout << ( bt.find(1) == true ) << '\n';

    cout << ( bt.find(4) == false ) << '\n';






    return 0;
}