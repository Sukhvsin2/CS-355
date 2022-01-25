#include<iostream>
using namespace std;

class Rectangle{
    int width, height;
    public:
        void setDimensions(int width, int height){
            this->width = width;
            this->height = height;
        }
        void print(){
            cout<<"This is Rectangle "<<width<<"x"<<height<<endl;
        }
};
