#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void quicksort(vector <int>&array, int low, int high){
    if(low >= high)
        return;

    int lowidx = low, highidx = high;
    int privokey = array[low + (high - low) / 2];

    while(lowidx < highidx){
        while(lowidx < highidx && array[highidx] > privokey){
            highidx--;
        }
        while(lowidx < highidx && array[lowidx] < privokey){
            lowidx++;
        }
        swap(array[lowidx], array[highidx]);
    }
    quicksort(array, low, highidx- 1);
    quicksort(array, highidx+1, high);
}

void quick_sort(vector <int>&array, int size)
{
    quicksort(array, 0, size);
}

int main(){
    vector <int>array = {7, 9, 3, 4, 12, 34, 25, 80, 0, 5, 55};

    quick_sort(array, array.size() - 1);
    for(auto i = array.begin(); i < array.end(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}

