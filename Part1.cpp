#include <iostream>
using namespace std;

int* createArray (int size);
void initializeArray(int *array, int size);
void printArray(int *array, int size);
void deleteArray(int *array);



int main() {
    int size;
    cout << "size" ;
    cin >> size;
    int *pmyArray = createArray(size);
    initializeArray(pmyArray, size);
    printArray(pmyArray, size);
    deleteArray(pmyArray);
    return 0;
}



int* createArray (int size) {
    int *myArray = new int[size];
    return myArray;
}

void initializeArray(int *array, int size){
    for( int i = 0; i < size; i++){
         array[i] = i;
    }
}

void printArray(int *array, int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " " ;
    }
}

void deleteArray(int *array){
    delete[] array;
}