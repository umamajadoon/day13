#include <iostream>
using namespace std;

int charCountInString(const char* str, char ch) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    const char* str = "Hello, World!";
    char ch = 'o';
    cout << "Character '" << ch << "' appears " << charCountInString(str, ch) << " times in the string." << endl;
    return 0;
}