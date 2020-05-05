#include <iostream>

using namespace std;

//function to avoid non-int data and data out of given interval
int get_number(const char* text, const int min_val, const int max_val) {
    int gn(1);
    do {
        cout << text;
        cin.clear();
        cin.sync();
        cin >> gn;
    }
    while(cin.fail() || gn<min_val || gn>max_val);
    return gn;
}

int main() {
    int exmp_amnt(1), num(1), steps(0);

    //entering examples amount
    exmp_amnt = get_number("Enter examples amount: ", 1, 10);

    //entering number to consider
    for (int e=0; e<exmp_amnt; e++) {
        num = get_number("Enter number: ", 1, 10000);

        //executing given algorithm
        while (num!=1) {
            if (num%2==1) {
                steps+=1;
                num = 3*num+1;
                cout << num << endl;
            }
            else {
                steps+=1;
                num/=2;
                cout << num << endl;
            }
        }

        cout << "Steps made: " << steps << endl << endl;

        steps=0; //reseting
    }

    return 0;
}
