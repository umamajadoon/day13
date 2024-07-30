#include <iostream>
using namespace std;

float intToFloat(int num) {
    return static_cast<float>(num);
}

int main() {
    int num = 5;
    cout << "Float equivalent of " << num << " is " << intToFloat(num) << endl;
    return 0;
}