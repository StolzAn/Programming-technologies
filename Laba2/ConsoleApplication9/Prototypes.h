#pragma once

#include "Libraries.h"


int main(array<System::String^>^ args);

void menu();

array<int>^ check_size();

double check_r();


void input(array<double, 2>^ A,int m, int n);


int form(array<double, 2>^ a, array<double>^ b, int r, int m, int n);


void print(array<double>^ b, int k, int m, int n);