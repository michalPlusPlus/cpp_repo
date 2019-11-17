#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy (int x, int y) {
    COORD c;
    c.X = x-1;
    c.Y = y-1;
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}

int main()
{
    int i,j, t(70);

    for (i=1; i<10; i++) {
        gotoxy (i, 5);
        if (i%2==0) {
            cout << "0~";
        }
        else {
            cout << "0~~";
        }
        for (j=1; j<i; j++) {
            if (j%2==0) {
                gotoxy (j, 5);
                cout << "\\";
            }
            else {
                gotoxy (j, 5);
                cout << "/";
            }
        }
        system ("cls");
        Sleep (t);
    }

    for (i=1; i<85; i++) {
        gotoxy (i, 5);

        if (i%2==0) {
            cout << "/\\/\\/\\/\\/\\0~";
        }
        else {
            cout << "\\/\\/\\/\\/\\/0~~";
        }

        Sleep (t);
        system ("cls");

    }
    Sleep (t);

    /*for (i=21; i<30; i++) {
        for (j=10; j>0; j--) {
            if (j%2==0) {
                gotoxy (i, 5);
                cout << "\\";
            }
            else {
                gotoxy (i, 5);
                cout << "/";
            }
        }
        system ("cls");
        Sleep (t);
    }*/

    return 0;
}
