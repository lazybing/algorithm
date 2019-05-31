#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void Merge(vector<int> &Array, int front, int mid, int end){
    //preconditions:
    //Array[front...mid] is sorted
    //Array[mid + 1...end] is sorted
    //Copy Array[front...mid] to leftsubarray
    //Copy Array[mid + 1...end] to rightsubarray
    vector<int> LeftSubArray(Array.begin() + front, Array.begin() + mid + 1);
    vector<int> RightSubArray(Array.begin() + mid + 1, Array.begin() + end + 1);

    int idxLeft = 0, idxRight = 0;
    LeftSubArray.insert(LeftSubArray.end(), numeric_limits<int>::max());
    RightSubArray.insert(RightSubArray.end(), numeric_limits<int>::max());
    //Pick min of LeftSubArray[idxLeft] and RightSubArray[idxRight], and put into Array[i]
    for(int i = front; i < end; i++){
	    if(LeftSubArray[idxLeft] < RightSubArray[idxRight]){
	        Array[i] = LeftSubArray[idxLeft];
	        idxLeft++;
	    } else {
	        Array[i] = RightSubArray[idxRight];
	        idxRight++;
	    }
    }
}

void MergeSort(vector<int>&Array, int front, int end){
    if (front >= end)
	    return;

    int mid = front + (end - front) / 2;
    MergeSort(Array, front, mid);
    MergeSort(Array, mid + 1, end);
    Merge(Array, front, mid, end);
}

template <typename T>
void merge_sort(T arr[], int len){
    T *a = arr;
    T *b = new T[len];
    for(int seg = 1; seg < len; seg += seg){
        for(int start = 0; start < len; start += seg + seg){
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while(start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while(start1 < end1)
                b[k++] = a[start1++];
            while(start2 < end2)
                b[k++] = a[start2++];
        }
        T *temp = a;
        a = b;
        b = temp;
    }
    if(a != arr){
        for(int i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    delete[] b;
}

int main(int argc, char **argv){
    //merge sort of the top-down method
    vector<int> Array{3, 7, 5, 9, 7, 10, 23};

    MergeSort(Array, 0, Array.size() - 1);

    for (auto i = Array.begin(); i != Array.end(); i++)
	cout << *i << " ";
    cout << endl;

    //merge sort of the bottom-up method
    int array[] = {3, 7, 5, 9, 7, 10, 23};
    merge_sort(array, sizeof(array)/sizeof(array[0]));
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
        cout << array[i] << " ";
    cout << endl;

    return true;
}

