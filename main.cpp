
#include <iostream> 
#include <time.h> //���� � ������� ��� ������ � ����� � ��������.
#include <windows.h> //�������� ������� WinAPI sleep(), beep() � �.�
#include <conio.h> //���������� ��� �������� ���������� ���������� ������������

enum Color { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue = 9, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
// ����� �������� ����� ����������: ���� ������; ���� ������� ������

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); //���������� ��������� ����

