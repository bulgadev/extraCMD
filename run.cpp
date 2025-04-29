#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Use: " << argv[0] << " <file name>";
        return 1;
    }
    string file = argv[1];
    string command = "g++ " + file + ".cpp -o " + file + ".exe";
    string enter = file + ".exe";
    string run = command + "&&" + enter;

    system(run.c_str());

    //if theres less then 2 arguments, basically no args, print a error


}