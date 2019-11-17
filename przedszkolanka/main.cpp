#include <iostream>

using namespace std;

//NWD - najwiêkszy wspolny dzielnik
//NWW - najmniejsza wspolna wielokrotnosc

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
}

int NWD(int a, int b) {
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    return a;
}

int main() {
    int exmp_amount(1), enter_a(1), enter_b(1);

    exmp_amount = get_number("Enter number of examples (max 10): ", 10);
    cout << endl;

    for (int i=0; i<exmp_amount; i++) {
        cout << "Example " << i+1 << ":" << endl;
        enter_a = get_number("number1: ", 100);
        enter_b = get_number("number2: ", 100);

        cout << enter_a*enter_b/NWD(enter_a,enter_b) << endl << endl;
    }

    return 0;
}
