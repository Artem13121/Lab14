#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define N 100

double* full_elements(double* a, int n) {
    double x, dx;
    printf("x dx: ");
    scanf("%lf %lf", &x, &dx);
    for (int i = 0; i < n; i++) {
        a[i] = 5 * x * x * x + 2 * x * x + 15 * x - 6;
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

int main() {
    setlocale(LC_ALL, "Russian");
    double a[N];
    int n;

    printf("n: ");
    scanf("%d", &n);
    full_elements(a, n);
    printf("Èñõîäíûé ìàññèâ: ");
    put_elements(a, n);
    int b, e;
    printf("îò äî: ");
    scanf("%d %d", &b, &e);
    printf("Ñóììà: %.2f\n", sum_elements(a, b, e));
    double v;
    printf("Íàéòè: ");
    scanf("%lf", &v);
    printf("Ïîçèöèÿ: %d\n", find_element(a, n, v));
    calc_elements(a, n);
    printf("Ìàññèâ ïîñëå äîáàâëåíèÿ ïîñëåäíåãî ýëåìåíòà: ");
    put_elements(a, n);
    double A;
    printf("Ââåäèòå çíà÷åíèå A: ");
    scanf("%lf", &A);
    int index = find_min_positive_greater_than_A(a, n, A);

    if (index != -1) {
        printf("Èíäåêñ ìèíèìàëüíîãî ïîëîæèòåëüíîãî ýëåìåíòà > %.2f: %d\n", A, index);
        printf("Çíà÷åíèå ýòîãî ýëåìåíòà: %.2f\n", a[index]);
    }
    else {
        printf("Íå íàéäåí ïîëîæèòåëüíûé ýëåìåíò áîëüøå %.2f\n", A);
    }

    return 0;
}
