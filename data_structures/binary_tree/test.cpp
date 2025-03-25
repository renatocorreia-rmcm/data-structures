#include <iostream>

using namespace std;
#include "binary_tree.hpp"


int main(){


    binary_tree bt;

    cout << ( bt.find(1) == false ) << '\n';
    cout << ( bt.find(2) == false ) << '\n';
    cout << ( bt.find(3) == false ) << '\n';

    cout << ( bt.get_height() == 0) << '\n';

    bt.insert(2);
    cout << ( bt.find(2) == true ) << '\n';

    cout << ( bt.get_height() == 1) << '\n';

    bt.insert(3);
    cout << ( bt.find(3) == true ) << '\n';

    cout << ( bt.get_height() == 2) << '\n';

    bt.insert(1);
    cout << ( bt.find(1) == true ) << '\n';

    cout << ( bt.get_height() == 2) << '\n';

    cout << ( bt.find(4) == false ) << '\n';

    bt.print_preorder();
    bt.print_inorder();
    bt.print_posorder();

    bt.clear();
    cout << (bt.find(1) == false) << '\n';
    cout << (bt.get_height() == 0) << '\n';







    return 0;
}
