#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    cout << "After swap: x = " << x << ", y = " << y << endl;
}

int main()
{
    int x = 40;
    int y = 50;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y);

    return 0;
}
