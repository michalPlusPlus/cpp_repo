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
    int i;

    //pierwsze M
    for (i=1; i<=13; i++) {
        gotoxy (1, i+1);
        cout << "#";
    }
    for (i=1; i<=7; i++) {
        gotoxy (i, i);
        cout << "#";
    }

    for (i=1; i<=7; i++) {
        gotoxy (i+7, 8-i);
        cout << "#";
    }
    for (i=1; i<=13; i++) {
        gotoxy (14, i+1);
        cout << "#";
    }


    //drugie M
    for (i=1; i<=13; i++) {
        gotoxy (18, i+1);
        cout << "#";
    }
    for (i=1; i<=7; i++) {
        gotoxy (i+17, i);
        cout << "#";
    }

    for (i=1; i<=7; i++) {
        gotoxy (i+24, 8-i);
        cout << "#";
    }
    for (i=1; i<=13; i++) {
        gotoxy (31, i+1);
        cout << "#";
    }

    gotoxy (1, 15);
    return 0;
}
