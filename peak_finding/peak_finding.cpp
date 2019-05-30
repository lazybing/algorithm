#include <iostream>
#include <cmath>
using namespace std;

int peak_finder_1d(int array[], int start, int end){
    int middle = (end + start + 1) / 2;

    if(array[middle] < array[middle - 1])
	return peak_finder_1d(array, start, middle - 1);
    if(array[middle] < array[middle + 1])
	return peak_finder_1d(array, middle + 1, end);

    return middle;
}

// find the maximum in column "mid"
int findMax(int arr[][4], int rows, int mid, int &max)
{
    int max_idx = 0;
    for(int i = 0; i < rows; i++)    
	if(arr[i][mid] >= max){
	    max = arr[i][mid];
	    max_idx = i;
	}
    return max_idx;
}

//Function to find a peak element in 2d array
int peak_finder_2d(int arr[][4], int rows, int columns, int mid)
{
    int max = 0;
    int max_idx = findMax(arr, rows, mid, max);

    if ( mid == 0 || mid == columns - 1 )
	return max;

    if ( max >= arr[max_idx][mid - 1] &&
	 max >= arr[max_idx][mid + 1])
	 return max;

    if (max < arr[max_idx][mid - 1])
	return peak_finder_2d(arr, rows, columns, mid -ceil((double)mid / 2));

    if (max < arr[max_idx][mid + 1])
	return peak_finder_2d(arr, rows, columns, mid + ceil((double)mid / 2));

    return max;
}

int main(int argc, char **argv){

    int array[] = {0, 3, 5, 8, 7, 9, 2, 13};
    cout << "the peak position " << peak_finder_1d(array, 0, sizeof(array) / sizeof(array[0]) - 1) << endl;

    int array2d[][4] = {{10, 8, 10, 10},
		       {14, 13, 12, 11},
		       {15, 9, 11, 21},
		       {16, 17, 19, 20}};
    cout << "the peak number in 2d array " << peak_finder_2d(array2d, 4, 4, 2) << endl;

    return 0;
}

