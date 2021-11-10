#include "DynamicGrid.hpp"

DynamicGrid::DynamicGrid(string stringOne, string stringTwo)
{
	this->stringOne = stringOne;
	this->stringTwo = stringTwo;

	this->columnCount = stringOne.length();
	this->rowCount = stringTwo.length();

	this->matrix = new int* [columnCount];
	for (int j = 0; j < columnCount; j++)
	{
		matrix[j] = new int[rowCount];
	}

	this->InitializeEmptyMatrix();
}

void DynamicGrid::InitializeEmptyMatrix()
{
	for (int i = 0; i < this->columnCount; i++)
	{
		for (int j = 0; j < this->rowCount; j++)
		{
			this->matrix[i][j] = 0;
		}
	}	
}

void DynamicGrid::FillGrid()
{
	int longestNum = 0;
	for (int i = 0; i < this->columnCount; i++)
	{
		for (int j = 0; j < this->rowCount; j++)
		{
			if (this->stringOne[i] == this->stringTwo[j])
			{
				if (j > 0 && i > 0)
				{
					int newLength = this->matrix[i - 1][j - 1] + 1;
					if (newLength > longestNum)
					{
						longestNum = newLength;
					}
					this->matrix[i][j] = newLength;
				}
				else
				{
					this->matrix[i][j] = 1;
				}
			}
		}
	}
	cout << "The longest substring is: " << longestNum << endl;
}

void DynamicGrid::ShowGrid()
{
	for (int i = 0; i < this->columnCount; i++)
	{
		for (int j = 0; j < this->rowCount; j++)
		{
			cout << this->matrix[i][j] << " ";
		}
		cout << endl;
	}
}
