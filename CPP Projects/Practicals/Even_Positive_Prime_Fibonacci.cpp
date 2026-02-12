#include <iostream>
using namespace std;

// Function to check odd or even
void checkOddEven(int n) {
    if (n % 2 == 0)
        cout << "Number is Even\n";
    else
        cout << "Number is Odd\n";
}

// Function to check prime
void checkPrime(int n) {
    if (n <= 1) {
        cout << "Not a Prime Number\n";
        return;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << "Not a Prime Number\n";
            return;
        }
    }
    cout << "Prime Number\n";
}

// Function to print Fibonacci series
void fibonacci(int terms) {
    int a = 0, b = 1, next;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= terms; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

// Function to check positive/negative/zero
void checkSign(int n) {
    if (n > 0)
        cout << "Number is Positive\n";
    else if (n < 0)
        cout << "Number is Negative\n";
    else
        cout << "Number is Zero\n";
}

int main() {
    int choice, num, terms;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Check Odd/Even\n";
        cout << "2. Check Prime\n";
        cout << "3. Fibonacci Series\n";
        cout << "4. Check Positive/Negative\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter number: ";
            cin >> num;
            checkOddEven(num);
            break;

        case 2:
            cout << "Enter number: ";
            cin >> num;
            checkPrime(num);
            break;

        case 3:
            cout << "Enter number of terms: ";
            cin >> terms;
            fibonacci(terms);
            break;

        case 4:
            cout << "Enter number: ";
            cin >> num;
            checkSign(num);
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}