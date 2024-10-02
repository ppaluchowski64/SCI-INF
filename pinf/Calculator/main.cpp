#include <iostream>

using namespace std;

double a, b;
long double result;
char operation;

int main()
{
    cout << "Pierwsza liczba: ";
    cin >> a;

    if(cin.fail()) {
        cerr << "Błąd - Wejście nie jest liczbą!" << endl;
        return 1;
    }

    cout << "Znak operacji: ";
    cin >> operation;

    if(cin.peek() != '\n') {
        cerr << "Błąd - Nieprawidłowy znak operacji!" << endl;
        return 1;
    }

    cout << "Druga liczba: ";
    cin >> b;

    if(cin.fail()) {
        cerr << "Błąd - Wejście nie jest liczbą!" << endl;
        return 1;
    }

    switch(operation) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if(b != 0) {
                result = a / b;
            } else {
                cerr << "Błąd - Dzielenie przez zero!" << endl;
                return 1;
            }

            break;

        case '%':
            if(b != 0) {
                result = static_cast<int>(a) % static_cast<int>(b);
            } else {
                cerr <<  "Błąd - Dzielenie przez zero!" << endl;
                return 1;
            }

            break;

        default:
            cerr << "Błąd - Nieprawdiłowy znak operacji!" << endl;
            return 1;
    }

    cout << "Wynik operacji: " << result << endl;

    return 0;
}
