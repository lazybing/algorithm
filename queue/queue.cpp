#include <iostream>
#include <queue>

using namespace std;

//empty() -- Returns whether the queue is empty
//size() -- Returns the size of the queue
//push(g) and pop() -- push() function adds the element g at the end of queue
//pop() function deletes the first element of the queue

void showqueue(queue <int> myqueue)
{
    while(!myqueue.empty()){
        cout << myqueue.front() << " ";   
        myqueue.pop();
    }
    cout << endl;
}

int main(){
    queue <int> myqueue;
    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);

    showqueue(myqueue);

    cout << "myqueue size " << myqueue.size() << endl;
    cout << "myqueue front " << myqueue.front() << endl;
    cout << "myqueue back " << myqueue.back() << endl;

    cout << "myqueue pop " << endl;
    myqueue.pop();
    showqueue(myqueue);

    return 0;
}

