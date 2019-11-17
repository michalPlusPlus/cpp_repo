#include <iostream>
using namespace std;

float a(3), b(4), c(5);

int main()
{
    cout << "Give a: " << endl;
    cin >> a;

    if(!cin.fail()) {
        cout << "Give b: " << endl;
        cin >> b;

        if(!cin.fail()) {
            cout << "Give c: " << endl;
            cin >> c;

            if(!cin.fail()){
                if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
                    cout << "Triangle possible to create" << endl;
                }
                else {
                    cout << "Building triangle impossible" << endl;
                }
            }
        }
    }

    if(cin.fail()) {
        cin.clear();
        cout << "Unacceptable data, further processes aborted" << endl;
    };

    return 0;
}
