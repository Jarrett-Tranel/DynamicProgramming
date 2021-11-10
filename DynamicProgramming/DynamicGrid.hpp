#pragma once
#include <iostream>
using namespace std;

class DynamicGrid
{
	private:
		string stringOne;
		string stringTwo;
		int columnCount;
		int rowCount;
		int** matrix; //[row which will be string two][column which will be string one]
		void InitializeEmptyMatrix();

	public:
		DynamicGrid(string stringOne, string stringTwo);
		void FillGrid();
		void ShowGrid();
};

