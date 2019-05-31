#include <iostream>
using namespace std;

void selection_sort(int array[], int size){
    int tmp;
    for(int i = 0; i < size - 1; i++){
        int smallidx = i;
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[i])   
                smallidx = j;
        }
        tmp = array[i];
        array[i] = array[smallidx];
        array[smallidx] = tmp;
    }
}

int main(){
    int array[] = {34, 17, 23, 35, 45, 9, 1};

    selection_sort(array, sizeof(array)/sizeof(array[0]));

    for(unsigned long i = 0; i < sizeof(array)/sizeof(array[0]); i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}
