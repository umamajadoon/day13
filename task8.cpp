#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int binToDec(const char* bin) {
    int len = strlen(bin);
    int base = 1; // base of binary (2^0)
    int dec = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            dec += base;
        }
        base = base * 2;
    }
    return dec;
}

int main() {
    const char* bin = "1101";
    cout << "Decimal equivalent of " << bin << " is " << binToDec(bin) << endl;
    return 0;
}