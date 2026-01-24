#include <iostream>
using namespace std;

class FactorialCalculator {
public:
    int factorial(int n) {
        if (n <= 1)
            return 1;
        else
            return n * factorial(n - 1);
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    FactorialCalculator calc;
    cout << "Factorial of " << num << " is " << calc.factorial(num) << endl;
    return 0;
}