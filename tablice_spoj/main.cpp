#include <iostream>
#include <vector>
#include <cstdio>


using namespace std;

int expm_amount(1), num_in_emp, temp;
vector <int> numbers;

int main() {
    cout << "Enter examples amount: ";
    cin >> expm_amount;

    for (int i=0; i<expm_amount; i++) {
        cout << "Numbers in example " << i+1 << ": ";
        cin >> num_in_emp;

        for (int j=0; j<num_in_emp; j++) {
            cin >> temp;
            numbers.push_back(temp);
        }
        for (int k=numbers.size()-1; k<=numbers.size(); k--) {
            cout << numbers[k];
        }
        numbers.clear();
        cout << endl;
    }

    return 0;
}
