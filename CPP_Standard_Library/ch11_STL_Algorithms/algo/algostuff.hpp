#ifndef ALGOSTUFF_HPP
#define ALGOSTUFF_HPP

#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
#include <iostream>
#include <string>

//INSERT_ELEMNTES(collection, first, last)
//--fill values from first to last into the collection
//--NoTE:NO half-open range
template <typename T>
inline void INSERT_ELEMNTES(T& coll, int first, int last)
{
    for (int i = first; i <= last; i++){
        coll.insert(coll.end(), i);
    }
}

//PRINT_ELEMENTS()
//-prints optional string optcstr followed by
//-all elements of the collection coll
//-sperated by spaces
template<typename T>
inline void PRINT_ELEMENTS(const T& coll,
                           const std::string& optcstr="")
{
    std::cout << optcstr;
    for (auto elem:coll){
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
}

//PRINT_MAPPED_ELEMENTS()
//-prints optional string optcstr followed by
//-all elements of the key/value collection coll
//-separated by spaces
template <typename T>
inline void PRINT_MAPPED_ELEMENTS(const T& coll,
                                  const std::string& optcstr="")
{
    std::cout << optcstr;
    for (auto elem:coll){
        std::cout << '[' << elem.first << ',' << elem.second << "]";
    }
    std::cout << std::endl;
}

#endif /*ALGOSTUFF_HPP*/
