#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int* arr, n, sum = 0, buff = 0, d;
	cout << "Введите число:";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> d;
		arr[i] = d;
	}
	for (int i = 1; i < n; i++)
	{
		buff = arr[i]; 
		
		for (int j = i - 1; j >= 0 && arr[j] > buff; j--) {
			arr[j + 1] = arr[j];
			arr[j + 1] = buff; 
		}
	}
	for (int i = 0; i < n; i++) { 
		cout << arr[i] << '\t';
		cout << endl;
	}
	for (int j = 0; j < n; j++) {
		if (arr[j] % 11 == 0) {
			sum += arr[j];
		}
	}
	cout << "Ответ:" << sum;
}

