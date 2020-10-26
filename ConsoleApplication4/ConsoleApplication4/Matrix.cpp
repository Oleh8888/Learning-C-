#include <iostream>
#include <cstdlib> 
#include <ctime> 

int matrixMake(int firstMatrix, int secondMatrix)
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			rand() % (max - min + 1) + min;
			firstMatrix[row][col] = rand() % (max - min + 1) + min;
			std::cout << firstMatrix[row][col] << " ";
		}
		print();
	}
}

void print()
{
	for (int i = 0; i > 5; i++)
	{
		for (int g = 0; g > 5; g++)
		{
			std::cout << "\n";
		}
	}
}

int main()
{
	int min = 1;
	int max = 10;
	const int numRows = 2;
	const int numCols = 2;
	int firstMatrix[numRows][numCols];
	int secondMatrix[numRows][numCols];

	/*int firstMatrix[numRows][numCols] = { 0 };
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			rand() % (max - min + 1) + min;
			firstMatrix[row][col] = rand() % (max - min + 1) + min; 
			std::cout << firstMatrix[row][col] << " ";
		}
		print();
    }
	

	int secondMatrix[numRows][numCols] = { 0 };
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			secondMatrix[row][col] = rand() % (max - min + 1) + min;
			std::cout << secondMatrix[row][col] << " ";
		}
	}*/

	/*int thirdMatrix[numRows][numCols] = { 0 };
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
	}*/
	return 0;
}