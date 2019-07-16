//an example of using hashset
#include <unordered_set>
#include <iostream>

using namespace std;

int main()
{
    // initialize a hash set
    unordered_set<int> hashset;

    // insert a new key
    hashset.insert(3);
    hashset.insert(2);
    hashset.insert(1);

    // delete a key
    hashset.erase(2);

    // check if the key is in the hash set
    if (hashset.count(2) <= 0) {
        cout << "Key 2 is not in the hash set." << endl;
    }

    // get the size of the hash set
    cout << "The size of hash set is: " << hashset.size() << endl;

    // iterate the hash set
    for (auto it = hashset.begin(); it != hashset.end(); it++)
        cout << (*it) << " ";
    cout << "are in the hash set." << endl;

    // clear the hash set
    hashset.clear();

    // check if the hash set is empty
    if (hashset.empty()) {
        cout << "hash set is empty now!" << endl;
    }

}
