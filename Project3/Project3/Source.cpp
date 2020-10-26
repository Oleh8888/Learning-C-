#include <iostream>
#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime> // ��� ������� time()

int main()
{
    srand(static_cast<unsigned int>(time(0))); // ������������� �������� ��������� ����� � �������� ���������� �����

    for (int count = 0; count < 100; ++count)
    {
        std::cout << rand() << "\t";

        // ���� ������ 5 �����, �� ��������� ������ ����� ������
        if ((count + 1) % 5 == 0)
            std::cout << "\n";
    }
}
