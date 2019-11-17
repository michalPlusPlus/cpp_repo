#include <iostream>
#include <string>
#include <map>

using namespace std;

#define OP_CODE__HELP 100
#define OP_CODE__SUM 101
#define OP_CODE__SUB 102
#define OP_CODE__MUL 103
#define OP_CODE__DIV 104

// deklaracja i inicjalizacja mapy o nazwie params_map
map<string, int> params_map{
        {"/?",  OP_CODE__HELP},
        {"/sum",OP_CODE__SUM},
        {"/sub",OP_CODE__SUB},
        {"/mul",OP_CODE__MUL},
        {"/div",OP_CODE__DIV}
};

/*
map<string, tuple<int,string>> params_map_extra{
        {"/?",  {OP_CODE__HELP," - display help info"}},
        {"/sum",{OP_CODE__SUM, " - summary mode"}},
        {"/sub",{OP_CODE__SUB, " - substract mode"}},
        {"/mul",{OP_CODE__MUL, " - multiply mode"}},
        {"/div",{OP_CODE__DIV, " - devision mode"}},
};*/

void program_usage () {
        cout << "Program usage:" << endl
        << "    /?   - display help info" << endl
        << "    /sum - summary mode" << endl
        << "    /sub - substract mode" << endl
        << "    /mul - multiply mode" << endl
        << "    /div - devision mode" << endl;
}

float a(0), b(0);

void getting_values () {
//funkcja w ktorej wprowadzane sa wartosci zmiennych a i b
//zapetla sie tak dlugo az wprowadzona zostanie wartosc numerryczna float
//nie zwraca zadnego wyniku
//natomast ustawia globalne zmienne a i b
    do{
        cout << "Enter numeric value (a): ";
        cin.clear();
        cin.sync();
        cin >> a;
    }
    while(cin.fail());


    do{
        cout << "Enter numeric value (b): ";
        cin.clear();
        cin.sync();
        cin >> b;
    }
    while(cin.fail());
}

int main(int argc, char* argv[])
{

    if (argc<2) {
        program_usage();
        return 0;
    }

//    cout << "argc:" << argc << endl
//            << "argv[0]:" << argv[0] << endl
//            << "argv[1]:" << argv[1] << endl;

//    deklaracja zmiennej typu string o nazwie param
//    string param(argv[1]);
//    cout << "param:" << param << endl;


        switch(params_map[argv[1]]) {
        case OP_CODE__HELP:
        //case params_map["/?"]:
            program_usage();
            break;
        case OP_CODE__SUM:
            getting_values();
            cout << "Counting sum of 2 params:  " << a+b << endl;
            break;
        case OP_CODE__SUB:
            getting_values();
            cout << "Counting sub of 2 params:  " << a-b << endl;
            break;
        case OP_CODE__MUL:
            getting_values();
            cout << "Counting mul of 2 params:  " << a*b << endl;
            break;
        case OP_CODE__DIV:
            getting_values();
            cout << "Counting div of 2 params:  " << a/b << endl;
            break;
        default:
            program_usage();
    }


//    cout << "Operation result is:" << result << endl;

    return 0;
}












/*
parametry.exe
argc:1
argv[0]:parametry.exe
argv[1]:

parametry.exe /add
argc:2
argv[0]:parametry.exe
argv[1]:/add
*/
