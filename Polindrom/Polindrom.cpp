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
    /*1. ������������ ������ ����� � ����������.��������� ������ �������, �������� �� ��������� ����� �����������.
��������� - ��� �����, ������� � ����� ������������ �������� ��������� :
12321, 1221, 121
1024 - Nicht*/
    int number = 0, reverceNumber = 0, x = 0;
    cout << "������� �����: ";
    cin >> number;
    x = number;
    while (x > 0)
    {
        reverceNumber = reverceNumber * 10 + x % 10;
        x /= 10;
        cout << reverceNumber << endl;
    }
    if (number == reverceNumber) cout << "��� ���������" << endl;
    else cout << "�� ���������" << endl;

   /* int a = 0, b = 0, c = 0, d = 0, count = 0, i = 0;
    cout << "������� �����: ";
    cin >> a;
    //�������� ����� �����
    c = a;
    while (c > 0)
    {
        c = c / 10;
        count++;
    }
    cout << "����� ����� = " << count << endl;
    //��������� �����
    b = c = a;
    while (i < count)
    {
        b = c % 10; //������� �� ������� �� 10 ��������� �����, �.�. ��������� �����
        c /= 10; //��������� �� ��������� ����� ��������� �����
        cout << c << endl << b << endl;//����� ����� ������������� ��� �����������
        d = d * 10 + b;//���������� ���������� �������� �� ��������� ����� � 
        //���������� d � ������������� �� ������� ���� + ��������� ���������� �����
        cout << d << endl;
        i++;
    }
    if (a == d) cout << "��� ���������" << endl;
    else cout << "�� ���������" << endl;*/
#endif // dz1

#ifdef dz2
    /*2. ������������ ������ ����� ����������� ������.��������� ������ ����������, �������� �� ����� ����������, ��� ���.
        123231 - Happy
        222333 - ������� �����*/

    int bil = 0, a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, schetchik = 0;
    int count = 0;
    std::cout << "������� ����� ������ - 6 ����" << endl;
    std::cin >> bil;
    schetchik = bil;
    while (schetchik > 0)
    {
        schetchik = schetchik / 10;
        count++;
    }
    if (count == 6)
    {
        a = bil / 100000; //��������� ������ ����� �����
        h = (bil % 100000) / 10000; // ������� �� ������� ����� �� ���� ������� ������ �������� ������ �����
        b = (bil % 10000) / 1000;
        c = (bil % 1000) / 100;
        d = (bil % 100) / 10;
        e = bil % 10;
        std::cout << a << endl << h << endl << b << endl << c << endl << d << endl << e << endl;
        if (a + h + b == c + d + e) std::cout << "Happy";
        else std::cout << "������� �����";
    }
    else std::cout << "������ �����";
#endif // dz2

#ifdef dz3
    /*3. �������� ��������� "3Dshooter", ������� �� ������� ������� ���������� �������� ������������ :
w - ������
s - �����
a - �����
d - ������
Space - ������
Enter - �����*/

    char deistvie;
    cout << "---------3Dshooter-----------" << endl;
    cout << "������� ������� w - ������, s - �����, a - �����, d - ������, Space - ������,    Enter - �����" << endl;

    do {
        //    cin >> deistvie; //����� ��� �������� ������ � �������, ������ � Enter �� ���������
        deistvie = _getch(); //������������ ������� ���������� ���� ���� �������, ��� ������������ � �������������
        switch (deistvie)
        {
        case 'w': cout << "****�����*****\n"; break;
        case 's': cout << "----�����------\n"; break;
        case 'a': cout << "++++�����++++++\n"; break;
        case 'd': cout << "====������=====\n"; break;
        case 32:  cout << "!!!������!!!!!\n"; break;
        case 13:  cout << "~~~~�����~~~~~\n"; break;
        case 27:  cout << "�� ����� ������!!!"; break;

        default: cout << "�������� ��� ������ ������� �� �������������" << endl;
        }
    } while (deistvie != 27);

#endif // dz3

}