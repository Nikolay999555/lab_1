#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include  <fstream>
#include <ctime>
using namespace std;
#define	  stop __asm nop

bool TestFile(const char* inputfile, const char* output_file);
int& ReadFile(const char* fileName,int& size);
void QuickSort(int* arr, int left, int right);
void WriteFile(const char* fileName, int* data,int& size);
bool CheckSort(int* data,int& size);
void RandFile(const char* filename,int size);

