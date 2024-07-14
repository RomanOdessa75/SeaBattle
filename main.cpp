
#include <iostream> 
#include <time.h> //типы и функции для работы с датой и временем.
#include <windows.h> //включает функции WinAPI sleep(), beep() и т.д
#include <conio.h> //библиотека для создания текстового интерфейса пользователя

enum Color { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue = 9, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
// Цвета которыми можно окрашивать: цвет текста; цвет заливки текста

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); //Дескриптор активного окна

