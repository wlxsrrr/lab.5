/*
Вариант 7. Кафе
Задание 1. Напишите int lunchCost(int dishPrice, int quantity),
возвращающую стоимость блюд.
Задание 2. Напишите void addTip(int& bill), увеличивающую счёт на 3 единицы.
Задание 3. Перегрузите bill: int bill(int a, int b) и
int bill(int a, int b, int c), возвращающие сумму цен двух или трёх блюд.
Задание 4. Напишите int teaCost(int price, int cups = 1), возвращающую
цену чая. Продемонстрируйте оба вызова.
*/

#include <iostream>
using namespace std;

int lunchCost(int dishPrice, int quantity) {
    return dishPrice * quantity;
}

void addTip(int& bill) {
    bill += 3;
}

int bill(int a, int b) {
    return a + b;
}

int bill(int a, int b, int c) {
    return a + b + c;
}

int teaCost(int price, int cups = 1) {
    return price * cups;
}

int main() {
    int dishPrice, quantity;
    cout << "Введите цену блюда и количество: ";
    if (!(cin >> dishPrice >> quantity)) return 0;
    int total = lunchCost(dishPrice, quantity);
    cout << "Стоимость блюд: " << total << endl;
    addTip(total);
    cout << "Счёт с чаевыми: " << total << endl;

    int a, b, c;
    cout << "Введите цены трёх блюд: ";
    if (!(cin >> a >> b >> c)) return 0;
    cout << "Сумма двух блюд: " << bill(a, b) << endl;
    cout << "Сумма трёх блюд: " << bill(a, b, c) << endl;

    int price, cups;
    cout << "Введите цену чая и количество чашек: ";
    if (!(cin >> price >> cups)) return 0;
    cout << "Одна чашка чая: " << teaCost(price) << endl;
    cout << "Несколько чашек чая: " << teaCost(price, cups) << endl;
    return 0;
}
