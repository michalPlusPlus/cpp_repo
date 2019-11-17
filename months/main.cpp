#include <iostream>

using namespace std;

int get_month() {
    int m(1);

    do {
        cout << "Enter month <1-12>: ";
        cin.clear();
        cin.sync();
        cin >> m;
    }
    while(cin.fail() || m<1 || m>12);

    return m;
}

int get_year() {
    int y(2002);

    do {
        cout << "Enter year: ";
        cin.clear();
        cin.sync();
        cin >> y;
    }
    while(cin.fail() || y<1);

    return y;
}


int main()
{
   switch(get_month()) {
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31";
        break;
    case 2:
        if(get_year()%4==0)
            cout << "29";
        else
            cout << "28";
        break;
    default:
        cout << "Value out of range." << endl;
   }

   cout << " days in entered month." << endl;

   return 0;
}
