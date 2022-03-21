#include <iostream>
#include "quicksort.h"

using namespace std;

int main(){
    QuickSort q;
    q.print(); 
    q.quickSort();
    q.print();
    return 0;
}