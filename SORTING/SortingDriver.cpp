#include <iostream>
#include <stdlib.h>
#include "Sorting.h"
using namespace std;

int main(void)
{
	Sorting sortClass;
	int sortMe[LIST_SIZE] = { 15, 14, 16, 7, 4, 8, 1 };

	// INITIAL ARRAY
	sortClass.LoadArray(sortMe);
	cout << "THE INITIAL LIST CONTAINS" << endl;
	sortClass.DisplayArray();
	cout << endl;

	// BUBBLE SORT
	sortClass.LoadArray(sortMe);
	cout << "BEGIN BUBBLE SORT" << endl;
	sortClass.BubbleSort();
	sortClass.DisplayArray();
	cout << endl;

	// INSERTION SORT
	sortClass.LoadArray(sortMe);
	cout << "BEGIN INSERTION SORT" << endl;
	sortClass.InsertionSort();
	sortClass.DisplayArray();
	cout << endl;

	// SELECTION SORT
	sortClass.LoadArray(sortMe);
	cout << "BEGIN SELECTION SORT" << endl;
	sortClass.SelectionSort();
	sortClass.DisplayArray();
	cout << endl;

	system("pause");
	return 0;
}
