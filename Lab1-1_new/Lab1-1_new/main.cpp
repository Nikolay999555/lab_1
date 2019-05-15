#include "Header.h"

int main() 
{
	bool check_sort;
	////////////////////Блок тестов сортировки. //ТЕСТЫ ИМИТИРУЮТ РАЗНООБРАЗНЫЕ ВХОДНЫЕ ДАННЫЕ ВВОДИМЫЕ ПОЛЬЗОВАТЕЛЕМ (СТРОКИ
	//СИМВОЛЫ, РАЦИОНАЛЬНЫЕ ЧИСЛА, ИХ РАЗНОЕ ПОЛОЖЕНИЕ В СТРУКТУРЕ ФАЙЛА И РАЗНЫЕ КОМБИНАЦИИ). ОТБРАСЫВАЕТСЯ ВСЕ ТО ЧТО НЕ ЧИСЛО (в десятичном представлении)
	check_sort= TestFile("test1_in.txt", "test1_out.txt");
	if (check_sort)
	{
		cout << "File test1_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test1_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test2_in.txt", "test2_out.txt");
	if (check_sort)
	{
		cout << "File test2_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test2_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test3_in.txt", "test3_out.txt");
	if (check_sort)
	{
		cout << "File test3_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test3_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test4_in.txt", "test4_out.txt");
	if (check_sort)
	{
		cout << "File test4_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test4_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test5_in.txt", "test5_out.txt");
	if (check_sort)
	{
		cout << "File test5_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test5_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test6_in.txt", "test6_out.txt");
	if (check_sort)
	{
		cout << "File test6_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test6_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test7_in.txt", "test7_out.txt");
	if (check_sort)
	{
		cout << "File test7_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test7_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test8_in.txt", "test8_out.txt");
	if (check_sort)
	{
		cout << "File test8_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test8_in.txt not sorted!" << endl;
	}
	////////////////////
	check_sort = TestFile("test9_in.txt", "test9_out.txt");
	if (check_sort)
	{
		cout << "File test9_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File test9_in.txt not sorted!" << endl;
	}
	///////////////////Рандомное заполнение файла и дальнейшая его сортировка
	RandFile("testRand_in.txt",20); //вызов функции, формирующей файл с 20 рандомными значениями, количество элементов можно вводить любое
	check_sort = TestFile("testRand_in.txt", "testRand_out.txt");
	if (check_sort)
	{
		cout << "File testRand_in.txt sorted successfully!" << endl;
	}
	else
	{
		cout << "File testRand_in.txt not sorted!" << endl;
	}
	///////////////////
	system("pause");
}