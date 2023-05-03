#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits>
#include <numeric>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /* Проверка ввода данных (справочно)
    while(true)
    {
        float value; // попробуйте разные типы данных
        std::cin >> value;

        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cerr << "Ошибка ввода данных\n";

            // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Если нужно прервать программу:
            // return 1; // выход из функции main, соответственно и из программы
            // exit(1); // а так можно выйти из программы в любом месте
            // цифры - это номера ошибок передаваемые программой в ОС,
            // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
        }
        else
            std::cout << value << '\n';
    }

    return 0;
     */
    std::string text;


    while (true) {
        std::cout << "Enter text: ";
        std::getline(std::cin, text);
        int textLength=text.length();
        int i;
        int wordsNumber=0;

        if (std::cin.fail()) {
            std::cerr << "Error input\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            //check first symbol
            if (text[0]!=' ') {
                wordsNumber=1;
            }
            //check first symbol

            for (i=0;i<textLength-1;i++) {
                if (text[i+1]!=' ' && text[i]==' ') {
                    wordsNumber++;
                }
            }
            std::cout<< "There are "<<wordsNumber<<" words in the text\n";
        }
    }
}