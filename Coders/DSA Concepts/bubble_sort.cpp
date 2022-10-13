#include <iostream>
using namespace std;

void bubble_sort(int array[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
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
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << "The original array is:" << endl;
    print_array(array, n);
    bubble_sort(array, n);
    cout << "The sorted array is:" << endl;
    print_array(array, n);
}