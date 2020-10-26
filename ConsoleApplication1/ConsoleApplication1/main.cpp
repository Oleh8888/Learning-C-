#include <iostream>

int main()
{
    int students[] = { 73, 85, 88, 44, 78 };
    const int numStudents = sizeof(students) / sizeof(students[0]);

    int maxindex = 0; // отслеживаем самую высокую оценку

    for (int person = 0; person < numStudents; ++person)
        if (students[person] > maxindex)
            maxindex = students[person];

    std::cout << "The best index score was " << maxindex << '\n';

    return 0;
}