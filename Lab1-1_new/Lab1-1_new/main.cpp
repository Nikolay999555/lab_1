#include "Header.h"

int main() 
{
	bool check_sort;
	////////////////////Блок тестов сортировки. //ТЕСТЫ ИМИТИРУЮТ РАЗНООБРАЗНЫЕ ВХОДНЫЕ ДАННЫЕ ВВОДИМЫЕ ПОЛЬЗОВАТЕЛЕМ (СТРОКИ
	//СИМВОЛЫ, РАЦИОНАЛЬНЫЕ ЧИСЛА, ИХ РАЗНОЕ ПОЛОЖЕНИЕ В СТРУКТУРЕ ФАЙЛА И РАЗНЫЕ КОМБИНАЦИИ). ОТБРАСЫВАЕТСЯ ВСЕ ТО ЧТО НЕ ЧИСЛО (в десятичном представлении)
	check_sort= TestFile("EMPTY_FILE_IN.txt", "EMPTY_FILE_OUT.txt");
	if (check_sort)
	{
		cout << "File EMPTY_FILE_IN.txt sorted successfully!\n\n";
	}
	else
	{
		cout << "File EMPTY_FILE_IN.txt not sorted!\n\n" ;
	}
	////////////////////
	check_sort = TestFile("INT_AND_DOUBLE_IN.txt", "INT_AND_DOUBLE_IN_OUT.txt");
	if (check_sort)
	{
		cout << "File NT_AND_DOUBLE_IN.txt sorted successfully!\n\n";
	}
	else
	{
		cout << "File NT_AND_DOUBLE_IN.txt not sorted!\n\n";
	}
	////////////////////
	check_sort = TestFile("LINES_AND_NUMBERS_IN.txt", "LINES_AND_NUMBERS_OUT.txt");
	if (check_sort)
	{
		cout << "File LINES_AND_NUMBERS_IN.txt sorted successfully!\n\n";
	}
	else
	{
		cout << "File LINES_AND_NUMBERS_IN.txt not sorted!\n\n" ;
	}
	////////////////////
	check_sort = TestFile("ONLY_DOUBLE_IN.txt", "ONLY_DOUBLE_OUT.txt");
	if (check_sort)
	{
		cout << "File ONLY_DOUBLE_IN.txt sorted successfully!\n\n";
	}
	else
	{
		cout << "File ONLY_DOUBLE_IN.txt not sorted!\n\n";
	}
	////////////////////
	check_sort = TestFile("ONLY_INT_IN.txt", "ONLY_INT_OUT.txt");
	if (check_sort)
	{
		cout << "File ONLY_INT_IN.txt sorted successfully!\n\n";
	}
	else
	{
		cout << "File ONLY_INT_IN.txt not sorted!\n\n";
	}
	////////////////////
	check_sort = TestFile("SYMBOLS_AMD_NUMBERS_IN.txt", "SYMBOLS_AMD_NUMBERS_OUT.txt");
	if (check_sort)
	{
		cout << "File SYMBOLS_AMD_NUMBERS_IN.txt sorted successfully!\n\n";
	}
	else
	{
		cout << "File SYMBOLS_AMD_NUMBERS_IN.txt not sorted!\n\n";
	}

	///////////////////Рандомное заполнение файла и дальнейшая его сортировка
	RandFile("RANDOM_IN.txt",20); //вызов функции, формирующей файл с 20 рандомными значениями, количество элементов можно вводить любое
	check_sort = TestFile("RANDOM_IN.txt", "RANDOM_OUT.txt");
	if (check_sort)
	{
		cout << "File RANDOM_IN.txt sorted successfully!\n\n";
	}
	else
	{
		cout << "File RANDOM_IN.txt not sorted!\n\n";
	}
	///////////////////
	system("pause");
}