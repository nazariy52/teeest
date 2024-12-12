#include <iostream>
using namespace std;

class fraction {
private:
    int num;
    int den;

public:
    fraction(int num = 0, int den = 1) {
        if (den == 0) {
            cout << "denominator can't be zero" << endl;
            den = 1;
        }
        num = num;
        den = den;
    }

    void input() {
        cin >> num;
        cin >> den;
        if (den == 0) {
            cout << "denominator can't be zero" << endl;
            den = 1;
        }
    }

    void display() const {
        if (den == 1) {
            cout << num;
        }
        else {
            cout << num << "/" << den;
        }
    }

    fraction add(const fraction& other) const {
        int num = num * other.den + other.num * den;
        int den = den * other.den;
        return fraction(num, den);
    }

    fraction subtract(const fraction& other) const {
        int num = num * other.den - other.num * den;
        int den = den * other.den;
        return fraction(num, den);
    }

    fraction multiply(const fraction& other) const {
        int num = num * other.num;
        int den = den * other.den;
        return fraction(num, den);
    }

    fraction divide(const fraction& other) const {
        if (other.num == 0) {
            cout << "division by zero fraction isn't allowed" << endl;
            return fraction(0, 1);
        }
        int num = num * other.den;
        int den = den * other.num;
        return fraction(num, den);
    }
};

int main() {
    fraction f1, f2;
    f1.input();
    f2.input();

    cout << "sum: ";
    fraction sum = f1.add(f2);
    sum.display();
    cout << "\n";

    cout << "difference: ";
    fraction diff = f1.subtract(f2);
    diff.display();
    cout << "\n";

    cout << "product: ";
    fraction prod = f1.multiply(f2);
    prod.display();
    cout << "\n";

    cout << "quotient: ";
    fraction quot = f1.divide(f2);
    quot.display();
    cout << "\n";
}
