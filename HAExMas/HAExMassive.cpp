#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cstring>
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	std::cout << "������� 1: ������� ��������������\n\n";

	const int size = 10;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
			arr[i] = rand() % (101) + 0;
			std::cout << arr[i] << '\t';
	}
	std::cout << '\n';
	std::cout << "\n\n����� ��������� �������:\n";
	float sumMas = 0;
	int ABS;
	for (int i = 0; i < size; i++)
		sumMas += arr[i];
	std::cout << sumMas << "\n\n";
	std::cout << "������� �������������� �������:\n";
	ABS = sumMas / size;
	std::cout << ABS;
	std::cout << "\n\n��������, ������� ������ �������� ���������������:\n";
	for (int i = 0; i < size; i++)
		if (arr[i] < ABS)
			std::cout << arr[i] << '\t';
	std::cout << "\n\n";

	std::cout << "������� 2: �������� ������\n\n";
	//��������� ��������, �� ���������� ���, ��� ����������� ��� ���������� �������
	/*const int msize = 5;
	int arra[msize][msize];
	int arrb[msize][msize];
	srand(time(NULL));
	for (int i = 0; i < size; i++) 
		for (int j = 0; j < size; j++) {
			arra[i][j] = rand() % (5 - 1 + 0) + 0;
			std::cout << arra[i][j] << '\t'; //������ ������-�� ��������� � ���� ���, �� ����, ��� ������� ���, ����� �� ��������� ���������
		}
	std::cout << '\n';
	srand(time(NULL));
	for (int i = 0; i < size; i++) 
		for (int j = 0; j < size; j++) {
			arrb[i][j] = rand() % (5 - 1 + 0) + 0;
			std::cout << arrb[i][j] << '\t'; //������ ������-�� ��������� � ���� ���, �� ����, ��� ������� ���, ����� �� ��������� ���������
		}
	std::cout << '\n';*/
	const int sizeo = 5;
	int arra[sizeo][sizeo];
	srand(time(NULL));
	for (int i = 0; i < sizeo; i++) {
		for (int j = 0; j < sizeo; j++) {
			arra[i][j] = rand() % (9 - 1 + 1) + 1;
			std::cout << arra[i][j] << '\t';
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	int arrb[sizeo][sizeo];
	srand(time(NULL));
	for (int i = 0; i < sizeo; i++) {
		for (int j = 0; j < sizeo; j++) {
			arrb[i][j] = rand() % (9 - 1 + 1) + 1;
			std::cout << arrb[i][j] << '\t';
		}
		std::cout << "\n";
	}

	std::cout << "\n\n�������� ������:\n\n";

	int arrSum[sizeo][sizeo];
	for (int i = 0; i < sizeo; i++) {
		for (int j = 0; j < sizeo; j++) {
			arrSum[i][j] = arra[i][j] + arrb[i][j];
			std::cout << arrSum[i][j] << '\t';
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";

	std::cout << "������� 3: ������� ����� � ������\n\n";//SOS!!!
	const int digit = 6;
	int number;
	int arrc[digit];
	std::cout << "������� ����� -> ";
	std::cin >> number;
	if (number % 100000 != 0 || number % 10000 != 0 || number % 1000 != 0 || number % 100 != 0 || number % 10 != 0) {
		std::cout << "������ �����!";
	} else
		for (int i = 0; i < digit; i++) {
			arrc[i] = arrc[number / 100000];
			std::cout << arrc[i] << '\t';
		}
	std::cout << "\n";

	return 0;
}