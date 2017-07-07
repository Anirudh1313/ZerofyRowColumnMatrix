//============================================================================
// Name        : matrixZero.cpp
// Author      : anirudh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

const int M = 10;

void print(int a[M][M]);
void zero_column_row(int a[M][M]);

int main()
{
	int a[M][M];

	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < M; j++)
		{
			a[i][j] = 1;
		}
	}
	a[4][7] = 0;

	cout << "Initial matrix setup: \n" << endl;
	print(a);
	cout << endl;
	zero_column_row(a);
	cout << "\nAfter zeroing a column & row which has 0 in it: \n" << endl;
	print(a);

	return 0;
}

void print(int a[M][M])
{
	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}

void zero_column_row(int a[M][M])
{
	bool row[M], column[M];
	for(int i = 0; i < M; i++)
	{
		row[i] = false;
		column[i] = false;
	}
	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if(a[i][j] == 0)
			{
				row[i] = true;
				column[j] = true;
			}
		}
	}

	for(int i = 0; i < M; i++)
	{
		if(row[i] == true)
		{
			for(int k = 0; k < M; k++)
			{
				a[i][k] = 0;
			}
		}
		if(column[i] == true)
		{
			for(int k = 0; k < M; k++)
			{
				a[k][i] = 0;
			}
		}
	}
}
