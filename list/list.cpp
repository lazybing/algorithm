#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//function for printing the elements in a list
void showlist(list <int> g){
    list <int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    list <int> gqlist1, gqlist2;
    for(int i = 0; i < 10; i++){
        //push_front(g) -- Adds a new element 'g' at the end of the list
        //push_back(g) -- Adds a new element g at the end of the list
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    showlist(gqlist1);
    showlist(gqlist2);

    cout << "gqlist1 front " << gqlist1.front() << endl;
    cout << "gqlist2 back " << gqlist2.back() << endl;

    gqlist1.pop_back();
    showlist(gqlist1);

    gqlist1.pop_front();
    showlist(gqlist2);

    gqlist1.reverse();
    showlist(gqlist1);

    gqlist2.sort();
    showlist(gqlist2);

    return 0;
}
