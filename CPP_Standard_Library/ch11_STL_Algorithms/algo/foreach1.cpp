#include "algostuff.hpp"
using namespace std;

void print(int elem)
{
    cout << elem << ' ';
}

int main(int argc, char **argv)
{
    vector<int> coll;

    INSERT_ELEMNTES(coll, 1, 9);

    // call print() for each element
    for_each(coll.cbegin(), coll.cend(),
             [](int elem){
        cout << elem << ' ';});
    cout << endl;

    // add 10 to each element
    for_each(coll.begin(), coll.end(),
             [](int&elem){
                elem += 10;
             });

    for_each(coll.cbegin(), coll.cend(),
             print);
    cout << endl;

    // add value of first element to each element
    for_each(coll.begin(), coll.end(),
             [=](int& elem){
                elem += *coll.begin();
             });

    for (auto elem:coll) {
        cout << elem << ' ';
    }
    cout << endl;

    // add value of first element to each element
    for_each(coll.begin(), coll.end(),
             [&](int& elem){
                elem += *coll.begin();
             });
    PRINT_ELEMENTS(coll);
}
