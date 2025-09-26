#ifndef DEF_H
#define DEF_H
#include <stdarg.h>
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

int sum1(int count, ...);

int sum2(int *start);

double def1(double x, double y, double z);

double def2(double x, double y, double z);

double def3(double x, double y, double z, double (*def)(double x, double y, double z));

void def4();

#endif