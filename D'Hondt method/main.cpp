#include <iostream>
#include <string>
#include <vector>

using namespace std;

//defining "typecomitee" as a structure
struct typecomitee {
  string name;
  int votes;
  int tickets;
  int div;
};

//introducing vector to match all of the single comitees
vector<typecomitee> comitees_all;

//function for do&while loop to avoid entering non-int data
int enter_int (const char* text) {
    int var(0);
    do {
        cout << text;
        cin.clear();
        cin.sync();
        cin >> var;
        }
        while (cin.fail() || var==0);
    return var;
}

//function for calculating tickets
int assign_ticket(const vector<typecomitee> all) {
    int max_votes(0), index(0), max_index(0);
    for (const typecomitee co : all) {
        if (((co.votes / co.div) > max_votes) || (((co.votes / co.div) == max_votes) && ( co.votes > all[max_index].votes))) {
            max_votes = (co.votes / co.div);
            max_index = index;
        }
        index++;
    }
    return max_index;
}

int main() {
    //declaring
    int comitees_amount(0), all_tickets(1);
    typecomitee comitee_new;

    //entering amount of tickets to dispense
    all_tickets = enter_int("Enter tickets amount: ");
    cout << "\n";

    //entering amount of comitees
    comitees_amount = enter_int("Enter comitees amount: ");
    cout << "\n\n";


    //entering comitte names and votes per comitee
    for (int i=comitees_amount; i>0; i--) {
        cout << "Enter comitee name: ";
        cin >> comitee_new.name;
        cout << comitee_new.name;
        comitee_new.votes = enter_int(" votes: ");
        comitee_new.tickets = 0;
        comitee_new.div = 1;
        comitees_all.push_back(comitee_new);
        cout << "\n\n\n";
    }



    //counting tickets
    for (int i=1; i<=all_tickets; i++) {
        int index = assign_ticket(comitees_all);

        comitees_all[index].tickets++;
        comitees_all[index].div++;

        #ifdef DEBUG
        cout << i << " ticket for " << comitees_all[index].name << " div: " << comitees_all[index].div << ", tickets: " << comitees_all[index].tickets << "\n\n";
        #endif
    }

    //printing comitees with their tickets
    for (typecomitee comitee : comitees_all) {
        cout << comitee.name << "\n" << "Votes: " << comitee.votes << ", Tickets: " << comitee.tickets << "\n\n";
    }

    return 0;
}
