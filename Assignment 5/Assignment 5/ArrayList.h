#include<iostream>
#include<cstdlib>
#include<time.h>
#include <unistd.h>

using namespace std;

class ArrayList{
    int *arr, size;
    public:
    ArrayList(int size=5){
        this->size = size;
        arr = new int[size];
        initlizeArray(arr, size);
    }
    void initlizeArray(int *arr, int size){
        srand(time(0));
        // waiting for time change and seed change
        sleep(1);
        // end
        for(int i=0;i<size;i++){
            arr[i] = rand() % 5 + 1;
        }
    }
    ArrayList operator=(ArrayList &obj){
        copy(obj);
        return *this;
    }
    void copy(ArrayList &obj){
        cout<<"Copy function\n";
        for(int i=0;i<5;i++){
            arr[i] = obj.arr[i];
        }
    }
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void bubbleSort() { 
        for (int i = 0; i < size-1; i++)
            for (int j = 0; j < size-i-1; j++) 
                if (arr[j] > arr[j+1]) 
                    swap(&arr[j], &arr[j+1]); 
    } 
    void selectionSort(){
        int maxIndex = 0;
        for(int i=size-1;i>=0;i--){
            maxIndex = 0;
            for(int j=0; j<=i;j++){
                if(arr[j] > arr[maxIndex] ) maxIndex= j;
            }
            if(maxIndex != i) swap(&arr[i], &arr[maxIndex]);
        }
    }
    void insertionSort(){
        for(int i=0;i<size-1;i++){
            for(int j=i; j>=0; j--){
                if(arr[j] < arr[j-1]) swap(&arr[j], &arr[j-1]);
            }
        }
    }
    void print(){
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
