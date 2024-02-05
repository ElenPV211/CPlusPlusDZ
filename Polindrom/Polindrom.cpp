#include<iostream>
#include <conio.h>
using namespace std;

#define dz1
//#define dz2
//#define dz3

void main()
{
    setlocale(0, "");

#ifdef dz1
    /*1. Пользователь вводит число с клавиатуры.Программа должна сказать, является ли введенное число палиндромом.
Палиндром - это число, которое в обоих направлениях читается одинаково :
12321, 1221, 121
1024 - Nicht*/
    int number = 0, reverceNumber = 0, x = 0;
    cout << "Введите число: ";
    cin >> number;
    x = number;
    while (x > 0)
    {
        reverceNumber = reverceNumber * 10 + x % 10;
        x /= 10;
        cout << reverceNumber << endl;
    }
    if (number == reverceNumber) cout << "Это палиндром" << endl;
    else cout << "Не палиндром" << endl;

   /* int a = 0, b = 0, c = 0, d = 0, count = 0, i = 0;
    cout << "Введите число: ";
    cin >> a;
    //вычислим длину числа
    c = a;
    while (c > 0)
    {
        c = c / 10;
        count++;
    }
    cout << "длина числа = " << count << endl;
    //перевернём число
    b = c = a;
    while (i < count)
    {
        b = c % 10; //остаток от деления на 10 введённого числа, т.е. последняя цифра
        c /= 10; //отрезание от введённого числа последней цифры
        cout << c << endl << b << endl;//вывод всего происходящего для наглядности
        d = d * 10 + b;//сохранение отрезанных остатков от введённого числа в 
        //переменную d с передвижением на десядок выше + следующее отрезанное число
        cout << d << endl;
        i++;
    }
    if (a == d) cout << "Это палиндром" << endl;
    else cout << "Не палиндром" << endl;*/
#endif // dz1

#ifdef dz2
    /*2. Пользователь вводит номер автобусного билета.Программа должна определить, является ли билет счастливым, или нет.
        123231 - Happy
        222333 - обычный билет*/

    int bil = 0, a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, schetchik = 0;
    int count = 0;
    std::cout << "Введите номер билета - 6 цифр" << endl;
    std::cin >> bil;
    schetchik = bil;
    while (schetchik > 0)
    {
        schetchik = schetchik / 10;
        count++;
    }
    if (count == 6)
    {
        a = bil / 100000; //оставляем первую цифру числа
        h = (bil % 100000) / 10000; // остаток от деления делим на один десяток меньше добываем второе число
        b = (bil % 10000) / 1000;
        c = (bil % 1000) / 100;
        d = (bil % 100) / 10;
        e = bil % 10;
        std::cout << a << endl << h << endl << b << endl << c << endl << d << endl << e << endl;
        if (a + h + b == c + d + e) std::cout << "Happy";
        else std::cout << "обычный билет";
    }
    else std::cout << "ошибка ввода";
#endif // dz2

#ifdef dz3
    /*3. Написать программу "3Dshooter", которая по нажатой клавише определяет действие пользователя :
w - вперед
s - назад
a - влево
d - вправо
Space - прыжок
Enter - огонь*/

    char deistvie;
    cout << "---------3Dshooter-----------" << endl;
    cout << "нажмите клавишу w - вперед, s - назад, a - влево, d - вправо, Space - прыжок,    Enter - огонь" << endl;

    do {
        //    cin >> deistvie; //через это работает только с буквами, пробел и Enter не считывает
        deistvie = _getch(); //используется функция считывания аски кода клавиши, для последующего её использования
        switch (deistvie)
        {
        case 'w': cout << "****Вперёд*****\n"; break;
        case 's': cout << "----Назад------\n"; break;
        case 'a': cout << "++++Влево++++++\n"; break;
        case 'd': cout << "====Вправо=====\n"; break;
        case 32:  cout << "!!!прыжок!!!!!\n"; break;
        case 13:  cout << "~~~~огонь~~~~~\n"; break;
        case 27:  cout << "До новых встреч!!!"; break;

        default: cout << "действий для данной клавиши не предусмотрено" << endl;
        }
    } while (deistvie != 27);

#endif // dz3

}