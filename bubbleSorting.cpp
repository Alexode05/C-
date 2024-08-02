#include <iostream>
#include <algorithm> // std::swap
#include <ctime>
using namespace std;

void sort(int array[], int size);
void fillArray(int array[], int SIZE);


int main() {
    int SIZE = 100;
    int array[SIZE];
    int size = sizeof(array)/sizeof(array[0]);

    fillArray(array, SIZE);

    cout << size << "\n";
    cout << "\n";
    for(int num : array){
        cout << num << ", ";
    }

    cout << "\n";
    sort(array, size);
    for(int element : array){
        cout << element << ", ";
    }
    return 0;
}

void fillArray(int array[], int size){
    srand(time(0));

    for(int i = 0; i < size; i++){
        array[i] = rand() % 100;
    }
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