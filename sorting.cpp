
#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1 ; j < n; j++) {
             if(arr[j] < arr[i]){
                 swap(arr[j],arr[i]);
             }
        }
    }
}

void bubbleSort(int arr[],int n){
    int count = 1;
    
    while(count < n){
         for (int i = 0; i < n - count; i++) {
             if(arr[i] > arr[i+1]){
                 swap(arr[i],arr[i+1]);
             }
         }
         count++;
    }
}

void insertionSort(int arr[], int n){
    for (int i = 1; i < n ; i++){
        int current = arr[i];
        int j = i-1;
        
        while(j >= 0 && arr[j] > current){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = current;
    }
}

int main()
{
    int n = 8;
    int arr[n] = {8,7,6,5,2,3,2,1};
    
    insertionSort(arr,n);
    
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

