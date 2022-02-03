
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

class AbstractSort{
    int *ptr;

    public:
        AbstractSort(){
            ptr = new int[10];
            srand (time(0));
            randomFill(ptr);
        }

        void randomFill (int *ptr){
           for(int i=0;i<10;i++){
                ptr[i] = rand() % 100 + 1;
           }
        }

        void print(){
           for(int i=0;i<10;i++){
                cout<<ptr[i]<<" ";
           }
           cout<<endl;
        }

        virtual bool compare(int, int) = 0;

        void swap(int *a, int *b){
            int temp = *a;
            *a = *b;
            *b = temp;
        }

        void sort(){
            int sorted = 1;
            for(int i=0;i<10;i++){
                for(int j=0;j<10-i-1;j++){
                    if(compare(ptr[j], ptr[j+1])){
                        swap(&ptr[j], &ptr[j+1]);
                        sorted = 0;
                    }
                }
            }
            if(sorted) return;
        }

};
