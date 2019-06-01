#include <iostream>
using namespace std;

void bubble_sort(int array[], int size){
    int tmp;
    for(int i = 0; i < size - 1; i++) 
        for(int j = 1; j < size - i; j++){
            if(array[j - 1] > array[j]){
                tmp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = tmp;
            }
        }
}

int main(){
    int array[] = {23, 45, 8, 9, 2, 5, 7};

    bubble_sort(array, sizeof(array) / sizeof(array[0]));

    for(unsigned long i = 0; i < sizeof(array) / sizeof(array[0]); i++)
        cout << array[i] << " ";
    cout << endl;
    
    return 0;
}
