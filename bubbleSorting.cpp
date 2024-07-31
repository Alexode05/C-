#include <iostream>
#include <algorithm> // std::swap
using namespace std;

void sort(int array[], int size);

int main() {
    int array[] = {5, 3, 8, 1, 2};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    
    for(int element : array){
        cout << element << " ";
    }
    return 0;
}

void sort(int array[], int size){
    for(int i = 0 ;i < size -1; i++){
        for(int j = 0 ;j < size -i -1; j++){ // !!!! size -i -1
            if(array[j] > array[j+1]){  // < to sort in descending order
                swap(array[j], array[j+1]);
            }   
        }
    }

}