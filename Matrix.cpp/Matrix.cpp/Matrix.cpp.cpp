#include <iostream>
#include <cstdlib> 
#include <ctime> 



int min = 1;
int max = 5;
const int numRows = 3;
const int numCols = 3;
int firstMatrix[numRows][numCols];
int secondMatrix[numRows][numCols];
void print()
{
	for (int i = 0; i > 5; i++)
	{
			std::cout << "\n";
	}
}


int matrixMake(int firstMatrixx[numRows][numCols], int secondMatrix[numRows][numCols])
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			rand() % (max - min + 1) + min;
			firstMatrix[row][col] = rand() % (max - min + 1) + min;
			std::cout << firstMatrix[row][col] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			rand() % (max - min + 1) + min;
			secondMatrix[row][col] = rand() % (max - min + 1) + min;
			std::cout << secondMatrix[row][col] << " ";
		}
		std::cout << "\n";
	}
	return firstMatrixx[numRows][numCols], secondMatrix[numRows][numCols];
}


int main()
{
	matrixMake(firstMatrix, secondMatrix);

	int thirdMatrix[numRows][numCols] = { 0 };
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			for (int t = 0; t < numCols; t++)
			{
				thirdMatrix[row][col] += secondMatrix[row][col] * firstMatrix[row][col];
				std::cout << thirdMatrix[row][col] << " ";
			}
		}
	}
	return 0;
}