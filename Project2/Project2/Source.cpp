#include <iostream>
#include "constants.h"

// ѕолучаем начальную высоту от пользовател€ и возвращаем еЄ
double getInitialHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;
	return initialHeight;
}

// ¬озвращаем рассто€ние от земли после "..." секунд падени€
double calculateHeight(double initialHeight, int seconds)
{
	// »спользуем формулу: [ s = u * t + (a * t^2) / 2 ], где u(начальна€ скорость) = 0
	double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
	double currentHeight = initialHeight - distanceFallen;

	return currentHeight;
}

// ¬ыводим высоту, на которой находитс€ м€чик после каждой секунды падени€ 
void printHeight(double height, int seconds)
{
	if (height > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double initialHeight, int seconds)
{
	double height = calculateHeight(initialHeight, seconds);
	printHeight(height, seconds);
}

int main()
{
	const double initialHeight = getInitialHeight();

	calculateAndPrintHeight(initialHeight, 0);
	calculateAndPrintHeight(initialHeight, 1);
	calculateAndPrintHeight(initialHeight, 2);
	calculateAndPrintHeight(initialHeight, 3);
	calculateAndPrintHeight(initialHeight, 4);
	calculateAndPrintHeight(initialHeight, 5);

	return 0;
}