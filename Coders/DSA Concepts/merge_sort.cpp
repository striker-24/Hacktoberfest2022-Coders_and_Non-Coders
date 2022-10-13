#include <iostream>
using namespace std;

void merge(int *array, int start, int end, int mid){
    int i = start, j = mid + 1, k = 0, temp[end - start + 1];
    while(i <= mid && j <= end){
        if (array[i] < array[j]){
            temp[k] = array[i];
            i ++;
            k ++;
        }
        else{
            temp[k] = array[j];
            j ++;
            k ++;
        }
    }
    while (i <= mid){
        temp[k] = array[i];
        i ++;
        k ++;
    }
    while (j <= end){
        temp[k] = array[j];
        k ++;
        j ++;
    }
    for (i = start; i <= end; i++){
        array[i] = temp[i - start];
    }
}

void merge_sort(int *array, int start, int end){
    int mid;
    if (start < end){
        mid = (start + end) / 2;
        merge_sort(array, start, mid);
        merge_sort(array, mid + 1, end);
        merge(array, start, end, mid);
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
    merge_sort(array, 0, n);
    cout << "The sorted array is:" << endl;
    print_array(array, n);
}