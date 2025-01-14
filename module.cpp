#include <iostream>
#include <cstring>
using namespace std;

bool proverka(const string& str) { //посимвольно проверяем вводимую пользователем строку на наличие не цифр.
	for (char c : str) {
		if (c < '0' || c > '9') {
			return false; 
		}
	}
	return true;
}

int izstrvint(const string& str) { //преобразуем пользовательскую строку в числовой формат.
	int n = 0;
	for (char c : str) {
		n = n * 10 + (c - '0'); 
	}
	return n;
}

void schitalka(int a[], int& size) { //считаем значение 2^N
	int tec = 0;
	for (int i = 0; i < size; i++) { 
		int itog = a[i] * 2 + tec;
		a[i] = itog % 10;
		tec = itog / 10;
	}
	while (tec > 0) { 
		a[size] = tec % 10;
		tec /= 10;
		size++;
	}
}

void umenshalka(int n, int a[], int& size) { //уменьшаем значение 2^N на единицу
	a[0] = 1;
	size = 1;
	for (int i = 1; i <= n; i++) {
		schitalka(a, size);
	}
	for (int i = 0; i < size; i++) {
		if (a[i] > 0) {
			a[i]--;
			break;
		}
		else {
			a[i] = 9;
		}
	}
}


void vyvod(int a[], int size) { //вывод получившегося числа
	for (int i = size - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << endl;
}
