#include <iostream>
//#include <math.h>
#include <cmath>

using namespace std;

float a=10, b(10), c(20);

int main()
{
    cout << "Enter first number: (a)" << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;

    c=a+b;
    cout << "a + b sum: " << c << endl;

    c=a-b;
    cout << "a - b diffrence: " << c << endl;

    c=a*b;
    cout << "a * b multiplication: " << c << endl;

    c=a/b;
    cout << "a / b devision: " << c << endl;

    //c=c%b;
    //cout << "a and b devision reminder: " << c << endl;

    c=sqrt(a);
    cout << "a square root: " << c << endl;
    c=pow(a,b);
    cout << "a to b power: " << c << endl;

    return 0;
}
