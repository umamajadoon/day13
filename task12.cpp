#include <iostream>
using namespace std;

void stringConcatenation(const char* str1, const char* str2) {
    while (*str1 != '\0') {
        cout << *str1;
        str1++;
    }
    while (*str2 != '\0') {
        cout << *str2;
        str2++;
    }
    cout << endl;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    cout << "Concatenated string: ";
    stringConcatenation(str1, str2);
    return 0;
}