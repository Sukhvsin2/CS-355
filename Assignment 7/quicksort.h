#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

class QuickSort{
    int *arr, size;

    int partition(int arr[], int first, int last){

        swap(&arr[first], &arr[(first + last) / 2]);
        
        int pivot = arr[first];
        int smallIndex = first;

        for(int i = first+1; i<=last; i++){
            if(arr[i] < pivot){
                smallIndex++;
                swap(&arr[smallIndex], &arr[i]);
            }
        }
            swap(&arr[first], &arr[smallIndex]);
        return smallIndex;
    }
    void swap(int *f, int *s){
        int temp = *f;
        *f = *s;
        *s = temp;
    }
    void quickSortHelper(int arr[], int low, int high){
            if (low < high)
            {
                int pi = partition(arr, low, high);
                // print();
                quickSortHelper(arr, low, pi - 1);
                quickSortHelper(arr, pi + 1, high); 
            }
        }

    public:
        QuickSort(int size = 10){
            this->size = size;
            arr = new int[size];
            fillArray(arr);
            cout<<"Array Created Size: "<<this->size<<endl;
        }
        void fillArray (int *arr){
           srand (time(0));
           for(int i=0;i<10;i++){
                arr[i] = rand() % 100 + 1;
           }
        }
        void quickSort(){
            int low = 0, high = this->size - 1;
            quickSortHelper(this->arr, low, high);
        }
        void print(){
            for(int i=0;i<this->size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};