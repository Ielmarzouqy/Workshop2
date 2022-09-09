#include <stdio.h>
#include <stdlib.h>
int main(){

int a, b;
printf("donner le nombre de a: ");
scanf("%d", &a);
printf("donner le nombre de b: ");
scanf("%d", &b);

if(a==b){
    printf("%d", (a+b)*3);
}
else{
    printf("%d", a+b);
    
}
    return 0;

}