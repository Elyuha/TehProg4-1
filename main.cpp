#include <iostream>
#include <locale>

using namespace std;

template<typename T>

void square(T* array, int size) {
	array = new T[size];
	cout << "������� ������(����� ������� ��-�� ����� �������� enter): " << endl;
	for (int i = 0; i < size; i++)
		cin >> array[i];
	system("cls");
	cout << "������ �� ����������� � �������: ";
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl << "������ ����� ����������� � �������: ";
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
	cout << "������� ������ �������: ";
	cin >> size;
	try {
		if (size <= 0) {
			std::exception ex("������ ������� ������ �������� ��� �������������� �������");
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
		cout << "��� �� ������ �������?" << endl;
		cout << "1) �������� � �������� ������ int" << endl;
		cout << "2) �������� � �������� ������ char" << endl;
		cout << "3) �������� � �������� ������ double" << endl;
		cout << "4) �������� � �������� ������ float" << endl;
		cout << "5) �������� ������ �������" << endl;
		cout << "0) �����" << endl;
		cout << "��� �����: ";
		cin >> choise;
		switch (choise)
		{
		case 1: square(massi, size); break;
		case 2: square(massc, size); break;
		case 3: square(massd, size); break;
		case 4: square(massf, size); break;
		case 5: 
			cout << "������� ����� ������: ";
			cin >> size;
			break;
		case 0: exit = false; break;
		default:
			break;
		}
	}
}