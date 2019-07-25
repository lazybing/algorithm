#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> q;

    // insert threee elements into the queue
    q.push("These ");
    q.push("are ");
    q.push("more than ");

    // read and print two elements from the queue
    cout << q.front();
    q.pop();
    cout << q.front();
    q.pop();

    //insert two new elements
    q.push("four ");
    q.push("words! ");

    //skip one elemnet
    q.pop();

    //read and print two elements
    cout << q.front();
    q.pop();
    cout << q.front() << endl;
    q.pop();

    //print number of elemnts in the queue
    cout << "number of elements in the queue: " << q.size() << endl;
}
