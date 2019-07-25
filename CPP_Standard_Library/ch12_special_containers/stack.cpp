#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char **argv)
{
    stack<int> st;

    //push threee elements into the stack
    st.push(1);
    st.push(2);
    st.push(3);

    //pop and print two elements from the stack
    cout << st.top() << " ";
    st.pop();
    cout << st.top() << " ";
    st.pop();

    //modify top element
    st.top() = 77;

    //push two new elements
    st.push(4);
    st.push(5);

    // pop one element without processing it
    st.pop();

    // pop and print remaining elements
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return true;
}
