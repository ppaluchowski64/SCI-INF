#include <iostream>

using namespace std;

constexpr short MAX_N = 65;

unsigned long long factorial(const short n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(static_cast<short>(n - 1));
    }
}

int main() {
    short n;

    cout << "Argument dla silni: ";
    cin >> n;

    if (cin.fail()) {
        cerr << "Błąd - Wejście nie jest liczbą!" << endl;
        return 1;
    }
    else if (n < 0) {
        cerr << "Błąd - Liczba na wejściu nie może być ujemna!" << endl;
        return 1;
    }
    else if (n > MAX_N) {
        cerr << "Błąd - Wartość jest zbyt duża, aby obliczyć silnię bez przepełnienia!" << endl;
        return 1;
    }

    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
