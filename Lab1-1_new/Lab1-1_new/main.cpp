#include "Header.h"

int main()
{
	bool check_sort;
	////////////////////���� ������ ����������. ��� ���������� ����� ������ ����� ������� ����� ���� �������� � ��������� �����, ��������� ������� ���� 
	//����� ����������� �������� � ����������� ���� ����, ������� ������ �������� ������ �� �����. �������:
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

	///////////////////��������� ���������� ����� � ���������� ��� ����������
	RandFile("testRand_in.txt",20); //����� �������, ����������� ���� � 20 ���������� ����������, ���������� ��������� ����� ������� �����
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