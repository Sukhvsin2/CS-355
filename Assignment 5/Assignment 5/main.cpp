#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
    ArrayList list1, list2;
    cout<<"Before: ";
    list1.print();
    list1.insertionSort();
    cout<<"After: ";
    list1.print();
    return 0;
}
