#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int org_num(1), num, rem, sum(0), dig(0);

    //number input
    do {
        cout << "Enter a number: ";
        cin.clear();
        cin.sync();
        cin >> org_num;
    }
    while(cin.fail() || org_num<1);

    num = org_num;

    //digits counting
    while (num != 0) {
        rem = num%10;
        num /= 10;
        dig++;
    }
    num = org_num;

    //colculating via formula
    while(num != 0) {
        rem = num%10;
        sum += pow(rem, dig);
        num /= 10;
    }

    //checking, displaying
    if(sum == org_num)
        cout << org_num << " is an Armstrong number." << endl;
    else
        cout << org_num << " is not an Armstrong number." << endl;


    return 0;
}
