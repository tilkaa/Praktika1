#include <stdio.h>
#include <windows.h>

int main()
{
    // Устанавливаем кодировку UTF-8 для консоли
    SetConsoleOutputCP(65001);  // UTF-8
    SetConsoleCP(65001);        // UTF-8

    puts("* * * * * * * * * * * * * * * * * * * * * *");
    puts("*                                         *");
    puts("*                                         *");
    puts("* Тема: Разработка консольного приложения *");
    puts("* Выполнила Даниленко Е.Д.                *");
    puts("*                                         *");
    puts("*                                         *");
    puts("*                                         *");
    puts("* * * * * * * * * * * * * * * * * * * * * *");
    getchar(); // ожидание нажатия Enter


    getchar();
    return 0;
}