#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Введите number = ";
	cin >> number;
	for (int id = 1; id <= number; id++) // для id от 1 до n с шагом 1 
		cout << id << "\t";
}
