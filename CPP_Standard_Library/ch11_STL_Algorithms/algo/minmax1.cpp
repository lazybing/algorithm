#include <cstdlib>
#include "algostuff.hpp"
using namespace std;

bool absLess(int elem1, int elem2)
{
    return abs(elem1) < abs(elem2);
}

int main()
{
    deque<int> coll;

    INSERT_ELEMNTES(coll, 2, 6);
    INSERT_ELEMNTES(coll, -3, 6);
    PRINT_ELEMENTS(coll);
    
    //process and print minimum and maximum
    cout << "minimum: " << *min_element(coll.cbegin(), coll.cend()) << endl;
    cout << "maximum: " << *max_element(coll.cbegin(), coll.cend()) << endl;

    // print min and max and their distance using minmax_element()
    auto mm = minmax_element(coll.cbegin(), coll.cend());
    cout << "min: " << *(mm.first) << endl;     //print minimum
    cout << "max: " << *(mm.second) << endl;    //print maximum 
    cout << "distance: " << distance(mm.first, mm.second) << endl;

    //process and print minimum and maximum of absolute values
    cout << "minimum of absolute values: " << *min_element(coll.cbegin(), coll.cend(), absLess) << endl;
    cout << "maximum of absolute values: " << *max_element(coll.cbegin(), coll.cend(), absLess) << endl;
}

