#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, int> mp;
    //mp[7] = 100;
    //mp[6] = 600;
    mp.insert(make_pair(4, 400));
    mp.insert(make_pair(5, 500));
    mp.insert(make_pair(5, 600));
    mp.insert(make_pair(5, 700));
    //mp[5] = 500;
    //mp[5] = 100;
    //mp[3] = 300;

    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << "---" << it->second << endl;

    return 0;
}
