#include <iostream>
using namespace std;

#include "stack.hpp"



int main(){


    stack st;
    

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.get_top() << '\n';

    st.pop();

    cout << st.get_top() << '\n';

    st.clear();

    cout << st.is_empty() << '\n';


    return 0;
}