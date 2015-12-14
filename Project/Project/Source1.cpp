//#include <iostream>
//
//using namespace std;
//
//int addition(int a, int b)
//{
//	int r;
//	r = a + b;
//	return r;
//}
//
//int main()
//{
//	int z;
//	z = addition(5, 3);
//	cout << "The result is " << z << endl;
//	system("pause");
//}
//https://github.com/TelerikAcademy/CSharp-Part-2/tree/master/02.%20Multidimensional%20Arrays

#include <iostream>

using namespace std;

#define N 8

int arr[N][N];

void printArray()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}
}

void printCurrentLocation(int i, int j)
{
	cout << "i: " << i << endl;
	cout << "j: " << j << endl;
}

int main()
{
	int endNumber = N * N;
	int i = 0;
	int j = 0;
	int backEndBorder = N;
	int frontEndBorder = 0;


	for (int number = 1; number < endNumber;)
	{
		// down
		while (i < backEndBorder)
		{
			arr[i][j] = number;
			number++;
			i++;
		}

		//printCurrentLocation(i, j);
		// right
		//backEndBorder--;
		i--;
		j++;
		while (j < backEndBorder)
		{
			arr[i][j] = number;
			number++;
			j++;
		}

		backEndBorder--;
		// up
		j--;
		i--;
		while (i >= frontEndBorder)
		{
			arr[i][j] = number;
			number++;
			i--;
		}

		frontEndBorder++;
		// left
		i++;
		j--;
		while (j >= frontEndBorder)
		{
			arr[i][j] = number;
			number++;
			j--;
		}

		i++;
		j++;

	}

	printArray();
	system("pause");
}