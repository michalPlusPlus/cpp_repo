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

//function to optimise route, entered steps are being added to each entered direction
void optm (int &x, int &y, int ent_dir, int ent_steps) {
    switch (ent_dir) {
    case 0:
        y+=ent_steps;
        break;
    case 1:
        y-=ent_steps;
        break;
    case 2:
        x-=ent_steps;
        break;
    case 3:
        x+=ent_steps;
        break;
    }
}

int main() {
    int exmp_amnt(1), tips_amnt(1), dir(0), steps(0), final_dir(0), final_steps(0);

    //entering examples amount
    exmp_amnt = get_number("Enter examples amount: ", 1, 10);

    //entering all tips detail
    for (int e=0; e<exmp_amnt; e++) {
        tips_amnt = get_number("Enter tips amount: ", 1, 15);

        cout << "0 - north" << endl;
        cout << "1 - south" << endl;
        cout << "2 - west" << endl;
        cout << "3 - east" << endl << endl;

        for (int t=0; t<tips_amnt; t++) {
            dir = get_number("direction: ", 0, 3);  //neither values under 0 and above 3 will be accepted
            steps = get_number("steps: ", 1, 10000);
            optm(final_dir, final_steps, dir, steps);
        }
        cout << endl;

        //set of conditions to display the fastest route
        if(final_dir==0 && final_steps==0)
            cout << "No movement to be done" << endl;
        else {
            cout << "Fastest route will be: " << endl;
            if(final_steps!=0) {
                if(final_steps>=0)
                    cout << "direction 0 steps " << final_steps << endl;
                else
                    cout << "direction 1 steps " << -final_steps << endl;
            }
            if(final_dir!=0) {
                if(final_dir>=0)
                    cout << "direction 3 steps " << final_dir << endl;
                else
                    cout << "direction 2 steps " << -final_dir << endl;
            }
        }
        //reseting values for next example
        final_dir=0;
        final_steps=0;
        cout << endl;
    }
    return 0;
}
