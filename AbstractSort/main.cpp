#include <iostream>
#include "Increasing.h"
#include "Decreasing.h"

using namespace std;

int main()
{
    Increasing In;
    cout<<"Increasing Object Calls: "<<endl;
    In.print();
    In.sort();
    In.print();

    Decreasing Dc;
    cout<<"\nDecreasing Object Calls: "<<endl;
    Dc.print();
    Dc.sort();
    Dc.print();
    return 0;
}
