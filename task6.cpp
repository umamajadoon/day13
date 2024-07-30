#include <iostream>
using namespace std;

float doubleToFloat(double num) {
    return static_cast<float>(num);
}

int main() {
    double num = 5.123456789;
    cout << "Float equivalent of " << num << " is " << doubleToFloat(num) << endl;
    return 0;
}