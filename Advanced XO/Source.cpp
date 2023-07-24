#include <iostream>

using namespace std;

enum winType { X = 1, O = 2, Both = 3, None = 4 };

// Constants
const int MAX_COL = 10;

// Prototypes
winType const winCheck(char[][MAX_COL], int);
void makeTable(char[][MAX_COL], const char, const int, const int);
void const printTable(char[][MAX_COL], int);


int main()
{	
	// Declaring variables
	int a, n;
	char table[MAX_COL][MAX_COL] = { '-' };
	char move;

	// Getting input
	cin >> n >> a;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			do
			{
				cin >> move;

			} while (move != 'X' && move != 'x' && move != 'O' && move != 'o' && move != '-');

			makeTable(table, move, i, j);
		}

	}

	


	return 0;

}



// Functions
void makeTable(char table[][MAX_COL], const char move, const int i, const int j)
{
	table[i][j] = move;
}

winType const winCheck(char table[][MAX_COL], int winNum)
{
	return X;
}

void const printTable(char table[][MAX_COL], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}
