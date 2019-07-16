// an example of using the hash map
#include <unordered_map>
#include <iostream>
using namespace std;

int main()
{
    // initialize a hash map
    unordered_map<int, int> hashmap;

    // insert a new (key, value) pair
    hashmap.insert(make_pair(0, 0));
    hashmap.insert(make_pair(2, 3));

    // insert a new (key, value) pair or updated the value of existed key
    hashmap[1] = 1;
    hashmap[1] = 2;

    // get the value of a specific key
    cout << "The value of key 1 is: " << hashmap[1] << endl;

    // delete a key
    hashmap.erase(2);

    // check if a key is in the hash map
    if (hashmap.count(2) <= 0)
        cout << "Key 2 is not in the has map." << endl;

    // get the size of the hash map
    cout << "the size of hash map is: " << hashmap.size() << endl;

    // iterate the hash map
    for (auto it = hashmap.begin(); it != hashmap.end(); it++)
       cout << "(" << it->first << ", " << it->second << ")"; 
    cout << "are in the hash map." << endl;

    // clear the hash map
    hashmap.clear();

    // check if the hash map is empty
    if (hashmap.empty())
        cout << "hashmap is empty now!" << endl;
}
