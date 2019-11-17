#include <iostream>

using namespace std;

bool check(int a) {
	if (a<2)
		return 0;

	for (int i=2; i*i<=a; i++)
		if(a%i==0)
			return 0;
	return 1;
}

int main()
{
    int number(1);

    cout << "Enter the number: " << endl;
    cin >> number;

    if (check(number)==1) {
		cout << number << " is a prime number" << endl;
    }
	else {
		cout << number << " is not a prime number" << endl;
	}

    return 0;
}
