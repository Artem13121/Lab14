#ifndef ARRAYS_H
#define ARRAYS_H

/**
 * Функция для получения значения функции f(x) = 5x³ + 2x² + 15x - 6
 * @param x аргумент функции
 * @return значение функции
 */
double func(double x);

/**
 * Заполнение массива значениями функции
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @return указатель на заполненный массив
 */
double* full_elements(double* ptr_array, int n);

/**
 * Печать элементов массива
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @return количество выведенных элементов
 */
int put_elements(double* ptr_array, int n);

/**
 * Обработка элементов массива
 * (к каждому элементу прибавляется значение последнего элемента)
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @return указатель на обработанный массив
 */
double* calc_elements(double* ptr_array, int n);

/**
 * Вычисление суммы элементов массива [begin, end]
 * @param ptr_array указатель на массив
 * @param begin начальный индекс (включительно)
 * @param end конечный индекс (включительно)
 * @return сумма элементов
 */
double sum_elements(double* ptr_array, int begin, int end);

/**
 * Поиск элемента в массиве
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @param element искомый элемент
 * @return индекс найденного элемента или -1 если не найден
 */
int find_element(double* ptr_array, int n, double element);

/**
 * Поиск индекса минимального положительного элемента, большего заданного значения A
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @param A заданное значение
 * @return индекс минимального положительного элемента > A или -1 если не найден
 */
int find_min_positive_greater_than_A(double* ptr_array, int n, double A);

#endif
