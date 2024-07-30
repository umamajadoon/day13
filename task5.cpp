#include <iostream>
using namespace std;

void implicitExplicitConversion() {
    int intVar = 5;
    double doubleVar = intVar;  // Implicit conversion
    doubleVar = 5.67;
    intVar = static_cast<int>(doubleVar);  // Explicit conversion

    cout << "Implicit conversion of int to double: " << doubleVar << endl;
    cout << "Explicit conversion of double to int: " << intVar << endl;
}

int main() {
    implicitExplicitConversion();
    return 0;
}