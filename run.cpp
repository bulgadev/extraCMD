#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    string file = argv[1];
    string command = "g++ " + file + ".cpp -o " + file + ".exe";
    string enter = file + ".exe";
    string run = command + "&&" + enter;
    system(run.c_str());
}