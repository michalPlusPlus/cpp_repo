#include <iostream>

using namespace std;
int y;
int main()
{
    cout << "Enter year: " << endl;
    cin >> y;
    if ((y%4==0)&&(y%100!=0)||(y%400==0))
        cout << "Leap year" << endl;
    else
        cout << "Standard year" << endl;
    return 0;
}
