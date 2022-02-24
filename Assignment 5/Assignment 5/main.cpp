#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
    ArrayList list1, list2, list3;
    list2 = list1;
    list3 = list2;

    // list1.print();
    list1.bubbleSort();
    list2.selectionSort();
    list3.insertionSort();



    return 0;
}
