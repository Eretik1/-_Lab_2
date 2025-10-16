#include "def.h"

int sum1(int count, ...){
    int res = 0;
    va_list n;
    va_start(n, count);
    for(int i = 0; i < count; i++){
        res += va_arg(n, int);
    }
    va_end(n);
    if(count != 0){
        return res / count;
    }
    else{return 0;};
}

int sum2(int *start){
    int res = 0;
    for(int i = 0; i < 10; i++){
        res += *(start + i);
    }
    return res / 10;
}

double def1(double x, double y, double z){
    double t = ((x * y * z) - (y * abs((x + sqrt(z))))) / (pow(10, 7) + pow((log10(4)), 0.25));
    return t;
}

double def2(double x, double y, double z){
    double d = sqrt(z * (sqrt(y) * pow(x, 2))) * (log(fabs(x)) - fabs(z-y));
    return d;
}

double def3(double x, double y, double z, double (*def)(double x, double y, double z)){
    double t = def(x, y, z);
    return t;
}

void def4(){
    int arr[20];

    int ar1[10];
    int ar2[10];

    int *arr2 = &arr[0];
    int *arr1 = &arr[10];

    arr1 = &ar1[0];
    arr2 = &ar2[0];

    printf("%p   %p\n", ar1, ar2);

    for (int i = 0; i < 10; i++) {
        arr1[i] = rand() % 100 + 1;
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        arr2[i] = rand() % 100 + 1;
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

    arr2[12] = arr1[0] * 2;
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

    *(arr2 + 12) = *(arr1)* 2;
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");
}