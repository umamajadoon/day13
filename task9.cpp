#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char* str = "Hello, World!";
    cout << "Length of the string \"" << str << "\" is " << stringLength(str) << endl;
    return 0;
}