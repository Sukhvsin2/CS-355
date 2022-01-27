#ifndef H_caesar
#define H_caesar
#endif
#include "caesarCipher.h"

class AdCipher : public caesarCipher{
    string arr;
    public:
        AdCipher() : caesarCipher(1){}
        AdCipher(int x): caesarCipher(x){}


        void getMessage(){
            cout<<"Enter your Message";
            cin>>arr;
            arr = encrypt(arr);
        }
        void print(){
            caesarCipher :: print();
            cout<<endl<<arr<<endl;
            cout<<decrypt(arr)<<endl;
        }

};
