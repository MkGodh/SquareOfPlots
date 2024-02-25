#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int meters;
    int count = 1;

    cout << "Введите площать участка: "; cin >> meters;

    while (count * count != meters && count < 1000000) {
        if (count * count != meters)  ++count;
        if (count * count == meters) {
            cout << "Данная плоащадь является точным квадратом!" << count; break;
        }
    }

    if (meters / count != count) {
        cout << "Данная площадь не явлется квадратом!";
    }



}
