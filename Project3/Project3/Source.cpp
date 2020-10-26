#include <iostream>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

int main()
{
    srand(static_cast<unsigned int>(time(0))); // устанавливаем значение системных часов в качестве стартового числа

    for (int count = 0; count < 100; ++count)
    {
        std::cout << rand() << "\t";

        // Если вывели 5 чисел, то вставляем символ новой строки
        if ((count + 1) % 5 == 0)
            std::cout << "\n";
    }
}
