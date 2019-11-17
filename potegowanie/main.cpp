#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


struct data_format {
    int base, exponent;
    double result;

    data_format(): base(1), exponent(1) {
    }
    data_format(int b, int e) {
        base=b;
        exponent=e;
        result = pow(static_cast<double>(base), static_cast<double>(exponent));
    }
    int display_value() {
       return static_cast<int>(result);
    }
};

vector<data_format> data_store;

int get_number(const char* text, const int max_val) {
    int gn(1);
    do {
        cout << text;
        cin.clear();
        cin.sync();
        cin >> gn;
    }
    while(cin.fail() || gn>max_val);
    return gn;
}

int main() {
    int exmp_amount(1);

    exmp_amount = get_number("Enter number of examples (max 6): ", 6);
    cout << endl;

    for (int i=0; i<exmp_amount; i++) {
        cout << "Operation " << i+1 << " data:" << endl;
        int b(get_number("base: ", 100)),
            e(get_number("exponent: ", 100));
        data_format data_entry(b, e);
        data_store.push_back(data_entry);
        cout << endl;
    }

    cout << endl;

    for (int i=0; i<exmp_amount; i++) {
        cout << "Last digit of operation " << i+1 << " is " << data_store[i].display_value()%10 << endl;
    }

    return 0;
}
