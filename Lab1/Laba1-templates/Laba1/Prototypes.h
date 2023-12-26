#pragma once
#include "Libraries.h"

void user_menu();

//One Dimention Array

int check_arr_size1(int n);

template <typename T>
void task1_main();

template <typename T>
T* get_arr_elements1(T* array, int n);


template <typename T>
T* index_min(T* const arr, int n);


template <typename T>
T* min_element(T* const arr, int n);


template <typename T>
int negative_element(T* const array, int n);


template <typename T>
T* summa(T* const arr, int n);


template <typename T>
T* compress(T* arr, int n, double a, double b);


template <typename T>
void display_min_element(T* array, int n);


template <typename T>
void display_summa(T* array, int n);


template <typename T>
void display_compress(T* array, int n);


template <typename T>
void task_choice(T* array, int n);



//Two Dimention Array

template <typename T>
void task2_main();

int check_arr_size2(int n, int m);

template <typename T>
void task_choice2(T** array, int n, int m);

template <typename T>
T** get_arr_elements2(T** array, int n, int m);

double** triangle_arr(double** array, int n, int m);

double* average(double** arr, int n, int m);

void display_average(double** arr, int n, int  m);

void display_triangle_arr(double** arr, int n, int m);

//Char Array

void task3_main();

bool isDigit(char line);

int task_three(int max_length);