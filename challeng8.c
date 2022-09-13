#include<stdio.h>

int main(){
// int a, b;
// int* ptr;
// printf("donner la valeur de a :");
// scanf("%d", &a);

// printf(" donner la valeur de b :");
// scanf("%d", &b);
// *ptr = a ;
// a=b;
// b= *ptr;
// printf("la valeur de a est %d", a);
// printf(" et la valeur de b est %d", *ptr);
int a;
int b;
int nombres[2];

printf("donner le nombre 1 :");
scanf("%d", &a);
printf("donner le nombre 2 :");
scanf("%d", &b);

*nombres = b;
*(nombres +1) = a;
printf("donner le nombre 1  : %d\n", *nombres);
printf("donner le nombre 2  : %d\n", *(nombres +1));

    return 0;
}
