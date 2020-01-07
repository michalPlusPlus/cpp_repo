#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy (int x, int y) {
    COORD c;
    c.X = x-1;
    c.Y = y-1;
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}
/*
int get_number(const char* text, const int max_val) {
    int gn(1);
    do {
        cout << text;
        cin.clear();
        cin.sync();
        cin >> gn;
    }
    while(cin.fail() || gn<1 || gn>max_val);
    return gn;
}*/

int main() {
    int speed(80);

    /*int_speed = get_number("Enter the snake speed (1, 2 or 3): ", 3);

    switch (int_speed) {
    case 1:
        speed==80;
        break;
    case 2:
        speed==50;
        break;
    case 3:
        speed==10;
        break;
    default:
    cout << "Value out of range." << endl;
    break;
    }*/

    for (int i=1; i<10; i++) {
        gotoxy (i, 5);
        if (i%2==0) {
            cout << "0~";
        }
        else {
            cout << "0~~";
        }
        for (int j=1; j<i; j++) {
            if (j%2==0) {
                gotoxy (j, 5);
                cout << "\\";
            }
            else {
                gotoxy (j, 5);
                cout << "/";
            }
        }
        Sleep (speed);
        system ("cls");
    }

    for (int i=1; i<85; i++) {
        gotoxy (i, 5);

        if (i%2==0) {
            cout << "/\\/\\/\\/\\/\\0~";
        }
        else {
            cout << "\\/\\/\\/\\/\\/0~~";
        }

        Sleep (speed);
        system ("cls");

    }
    Sleep (speed);

    return 0;
}
