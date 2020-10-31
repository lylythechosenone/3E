#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
using namespace std;

void Main() {
    std::ifstream t("/mnt/c/Users/lysan/Donwloads/codeTags.html");
    std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
    printf("%s\n", str.c_str());
    cout << "Method is working" << endl;
    return;
}


int main() {
    try {
        Main();
    } catch (exception e){
        cout << e.what() << endl;
    }
    cout << "Main worked" << endl;
}
