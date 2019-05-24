#include <iostream>
#include <locale>

using namespace std;

template<typename T>

void square(T* array, int size) {
	array = new T[size];
	cout << "Введите масиив(после каждого эл-та нужно нажимать enter): " << endl;
	for (int i = 0; i < size; i++)
		cin >> array[i];
	system("cls");
	cout << "Масиив до возведенния в квадрат: ";
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl << "Масиив после возведенния в квадрат: ";
	for (int i = 0; i < size; i++)
		cout << array[i] * array[i] << " ";
	cout << endl;
	delete[] array;
	array = NULL;
	system("pause");
}

int main() {
	setlocale(LC_ALL, "rus");
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	try {
		if (size <= 0) {
			std::exception ex("Нельзя создать массив нулевого или отрицательного размера");
			throw ex;
		}
	}
	catch(std::exception& ex) {
		cout << ex.what() << endl;
		system("pause");
		exit(0);

	}
	int* massi = NULL;
	char* massc = NULL;
	double* massd = NULL;
	float* massf = NULL;
	int choise;
	bool exit = true;
	while (exit) {
		system("cls");
		cout << "Что вы хотите сделать?" << endl;
		cout << "1) Возвести в квардрат массив int" << endl;
		cout << "2) Возвести в квардрат массив char" << endl;
		cout << "3) Возвести в квардрат массив double" << endl;
		cout << "4) Возвести в квардрат массив float" << endl;
		cout << "5) Изменить размер массива" << endl;
		cout << "0) Апути" << endl;
		cout << "Ваш выбор: ";
		cin >> choise;
		switch (choise)
		{
		case 1: square(massi, size); break;
		case 2: square(massc, size); break;
		case 3: square(massd, size); break;
		case 4: square(massf, size); break;
		case 5: 
			cout << "Введите новый размер: ";
			cin >> size;
			break;
		case 0: exit = false; break;
		default:
			break;
		}
	}
}