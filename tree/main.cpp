#include <iostream>
#include <windows.h>
HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;

void star (int n) {
    for (int i=1; i<=n; i++)
        cout << "*";
}

void space (int n=0) {
    //space (0) space (1000) space(-10) space ()
    for (int i=1; i<=n; i++)
        cout << " ";
}

int main()
{
    int i(1), n(5);
    do {
        cout << "Enter tree size (between 5 and 25):  ";
        cin.clear();
        cin.sync();
        cin >> n;
    }
    while(cin.fail() || n>25 || n<5);

    space (n);
    SetConsoleTextAttribute (hconsole, 14);
    cout << "WW";
    cout << "\n";
    SetConsoleTextAttribute (hconsole, 10);
    for (i=1; i<=n; i++) {
        space (n-i);
        if (i%2==0) {
            SetConsoleTextAttribute (hconsole, 14);
            cout << "8";
            SetConsoleTextAttribute (hconsole, 12);
        }
        else
            cout << " ";
        star (2*i);
        if (i%2==0) {
            SetConsoleTextAttribute (hconsole, 14);
            cout << "8";
            SetConsoleTextAttribute (hconsole, 10);
        }
        cout << "\n";
    }

    if (n<18) {
        space (n);
        SetConsoleTextAttribute (hconsole, 8);
        cout << "XX";
        cout << "\n";
        space (n);
        cout << "XX";
        SetConsoleTextAttribute (hconsole, 13);
        cout << " [][]" << endl;
    }
    else {
        SetConsoleTextAttribute (hconsole, 8);
        space (n);
        cout << "XXX";
        cout << "\n";

        space (n);
        cout << "XXX";
        cout << "\n";

        space (n);
        cout << "XXX";
        SetConsoleTextAttribute (hconsole, 13);
        cout << " [][] [][] []" << endl;
    }


    //console colors list:
    /*for (i=1; i<16; i++) {
        SetConsoleTextAttribute (hconsole, i);
        //cout << "\030[1;31mbold red text\030[0m\n";

        cout << i << " kolorowa choinka" << endl;
    }*/

    return 0;
}
