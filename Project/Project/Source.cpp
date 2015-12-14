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

#define N 5

int arr[N][N];

void printArray()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << " " << arr[i][j];
		}

		cout << endl;
	}
}

int main()
{
	/*for (int i = 0; i < N; i++)
	{
	for (int j = 0; j < N; j++)
	{
	arr[i][j] = 1;
	}
	}*/

	int number = 1;
	int endNumber = N * N;
	int i = N - 1;
	int j = 0;
	int iHelper = i;
	int jHelper = 1;

	// first part
	while (i >= 0)
	{
		while (i < N)
		{
			arr[i][j] = number;
			number++;
			i++;
			j++;
		}

		j = 0;
		iHelper--;
		i = iHelper;
	}

	/*cout << "i: " << i << endl;
	cout << "j: " << j << endl;*/

	i++;
	j++;

	while (j < N)
	{
		while (j < N)
		{
			arr[i][j] = number;
			number++;
			j++;
			i++;
		}

		i = 0;
		jHelper++;
		j = jHelper;
	}


	printArray();
	system("pause");
}