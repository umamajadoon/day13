#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int hexToDec(const char* hex) {
    int len = strlen(hex);
    int base = 1; // base of hexadecimal (16^0)
    int dec = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            dec += (hex[i] - '0') * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            dec += (hex[i] - 'A' + 10) * base;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            dec += (hex[i] - 'a' + 10) * base;
        }
        base = base * 16;
    }
    return dec;
}

int main() {
    const char* hex = "1A";
    cout << "Decimal equivalent of " << hex << " is " << hexToDec(hex) << endl;
    return 0;
}