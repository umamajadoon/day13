#include <iostream>
using namespace std;

void stringReversal(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    const char* str = "Hello, World!";
    cout << "Reversed string: ";
    stringReversal(str);
    return 0;
}