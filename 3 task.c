#include <stdio.h>
#include <windows.h>

int main()
{
    // Устанавливаем кодировку UTF-8 для консоли
    SetConsoleOutputCP(65001);  // UTF-8
    SetConsoleCP(65001);        // UTF-8

    puts(" 0 5 .  0 1 . 2 0 0 7  ");
    puts("  _   _    _   _   _   _   _  _ ");
    puts(" | | |_   | | / |   | | | | |  |");
    puts(" |_|  _|  |_|   |  /_ |_| |_|  |");
    getchar(); // ожидание нажатия Enter


    getchar();
    return 0;
}