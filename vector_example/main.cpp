#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n(0), x(1);
    vector <int> my_vector;

    do {
        cout << "Vector's size: ";
        cin.clear();
        cin.sync();
        cin >> n;
    }
    while(cin.fail() || n<8);
    cout << endl;

    //creating sources for vector
    for (int i=0; i<n; i++) {
        my_vector.push_back(x);
        x+=2;
    }

    //displaying vector's values
    for (int j=0; j<my_vector.size()+1; j++) {
        cout << "Vector value: " << my_vector[j] << endl;
    }
    cout << endl;

    //checking vector size
    cout << "Current vector size: " << my_vector.size() << endl;

    //inserting 7 to 4th position and 17 to one-before-last
    my_vector.insert(my_vector.begin()+4, 7);
    my_vector.insert(my_vector.end()-1, 17);

    //displaying vector's values
    for (int j=0; j<my_vector.size()+1; j++) {
        cout << "Vector value: " << my_vector[j] << endl;
    }
    cout << endl;



    return 0;
}
