#include <stdio.h>
#include <windows.h>

int main()
{
    // Устанавливаем кодировку UTF-8 для консоли
    SetConsoleOutputCP(65001);  // UTF-8
    SetConsoleCP(65001);        // UTF-8

    puts("Hello World!");
    puts("Нажмите Enter для продолжения...");

    getchar(); // ожидание нажатия Enter

    puts("Продолжение программы");
    getchar();
    return 0;
}