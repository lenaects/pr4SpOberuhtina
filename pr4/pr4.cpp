﻿// pr4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    int b;
    FILE* file;
    file = fopen("Rezultat.txt", "w");
    int k1 = 0;
    if(fopen("Rezultat.txt","w")==NULL)
    {
        cout << "файл невозможно открыть или создать\n";
    }
    else
    {
        int x = 1;
       
        for (;;) {
            cout << "введите a и b(для выхода введите 0,0\n";                 
            cin >> a >> b;               
            if (a == 0 && b == 0) break;           
            fprintf(file, "y=%dx+%d\n", a, b);   
            if (a == 0)k1++;
        }
    }
    fclose(file);
    cout << "k1=" << k1;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
