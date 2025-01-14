#include <iostream>
#include <sstream>
#include <cstring>
#include "Header.h"
using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	int a[1000];
	int size;
    int n;
	string str;
    bool fl = false; 
    cout << " Эта программа считает результат вычисления выражения 2^N-1." << endl;
    cout<< " Для этого вам необходимо только вести натуральное число N большее 40." << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    while (!fl) {
        cout << "Введите число N (N>40): ";
        getline(cin, str);
        if (proverka(str)) {
            n = izstrvint(str);

            if (n > 40) {
                umenshalka(n, a, size);
                cout << "2^" << n << "-1 = ";
                vyvod(a, size);
                fl = true; 
            }
            else {
                cout << "Значение должно быть больше 40. Попробуйте еще раз." << endl;
            }
        }
        else {
            cout << "Некорректный ввод. Значение должно быть положительным целым числом больше 40. Попробуйте еще раз." << endl;
        }
		
	}
	return 0;
}
