#include "Header.h"

bool TestFile(const char* inputfile, const char* output_file)
{
	int size = FileSize(inputfile);
	bool result_test = false;
	double* read_array = new double[size]; //¬ “≈ ”ў≈ћ ЅЋќ ≈ ѕјћя“№ ¬џƒ≈Ћ»Ћ»
	ReadFile(inputfile,read_array,size);

	if (size != 0)
	{
		QuickSort(read_array, 0, size - 1); //сортируем массив data быстрой сортировкой

		cout << "Sort data -> "; //выводим в консоль отсортированный массив
		for (int i=0;i<size;i++)
		{
			cout << read_array[i] << " ";
		}
		cout << endl;

		WriteFile(output_file, read_array, size); //записываем осортированный массив в выходной файл
		result_test = CheckSort(read_array,size);
	}
	delete[] read_array; //¬ “≈ ”ў≈ћ ЅЋќ ≈ ѕјћя“№ ѕќ„»—“»Ћ»
	read_array = nullptr; 

	return result_test;
}