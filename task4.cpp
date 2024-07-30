#include <iostream>
using namespace std;

int sumWithCasting(double num1, int num2) {
    return static_cast<int>(num1) + num2;
}

int main() {
    double num1 = 5.67;
    int num2 = 3;
    cout << "Sum as integer: " << sumWithCasting(num1, num2) << endl;
    return 0;
}