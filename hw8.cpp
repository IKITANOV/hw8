# hw8
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Завдання 1: сума чисел від 1 до 10
void task1() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum of numbers from 1 to 10: " << sum << endl;
}

// Завдання 2: таблиця температур Цельсій-Фаренгейт
void task2() {
    int start = 0, end = 100, step = 10;
    cout << "Celsius to Fahrenheit table:\n";
    for (int c = start; c <= end; c += step) {
        double f = c * 9.0 / 5.0 + 32;
        cout << c << "C = " << f << "F\n";
    }
}

// Завдання 3: відсотки позитивних, негативних, нулів, парних і непарних чисел
void task3() {
    srand(time(0));
    int positive = 0, negative = 0, zero = 0, even = 0, odd = 0;
    int n = 100;
    for (int i = 0; i < n; i++) {
        int num = rand() % 201 - 100;
        if (num > 0) positive++;
        else if (num < 0) negative++;
        else zero++;
        if (num % 2 == 0) even++;
        else odd++;
    }
    cout << "Positive: " << (positive * 100.0 / n) << "%\n";
    cout << "Negative: " << (negative * 100.0 / n) << "%\n";
    cout << "Zero: " << (zero * 100.0 / n) << "%\n";
    cout << "Even: " << (even * 100.0 / n) << "%\n";
    cout << "Odd: " << (odd * 100.0 / n) << "%\n";
}

// Завдання 4: факторіал числа
void task4() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    unsigned long long fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
}

// Завдання 5: кількість цифр і їх сума
void task5() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    n = abs(n);
    int digits = 0, sum = 0;
    do {
        sum += n % 10;
        n /= 10;
        digits++;
    } while (n > 0);
    cout << "Number of digits: " << digits << "\nSum of digits: " << sum << endl;
}

// Завдання 6: дільники числа
void task6() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    n = abs(n);
    cout << "Divisors: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    cout << "Task 1:\n";
    task1();
    cout << "\nTask 2:\n";
    task2();
    cout << "\nTask 3:\n";
    task3();
    cout << "\nTask 4:\n";
    task4();
    cout << "\nTask 5:\n";
    task5();
    cout << "\nTask 6:\n";
    task6();
    return 0;
}

//добавил выбор функций в конце
