#include<stdio.h>
#include"Arthematic.h"
typedef struct complex_t{

int real;

int imaginary;

} complex_t;

int main(){
    complex_t strr;
    strr.real = 1;
    strr.imaginary = 1;
    int num3 = sum(strr.real , strr.imaginary);
    printf("sum of 2 numbers are = %d\n",num3);
    int num4 = Difference(strr.real , strr.imaginary);
    printf("Difference of 2 numbers are = %d\n",num4);
    int num5 = Product(strr.real , strr.imaginary);
    printf("Product of 2 numbers are = %d\n",num5);
   /* int num6 = Division(strr.real , strr.imaginary);
    printf("Division of 2 numbers are = %d",num6);*/
    return 0;
}