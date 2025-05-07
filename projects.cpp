//thats rlly just personal to get to my project folder easier lol

#include <cstdlib>
#include <iostream>
#include <direct.h> // For _chdir on Windows
using namespace std;

int main() {
    string sex = "aaa";
    
    const char* path = "C:\\documents\\projects";
    if (_chdir(path) == 0) {
        cout << "Changed directory to: " << path << endl;
    } else {
        cerr << "Failed to change directory to: " << path << endl;
    }
    system("cmd"); // Opens CMD in the current directory
    return 0;
}