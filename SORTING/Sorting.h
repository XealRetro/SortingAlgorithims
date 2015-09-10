#define LIST_SIZE 7
#include <iostream>
using namespace std;

class Sorting{

private:
	int numbersArray[LIST_SIZE];
	int *aPtr;
	int swapq;
	int *myVar;

public:
	
	void swap(int &m, int &n);
	void DisplayArray();
	void LoadArray(int* aPtr);
	void BubbleSort();
	void SelectionSort();
	void InsertionSort();

	
};



void Sorting::swap(int &x, int &y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void Sorting::LoadArray(int* z)
{
	myVar = z;
}

void Sorting::BubbleSort()
{
	for (int c = 0; c < (7 - 1); c++)
	{
		for (int d = 0; d < (7 - c - 1); d++)
		{
			if (myVar[d] > myVar[d + 1])
			{
				swapq = myVar[d];
				myVar[d] = myVar[d + 1];
				myVar[d + 1] = swapq;
			}
		}
	}
}

void Sorting::SelectionSort()
{
	for (int i = 0; i < (7 - 1); i++)
	{
		int minIndex = i;

		for (int j = i + 1; j < 7; j++)
		{
			if (myVar[j] < myVar[minIndex])
			{
				minIndex = j;
			}
		}

		if (minIndex > i)
		{
			swap(myVar[i], myVar[minIndex]);
		}
	}
}

void Sorting::InsertionSort()
{
	for (int x = 1; x < 7; x++)
	{
		int z = x;

		while (z > 0 && myVar[z - 1] > myVar[z])
		{
			int temp;
			temp = myVar[z];
			myVar[z] = myVar[z - 1];
			myVar[z - 1] = temp;
			z--;
		}
	}
}

void Sorting::DisplayArray()
{
	for (int u = 0; u < 7; u++)
	{
		cout << " " << myVar[u];
	}
}