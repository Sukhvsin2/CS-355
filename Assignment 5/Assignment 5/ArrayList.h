#include<iostream>
#include<stdio.h>
#include<time.h>

using namespace std;

class ArrayList{
    public:
    int *arr;
    ArrayList(int size=5000){
        arr = new int[size];
        initlizeArray(arr, size);
    }
    int* getArr(){
        return arr;
    }
    void initlizeArray(int *arr, int size){
        srand(time(0));
        for(int i=0;i<size;i++){
            arr[i] = rand() % 5000 + 1;
        }
    }
    ArrayList operator=(ArrayList &obj){
        ArrayList newList;
        for(int i=0;i<5000;i++){
            newList.arr[i] = arr[i];
        }
        return newList;
    }
};
