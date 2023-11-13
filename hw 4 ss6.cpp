#include <iostream>

using namespace std;

void print_even_sequence(int n) {
    cout << "D?y s? chia h?t cho 2 và gi?m d?n: ";
    for (int i = n; i >= 2; i -= 2) {
        cout << i << " ";
    }
    cout << endl;
}

void print_numbers_and_sum(int n) {
    int total = 0;
    cout << "Các s? nh? hõn " << n << ": ";
    for (int i = 1; i < n; ++i) {
        cout << i << " ";
        total += i;
    }
    cout << "\nT?ng c?a các s? này là: " << total << endl;
}

void print_even_divisors(int n) {
    cout << "Các ý?c s? ch?n c?a " << n << ": ";
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0 && i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void print_odd_divisors_and_count(int n) {
    int count_odd_divisors = 0;
    cout << "Các ý?c s? l? c?a " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
            if (i % 2 != 0) {
                count_odd_divisors++;
            }
        }
    }
    cout << "\nS? lý?ng ý?c s? l? c?a " << n << ": " << count_odd_divisors << endl;
}

void print_largest_odd_divisor(int n) {
    int largest_odd_divisor = 1;
    cout << "Ý?c s? l? l?n nh?t c?a " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && i % 2 != 0 && i > largest_odd_divisor) {
            largest_odd_divisor = i;
        }
    }
    if (largest_odd_divisor != 1) {
        cout << largest_odd_divisor << endl;
    } else {
        cout << n << " không có ý?c s? l?." << endl;
    }
}

int main() {
    int n;
    char choice;

    do {
        cout << "Nh?p vào m?t s? nguyên n (n >= 2): ";
        cin >> n;

        cout << "\nPRACTICE" << endl;
        cout << "1. In d?y s? chia h?t cho 2 và gi?m d?n (n >= s? >= 2)" << endl;
        cout << "2. In các s? nh? hõn n và tính t?ng" << endl;
        cout << "3. In ra các ý?c s? ch?n c?a n" << endl;
        cout << "4. In ra các ý?c s? l? và s? lý?ng các ý?c l? c?a n" << endl;
        cout << "5. In ra ý?c s? l? l?n nh?t c?a n" << endl;
        cout << "6. Thoát" << endl;

        cout << "Ch?n m?t ch?c nãng (1-6): ";
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
                cout << "Chýõng tr?nh k?t thúc. T?m bi?t!" << endl;
                break;
            default:
                cout << "L?a ch?n không h?p l?. Vui l?ng ch?n l?i." << endl;
        }
    } while (choice != '6');

    return 0;
}

