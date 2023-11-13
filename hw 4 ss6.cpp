#include <iostream>

using namespace std;

void print_even_sequence(int n) {
    cout << "D?y s? chia h?t cho 2 v� gi?m d?n: ";
    for (int i = n; i >= 2; i -= 2) {
        cout << i << " ";
    }
    cout << endl;
}

void print_numbers_and_sum(int n) {
    int total = 0;
    cout << "C�c s? nh? h�n " << n << ": ";
    for (int i = 1; i < n; ++i) {
        cout << i << " ";
        total += i;
    }
    cout << "\nT?ng c?a c�c s? n�y l�: " << total << endl;
}

void print_even_divisors(int n) {
    cout << "C�c �?c s? ch?n c?a " << n << ": ";
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0 && i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void print_odd_divisors_and_count(int n) {
    int count_odd_divisors = 0;
    cout << "C�c �?c s? l? c?a " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
            if (i % 2 != 0) {
                count_odd_divisors++;
            }
        }
    }
    cout << "\nS? l�?ng �?c s? l? c?a " << n << ": " << count_odd_divisors << endl;
}

void print_largest_odd_divisor(int n) {
    int largest_odd_divisor = 1;
    cout << "�?c s? l? l?n nh?t c?a " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && i % 2 != 0 && i > largest_odd_divisor) {
            largest_odd_divisor = i;
        }
    }
    if (largest_odd_divisor != 1) {
        cout << largest_odd_divisor << endl;
    } else {
        cout << n << " kh�ng c� �?c s? l?." << endl;
    }
}

int main() {
    int n;
    char choice;

    do {
        cout << "Nh?p v�o m?t s? nguy�n n (n >= 2): ";
        cin >> n;

        cout << "\nPRACTICE" << endl;
        cout << "1. In d?y s? chia h?t cho 2 v� gi?m d?n (n >= s? >= 2)" << endl;
        cout << "2. In c�c s? nh? h�n n v� t�nh t?ng" << endl;
        cout << "3. In ra c�c �?c s? ch?n c?a n" << endl;
        cout << "4. In ra c�c �?c s? l? v� s? l�?ng c�c �?c l? c?a n" << endl;
        cout << "5. In ra �?c s? l? l?n nh?t c?a n" << endl;
        cout << "6. Tho�t" << endl;

        cout << "Ch?n m?t ch?c n�ng (1-6): ";
        cin >> choice;

        switch (choice) {
            case '1':
                print_even_sequence(n);
                break;
            case '2':
                print_numbers_and_sum(n);
                break;
            case '3':
                print_even_divisors(n);
                break;
            case '4':
                print_odd_divisors_and_count(n);
                break;
            case '5':
                print_largest_odd_divisor(n);
                break;
            case '6':
                cout << "Ch��ng tr?nh k?t th�c. T?m bi?t!" << endl;
                break;
            default:
                cout << "L?a ch?n kh�ng h?p l?. Vui l?ng ch?n l?i." << endl;
        }
    } while (choice != '6');

    return 0;
}

