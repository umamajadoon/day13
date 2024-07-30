#include <iostream>
using namespace std;

void substringExtraction(const char* str, int start, int length) {
    int strLength = 0;
    while (str[strLength] != '\0') {
        strLength++;
    }
    for (int i = start; i < start + length && i < strLength; i++) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    const char* str = "Hello, World!";
    int start = 7;
    int length = 5;
    cout << "Extracted substring: ";
    substringExtraction(str, start, length);
    return 0;
}