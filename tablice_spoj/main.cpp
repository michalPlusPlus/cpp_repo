#include <iostream>
#include <vector>
#include <cstdio>


using namespace std;

int exmp_amount(1), num_amount(2); //num_cache(0);
string locl_cache;
vector <string> vec_numbers;

int get_number(const char* text) {
    int gn(1);
    do {
        cout << text;
        cin.clear();
        cin.sync();
        cin >> gn;
    }
    while(cin.fail() || gn<1 || gn>10);
    return gn;
}

int main() {
    exmp_amount = get_number("Enter examples amount (max 10): ");

    for (int i=0; i<exmp_amount; i++) {
        cout << endl << "Example " << i+1;
        num_amount = get_number(" amount of elements (max 10): ");

        for (int j=0; j<num_amount; j++) {
            cin >> locl_cache;
            vec_numbers.push_back(locl_cache);
        }

        for (int k=vec_numbers.size()-1; k<=vec_numbers.size(); k--) {
            cout << vec_numbers[k] << " ";
        }

        vec_numbers.clear();
        cout << endl;
    }

    return 0;
}
