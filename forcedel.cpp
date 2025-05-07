#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    //if theres less then 2 arguments, basically no args, print a error
    if (argc < 2) {
        cerr << "Use: " << argv[0] << " <file name>";
        return 1;
    }
    string file = argv[1];
    string del = "rmdir /s /q \"" + file + "\"";
    string command = del.c_str();

    system(command.c_str());
}