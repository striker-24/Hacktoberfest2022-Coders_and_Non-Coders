#include <iostream>
using namespace std;

void insertion_sort(int array[], int n){
    for (int i = 0; i < n; i++){
        int current = array[i];
        int j;
        for (j = i - 1; j >= 0; j--){
            if(current < array[j]){
                array[j + 1] = array[j];
            }
            else{
                break;
            }
        }
        array[j + 1] = current;
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
    insertion_sort(array, n);
    cout << "The sorted array is:" << endl;
    print_array(array, n);
}