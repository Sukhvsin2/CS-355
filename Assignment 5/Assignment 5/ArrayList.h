#include<iostream>
#include<cstdlib>
#include <unistd.h>

using namespace std;

class ArrayList{
    int *arr;
    public:
    ArrayList(int size=5){
        arr = new int[size];
        initlizeArray(arr, size);
    }
    int* getArr(){
        return arr;
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
    void print(){
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
