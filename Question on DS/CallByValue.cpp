#include <iostream>
using namespace std;

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "formal parameter" << a << " " << b << endl;
}

int main()
{

    int a = 10, b = 20;
    callByValue(a, b);
    cout << "actual parameter" << a << " " << b << endl;
}