#include "queue.hpp"

#include <iostream>
using namespace std;



int main(){


    queue q;

    cout << q.is_empty() << '\n';


    q.push(10);
    cout << q.get_front() << '\n';

    q.push(20);
    cout << q.get_front() << '\n';

    q.pop();
    cout << q.get_front() << '\n';

    cout << q.is_empty() << '\n';


    return 0;
}