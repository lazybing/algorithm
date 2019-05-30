#include <iostream>
using namespace std;

void insertion_sort(int array[], int size)
{
    int tmp;

    for(int j = 1; j < size; j++){
        tmp = array[j];
        int i = j - 1;
        while(i >= 0 && tmp < array[i]){
                array[i + 1] = array[i];
                i--;
        }
        array[i + 1] = tmp;
    }
                
}

int main(int argc, char **argv){
    int array[] = {8, 2, 4, 9, 3, 6};

    insertion_sort(array, sizeof(array) / sizeof(array[0]));

    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}
