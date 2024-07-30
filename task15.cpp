#include <iostream>
using namespace std;

int stringToInt(const char* str) {
    int result = 0;
    while (*str != '\0') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int main() {
    const char* str = "123";
    cout << "Integer equivalent of string \"" << str << "\" is " << stringToInt(str) << endl;
    return 0;
}