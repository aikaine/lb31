// lb31.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <windows.h> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    char str[100] ;
    cout << "Первоначальная строка: ";
    cin.getline(str, 100);
    OemToCharA(str, str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a' - 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }
        else if (str[i] >= 'А' && str[i] <= 'Я')
        {
            str[i] += 'а' - 'А';
        }
        else if (str[i] >= 'а' && str[i] <= 'я')
        {
            str[i] -= 'а' - 'А';
        }
        else if (str[i] == 'ё')
            str[i] = 'Ё';
        else if (str[i] == 'Ё')
            str[i] = 'ё';
    }
    cout <<"Переделанная строка:" << str << endl;
    system("pause");
    return 0;
}