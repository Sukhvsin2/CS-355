#ifndef H_caesar
#define H_caesar
#endif
#include "caesarCipher.h"

class AdCipher : public caesarCipher{
    string arr;
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    public:
        void shiftedAlpha(int shift){
            int shiftValue = shift;
            for(int i=0;i<26;i++){
	    		if (alpha[i] >= 97 && alpha[i] <= 122){
	   			    if (alpha[i]+shiftValue > 122){ 
			    		alpha[i]=122-(alpha[i]%97);	
		    		}
				    else{
					    alpha[i]+=shiftValue;
				    }		
			    }
		    }
        }
        AdCipher() : caesarCipher(1){
        }
        AdCipher(int x): caesarCipher(x){
        }


        void getMessage(){
            cout<<"Enter your Message";
            cin>>arr;
            arr = encrypt(arr);
            shiftedAlpha(limit);
        }
        void print(){
            caesarCipher :: print();
            cout<<endl<<arr<<endl;
            cout<<decrypt(arr)<<endl;
            cout<<"\nShifted Values : ";
            for(int i = 0; i < 26; i++){
                cout << alpha[i];
            }
        }

};
