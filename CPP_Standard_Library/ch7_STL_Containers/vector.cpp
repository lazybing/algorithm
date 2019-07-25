#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    // create empty vector for strings
    vector<string> sentence;

    //reserve memory for five elements to avoid reallocation
    sentence.reserve(5);

    // append some elements
    sentence.push_back("hello,");
    sentence.push_back("how");
    sentence.push_back("are");
    sentence.push_back("you");
    sentence.push_back("?");

    // print elements separated with spaces
    for (vector<string>::iterator itr = sentence.begin(); itr != sentence.end(); itr++)
        cout << *itr << " ";
    cout << endl;

    // print 'technical data'
    cout << "max_size(): " << sentence.max_size() << endl;
    cout << "size(): " << sentence.size() << endl;
    cout << "capacity(): " << sentence.size() << endl;

    //swap second and fourth element
    swap(sentence[1], sentence[3]);

    // print elements separated with spaces
    for (vector<string>::iterator itr = sentence.begin(); itr != sentence.end(); itr++)
        cout << *itr << " ";
    cout << endl;

    // insert element "always" before element "?"
    sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");

    // print elements separated with spaces
    for (vector<string>::iterator itr = sentence.begin(); itr != sentence.end(); itr++)
        cout << *itr << " ";
    cout << endl;

    //assign "!" to the last element
    sentence.back() = "!";

    // print elements separated with spaces
    for (vector<string>::iterator itr = sentence.begin(); itr != sentence.end(); itr++)
        cout << *itr << " ";
    cout << endl;

    // print 'technical data'
    cout << "max_size(): " << sentence.max_size() << endl;
    cout << "size(): " << sentence.size() << endl;
    cout << "capacity(): " << sentence.size() << endl;

    return true;
}
