// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
	//int a = 10;
	//int* ptr = &a;

	//cout << *ptr+23<<endl;
	//cout << &a<<endl;

	//*ptr = 100;
	//cout << a << endl;

	/*int arr[5]{ 10,5,3,6,20 };
	int* ptr = arr;
	ptr++;
	cout << ptr << endl << &arr[1]<<endl;
	cout << &arr[4] - &arr[0];*/

	int s;
	cout << "Enter size of massive ->";
	cin >> s;
	int *arr = new int[s];
	int f = s + 1;
	int	*mas = new int[f];
	for (int i = 0; i < s; i++)
	{
		arr[i] = i+1; 
		mas[i] = arr[i];
		cout << arr[i] << "\t";
	}
	cout << endl<<endl;
	for (int i = 0; i < f; i++) {
		mas[f-1] = 100;
		cout <<"\t" << mas[i] << endl;
	}

	delete [] arr;
	delete[] mas;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

