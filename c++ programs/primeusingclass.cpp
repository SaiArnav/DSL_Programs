#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int number;

public:
    
    PrimeChecker(int num) {
        number = num;
    }

    bool isPrime() {
        if (number <= 1) {
            return false;
        }
        if (number == 2) {
            return true;
        }
        if (number % 2 == 0) {
            return false;
        }

        for (int i = 3; i * i <= number; i += 2) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    void displayResult() {
        if (isPrime()) {
            cout << number << " is a PRIME number." << endl;
        } else {
            cout << number << " is NOT a prime number." << endl;
        }
    }

    int getNumber() {
        return number;
    }

    void setNumber(int num) {
        number = num;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    PrimeChecker checker(num);

    checker.displayResult();

    return 0;
}
