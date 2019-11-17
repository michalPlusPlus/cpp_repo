#include <iostream>

using namespace std;



int silnia (int param) {
    int result(1); //program result n! initialised for silnia(1)
    for (int i=2; i<=param; i++) {
        result*=i;
    }
    return result;
}

int r_silnia (int n) {
    int result(1);

    if (n==1) {
        return result;
    }
    else {
        result = r_silnia(n-1)*n;
    }

    return result;
}

/*
int r_silnia (int n) {
    if (n==1) {
        return 1;
    }
    else {
        return r_silnia(n-1)*n;
    }
}
*/

int main(int argc, char* argv[])
{
    int input_param(10); //entered parameter

    if (argc<2) {
        cout << "Command line parameter has not been entered." << endl;
        return 0;
    }

    char option = *argv[1];

    switch (option) {
    case '?':
        cout << "     's' - for method" << endl
             << "     'r' - if and else method" << endl;
        break;
    case 's':
        cout << input_param << "! = " << silnia(input_param);
        break;
    case 'r':
        cout << input_param << "! = " << r_silnia(input_param);
        break;
    default:
        cout << "Selected counting option not supported";
    }

    cout << endl;


    return 0;
}
