﻿//Вычислить кол-во цифр кратных 4

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); //функция устанавливает возможность вывода русского языка в консоли
    int n, num, count = 0; //обьявление переменных

    cout << "Количество элементов: "; //вывод текста в консоль
    cin >> n; //ввод переменной
    cout << "Сами элементы: ";
    for (int i = 1; i <= n; i++) //цикл For: обьявление переменной, условие, инкремент или декремент 
    {
        cin >> num;
        if (num % 4 == 0) // условие если значение в скобках тру, то ...
        {
            count++; //инкремент счетчика
        }
    }

    cout << "Кол-во чисел кратных 4: " << count;
}