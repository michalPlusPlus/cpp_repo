#include <iostream>

using namespace std;

int main()
{
    int a(0), steps(0);

    do {
        cout << "Enter number (above 1): ";
        cin.clear();
        cin.sync();
        cout << "\n";
        cin >> a;
    }
    while (cin.fail() || a<2);


    while (a!=1) {
        if (a%2==1) {
            steps+=1;
            a = 3*a+1;
            cout << a << endl;
        }
        else {
            steps+=1;
            a/=2;
            cout << a << endl;
        }
    }

    cout << "\n";
    cout << "Steps made: " << steps << endl << endl;

    return 0;
}
