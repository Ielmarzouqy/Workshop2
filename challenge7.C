#include <stdio.h>

void add(int nombre1, int nombre2){

int sum= nombre1 + nombre2;
printf(" donner le nombre1 :");
scanf("%d", &nombre1);
printf(" donner le nombre2 :");
scanf("%d", &nombre2);

printf("l'addition du %d et %d est: %d", nombre1, nombre2, sum );

}

int main(){

   printf("%d", add(nombre1,nombre2))
    return 0;
}

