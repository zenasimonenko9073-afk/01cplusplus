#include<iostream>
using namespace std;

int main()
{


	int age = 15;
	int Age = 45;
	cout << "Age student: " << age << "\n";
	cout << "Age human:" << Age << endl;

	int age1 = 14;
	//int 2age = 8;
	const int dayweek = 7;
	int num;
	num = 100;
	const int hours_in_day = 24;
	int hours_2000;
	int day_weak = 366;
	hours_2000 = day_weak * hours_in_day;
	cout << hours_2000 << endl;

	float discount = 0.05;
	int cost = 10.67;
	int count = 4;
	cin >> cost;
	cout << "Enter"
	cin >> count;
	float price = cost - count * discount * cost * count;
	cout << "You need to pay:" << price << endl;
	int number;
	

	return 0;
}
