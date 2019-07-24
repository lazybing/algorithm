#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);

    vector<int>::iterator itr1 = vec.begin();
    vector<int>::iterator itr2 = vec.end();

    for (vector<int>::iterator itr = itr1; itr != itr2; itr++)
        cout << *itr << " ";

    cout << endl;

    std::sort(itr1, itr2);

    for (vector<int>::iterator itr = itr1; itr != itr2; itr++)
        cout << *itr << " ";

    cout << endl;

    return true;
}
