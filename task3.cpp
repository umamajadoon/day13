 #include <iostream>
using namespace std;

int charToInt(char ch) {
    return ch - '0';
}

int main() {
    char ch = '5';
    cout << "Integer equivalent of '" << ch << "' is " << charToInt(ch) << endl;
    return 0;
}