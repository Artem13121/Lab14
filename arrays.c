#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include "array.h"

// Реализация функции f(x) = 5x³ + 2x² + 15x - 6
double func(double x) {
    return 5 * x * x * x + 2 * x * x + 15 * x - 6;
}

double* full_elements(double* a, int n) {
    double x, dx;
    printf("x dx: ");
    scanf("%lf %lf", &x, &dx);
    for (int i = 0; i < n; i++) {
        a[i] = func(x);
        x += dx;
    }
    return a;
}

int put_elements(double* a, int n) {
    for (int i = 0; i < n; i++) printf("%.2f ", a[i]);
    printf("\n");
    return 0;
}

double sum_elements(double* a, int b, int e) {
    double s = 0;
    for (int i = b; i <= e; i++) s += a[i];
    return s;
}

int find_element(double* a, int n, double v) {
    for (int i = 0; i < n; i++)
        if (fabs(a[i] - v) < 0.001) return i;
    return -1;
}

double* calc_elements(double* a, int n) {
    double last_value = a[n - 1];
    for (int i = 0; i < n; i++) {
        a[i] += last_value;
    }
    return a;
}

int find_min_positive_greater_than_A(double* a, int n, double A) {
    int min_index = -1;
    double min_value;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] > A) {
            if (min_index == -1 || a[i] < min_value) {
                min_value = a[i];
                min_index = i;
            }
        }
    }

    return min_index;
}
