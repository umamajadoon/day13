#include <iostream>
using namespace std;

bool stringComparison(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "Hello";
    cout << "Strings are " << (stringComparison(str1, str2) ? "equal" : "not equal") << endl;
    return 0;
}