//Container 3 category
//1. sequnce containers(array and linked list): vector, deque, list, forward list, array
//2.associative containers(binary tree):set/multiset, map/multimap
//3.unordered containers(hash table):unordered set/multiset, unordered map/multimap
//STL headers
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <algorithm>
#include <numeric>  // some numeric algorithm
#include <functional>
#include <iostream>
using namespace std;

void foo(const std::unordered_map<char, std::string>& m)
{
    auto itr = m.find('M');
    if (itr != m.end())
        cout << itr->first << " " << itr->second << std::endl;
}

int main()
{
    std::unordered_map<char, std::string> m = {{'M', "Monday"},{'T', "Tuesday"}};
    foo(m);

    return true;
}
