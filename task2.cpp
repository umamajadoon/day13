#include <iostream>
using namespace std;

int floatToInt(float num) {
    return static_cast<int>(num);
}

int main() {
    float num = 5.67;
    cout << "Integer part of " << num << " is " << floatToInt(num) << endl;
    return 0;
}