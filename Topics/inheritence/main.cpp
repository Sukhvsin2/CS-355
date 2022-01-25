#include <iostream>
#include "square.h"

using namespace std;

int main()
{
    Rectangle r1;
    r1.setDimensions(9,10);
    r1.print();

    Square s1;
    s1.setDimensions(9,9);
    s1.print();
    return 0;
}
