

#include <iostream>
#include "DynamicGrid.hpp"

using namespace std;


int main()
{
	string stringOne = "qwertyuiop";
	string stringTwo = "asdftyui";

	DynamicGrid* output = new DynamicGrid(stringOne, stringTwo);
	output->FillGrid();
	output->ShowGrid();

}