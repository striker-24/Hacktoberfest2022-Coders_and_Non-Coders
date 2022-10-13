#include <iostream>
using namespace std;

void selectionSort(int array[], int n){
    for (int i = 0; i<n-1; i++){
        int min = array[i], minIndex = i;
        for (int j = i+1; j<n; j++){
            if (array[j]<min){
                min = array[j];
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

void print_array(int array[], int n){
    for (int i = 0; i<n; i++){
        cout << array[i] << "\t";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i<n; i++){
        cin >> array[i];
    }
    cout << "The original array is:" << endl;
    print_array(array, n);
    selectionSort(array, n);
    cout << "The sorted array is:" << endl;
    print_array(array, n);
}