#include <iostream>
using namespace std;

int peak_finder_1d(int array[], int start, int end){
    int middle = (end + start + 1) / 2;

    if(array[middle] < array[middle - 1])
	return peak_finder_1d(array, start, middle - 1);
    if(array[middle] < array[middle + 1])
	return peak_finder_1d(array, middle + 1, end);

    return middle;
}

int main(int argc, char **argv){

    int array[] = {0, 3, 5, 8, 7, 9, 2, 13};
    cout << "the peak position " << peak_finder_1d(array, 0, sizeof(array) / sizeof(array[0]) - 1) << endl;

}
