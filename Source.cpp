#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//пример
	/*int x;
	int k = 0;
	int sum = 0;
	do {
		cin >> x;
		k++;
		sum += x;
	} while  (x != 0);
	double sr = (double)sum / k;
	cout << k << endl << sum << endl << sr;*/

	//пример 2
	/*int a, b, i, sum = 0;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i += 1;
	} while (a <= b);
	cout << sum;*/

	//3
	/*int i, h;
	cin >> h;
	i = 1;
	do {
		for (int j = 1; j <= h - i; j++) cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++) cout << '^';
		cout << endl;
	i++;
	} while (i <= h);*/

	//задачи

	//17
	/*double n;
	int i = 1;
	double SUMr = 0;
	cin >> n;
	do {
		double r;
		cin >> r;
		SUMr = SUMr + r;
		i++;
	} while (i <= n);
	double MIDr = SUMr / n;
	cout << MIDr << endl;*/

	  //18
	/*int n;
	cin >> n;
	int i = 1;
	int k = 0;
	do {
		if ((i % 3) != 0 && (i % 2) != 0 && (i % 5) != 0)
		{
			k += 1;
		}
		i++; 
	} while (i <= n);
	cout << k;*/

	//22
	/*int n;
	double sum, i = 1;
	cin >> n;
	sum = 0;
	do {
		sum = sum + (1.0 / i);
		i++;
	} while (i <= n);
	cout << sum;*/

	//29
	/*int i = 2;
	do {
		if ((i % 2) == 0) cout << i << endl;
		i++;
	} while (i <= 100);*/

	//30
	/*int i = 1;
	do {
		if ((i % 2) != 0) cout << i << endl;
		i++;
	} while (i <= 99);*/





}