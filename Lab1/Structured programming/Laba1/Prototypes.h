#pragma once

//Common interfaces

void user_menu();

//One Dimention Array

void task1_main();

int check_arr_size1(int n);

int* get_arr_elements1(int* array, int n);

int* min_element(int* const arr, int n);

int* summa(int* const arr, int n);

int* compress(int* const arr, int n, int a, int b);

void display_min_element(int* array, int n);

void display_summa(int* array, int n);

void display_compress(int* array, int n);

void task_choice(int* array, int n);

int negative_element(int* const arr, int n);

int* index_min(int* const arr, int n);

//Two Dimention Array

void task2_main();

int check_arr_size2(int n, int m);

void task_choice2(int** array, int n, int m);

int** get_arr_elements2(int** array, int n, int m);

double** triangle_arr(double** array, int n, int m);

double* average(double** arr, int n, int m);

void display_average(double** arr, int n, int  m);

void display_triangle_arr(double** arr, int n, int m);

//Char Array

void task3_main();

bool isDigit(char line);

int task_three(int max_length);