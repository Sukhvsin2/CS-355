
#ifndef Absort_
#define Absort_
#include "AbstractSort.h"
#endif

using namespace std;
class Increasing: public AbstractSort{
    public:

        bool compare(int a, int b){
            return a > b;
        }
};

