#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    string type;
    cout << "which language u want to use? (cpp)" << endl;
    cin >> type;

    if (type == "cpp") {
        string pname;
        //print and ask the user for the project name
        cout << "Your project name" << endl;
        cin >> pname;
        string folder = "mkdir " + pname;
        string enter = "cd " + pname;
        string create = "type " + pname + " > main.cpp";
        string megazord = folder + " && " + enter + " && " + create;
        //makes an folder with project name
        system(megazord.c_str());
        return 0;
    } else {
        cout << "thats not a option yet" << endl;
    }
}