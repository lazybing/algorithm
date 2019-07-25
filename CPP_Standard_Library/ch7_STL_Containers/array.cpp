#include <array>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

int main(int argc, char **argv)
{
    //create array with 10 ints
    array<int, 10> arr = {11, 22, 33, 44};

    for (auto itr = arr.cbegin(); itr != arr.cend(); itr++)
        cout << *itr << " ";
    cout << endl;

    // modify last two elements
    arr.back() = 999;
    arr[arr.size() - 2] = 42;
    for (auto itr = arr.cbegin(); itr != arr.cend(); itr++)
        cout << *itr << " ";
    cout << endl;

    //process sum of all elements
    cout << "sum: " << accumulate(arr.begin(), arr.end(), 0) << endl;

    //negate all elements
    transform(arr.begin(), arr.end(), // source
              arr.begin(),            // destination
              negate<int>());         // operation
    for (auto itr = arr.cbegin(); itr != arr.cend(); itr++)
        cout << *itr << " ";
    cout << endl;

    return true;
}
