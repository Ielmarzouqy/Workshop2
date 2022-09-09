#include <stdio.h>
#include <stdlib.h>

int main(){

int a, r;

printf(" donner la valeur de a: ");
scanf("%d", &a);

r = a%2;
if(r ==0){
    printf("a est un nombre paire %d", a);
}
    else{
    
    
    printf("a est un nombre impaire %d", a);
}



return 0;
}
