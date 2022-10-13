#include <iostream>
using namespace std;

void swap(int array[], int pos1, int pos2){
    int temp;
    temp = array[pos2];
    array[pos2] = array[pos1];
    array[pos1] = temp;
}
int partition(int array[], int start, int end){
    int count = 0;
    for (int i = start; i <= end; i ++){
        if (array[start] > array[i]){
            count ++;
        }
    }
    int p_index = start + count;
    swap(array, start, p_index);
    int i = start;
    int j = end;
    while(i < p_index && j > p_index){
        while (array[i] <= array[p_index]) {
            i++;
        }
 
        while (array[j] > array[p_index]) {
            j--;
        }
 
        if (i < p_index && j > p_index) {
            swap(array[i++], array[j--]);
        }
    }
    return p_index;

}

void quick_sort(int array[], int start, int end){
    if (start < end){
        int p;
        p = partition(array, start, end);
        quick_sort(array, start, p - 1);
        quick_sort(array, p + 1, end);
    }
}

void print_array(int array[], int n){
    for (int i = 0; i < n; i++){
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
    quick_sort(array, 0, n - 1);
    cout << "The sorted array is:" << endl;
    print_array(array, n);
}