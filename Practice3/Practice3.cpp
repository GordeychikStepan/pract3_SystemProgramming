// Practice3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

void task1();
void task2();
void task3();

// вариант 4
int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Введите номер задачи для выбора: ";
	int taskNumber;
	std::cin >> taskNumber;

	switch (taskNumber)
	{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		default: std::cout << "Такого задания не существует.";
	}

	return 0;
}

// Задание - 1. 
#define zTask1 1.0
#define tTask1 2.0
#define yTask1 (tTask1 + zTask1)

#define function_value (8 * pow(zTask1, 2) + 1) / (yTask1 + pow(tTask1, 2))

void task1() {
	double result = function_value;
	std::cout << "Значение функции: " << result << std::endl;
}


// Задание - 2. 
#define xTask2 1.82
#define yTask2 1.25
#define zTask2 w(xTask2, yTask2)
#define bTask2 f(xTask2, yTask2, zTask2)

#define f(x, y, z) ((y - z / y - x)/(cos(x) + pow(y - x, 2)))
#define w(x, y) ((sqrt(15 * y)) / (y + 1.0 / tan(x)))

void task2() {
	double result = bTask2;
	std::cout << "Значение функции: " << result << std::endl;
}


// Задание - 3. 
void task3() {
	std::cout << "Введите значение a: ";
	double a;
	std::cin >> a;

	double y = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);

	std::cout << "Значение функции y = " << y << std::endl;
}
