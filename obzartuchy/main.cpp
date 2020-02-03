#include <iostream>

using namespace std;


int get_number(const char* text, const int max_val) {
    int gn(1);
    do {
        cout << text;
        cin.clear();
        cin.sync();
        cin >> gn;
    }
    while(cin.fail() || gn<1 || gn>max_val);
    return gn;
}

int main() {
    const int sec_per_daynight(86400);
    int exmp_amount(1), guests(1), g_cookies[guests], cookie_box(10), all_cookies(0), all_boxes(1);


    exmp_amount = get_number("Enter examples amount: ", 10);

    for (int e=0; e<exmp_amount; e++, all_cookies=0) {
        cout << endl;
        guests = get_number("Enter guests amount: ", 10);
        cookie_box = get_number("Enter one box of cookies size: ", 500);
        cout << endl;

        for (int i=1; i<=guests; i++) {
            cout << "Guest " << i;
            g_cookies[i] = sec_per_daynight/get_number(" tempo: ", sec_per_daynight);
            all_cookies += g_cookies[i];
        }
        cout << endl;

        all_boxes = all_cookies/cookie_box;
        //poprawka uwzglêdniaj¹ca zaokr¹glanie dizelenia wy¿ej
        all_boxes += static_cast<int>((all_cookies%all_boxes)!=0);

        cout << "Needed boxes amount: " << all_boxes << endl << endl;
    }
    return 0;
}
