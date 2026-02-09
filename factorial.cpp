#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial of negative numbers doesn't exist!" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;

    return 0;
}

