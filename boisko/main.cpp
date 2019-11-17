#include <iostream>
#include <windows.h>
HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;

void gotoxy (int x, int y) {
    COORD c;
    c.X = x-1;
    c.Y = y-1;
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}

void field (int a=10) {
    // field_horizontal
    cout << "|";
    for (int i=1; i<=a; i++) {
        cout << "-";
    }
    cout << "|    |";
    for (int i=1; i<=a; i++) {
        cout << "-";
    }


    // field_vertical
    for (int i=1; i<=2*a; i++) {
        cout << "|" << "\n";
    }


    // field_horizontal 2
    cout << "|";
    for (int i=1; i<=a; i++) {
        cout << "-";
    }
    cout << "|    |";
    for (int i=1; i<=a; i++) {
        cout << "-";
    }
    cout << "|";


    // field_vertical 2
    for (int i=1; i<=2*a; i++) {
        gotoxy (28, i);
        cout << "|" << "\n";
    }
}

void players () {
    // player 1
    gotoxy (7, 7);
    cout << "H";

    // player 2
    gotoxy (22, 8);
    cout << "H";

    // player 3
    gotoxy (21, 17);
    cout << "H";

    //player 4
    gotoxy (15, 17);
    cout << "H";
}


int main()
{
    int t=80;

    // ball pass 1 -> 2
    for (int j=8; j<22; j++) {
        field ();
        players ();
        gotoxy (j, 8);
        cout << "o";
        Sleep (t);
        system ("cls");
    }

    //ball pass 2 -> 3
    for (int j=8; j<17; j++) {
        field ();
        players ();
        gotoxy (21, j);
        cout << "o";
        Sleep (t);
        system ("cls");
    }

    //ball pass 3 -> 4
    for (int j=20; j>15; j--) {
        field ();
        players ();
        gotoxy (j, 17);
        cout << "o";
        Sleep (t);
        system ("cls");
    }

    //goal
    for (int j=18; j<22; j++) {
        field ();
        players ();
        gotoxy (15, j);
        cout << "o";
        Sleep (t);
        system ("cls");
    }

    //happy end bonus
    for (int k=1; k<4; k++) {
        SetConsoleTextAttribute (hconsole, 12);
        gotoxy (1, 1);
        field ();
        players ();
        Sleep (t);
        system ("cls");

        SetConsoleTextAttribute (hconsole, 15);
        gotoxy (1, 1);
        field ();
        players ();
        Sleep (t);
    }


    gotoxy (1, 22);
    cout << "\n";

    return 0;
}
