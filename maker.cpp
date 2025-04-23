#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    string type;
    cout << "which language u want to use? (cpp, react, flask, electron)" << endl;
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
    } else if (type == "react")
    {
        string name;
        cout << "Project name" << endl;
        cin >> name;
        string enter = "cd " + name;
        string mkdir = "mkdir " + name;
        string react = "npx create-react-app " + name;
        string makee = mkdir + "&&" + enter + "&&" + react;
        system(makee.c_str());
    } else if (type == "flask")
    {
        string name;
        cout << "Project name?" << endl;
        cin >> name;
        string clone = "git clone https://github.com/mikecolbert/flask_template \"" + name + "\"";
        system(clone.c_str());
    } else if (type == "electron")
    {
        string name;
        cout << "project name?" << endl;
        cin >> name;
        string clone = "git clone https://github.com/bulgadev/BlankElectronTemplate \"" + name + "\"";
        string cd = "cd " + name;
        string npm = "npm install";
        string megazord = cd + "&&" + npm;
        system(clone.c_str());
        system(megazord.c_str());
    }
    else {
        cout << "thats not a option yet" << endl;
    }
}