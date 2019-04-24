#include "Header.h"

int main()
{
	bool check_sort;
	////////////////////Блок тестов сортировки. Для добавления новых тестов нужно создать новую пару входного и выходного файла, заполнить входной файл 
	//любым количеством значений и скопировать блок ниже, изменив только названия файлов на новые. Примеры:
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