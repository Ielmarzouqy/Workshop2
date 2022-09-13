#include<stdio.h>
#include <stdbool.h>
double divededby(int a,int b){
 double result=a/b;
 return result;
}
bool Ispremier(int result){
int i;
bool premier=true;
 for(i=2;i<result;i++){
  if(result/i==0){
    premier=false;
  }
 }
  return premier;
//   else {premier=true;}
 }

int main(){
int a;
int b;
double division;
printf("Entrer le nombre a: ");
scanf("%d", &a);
printf("\nEntrer le nombre b: ");
scanf("%d", &b);
division=divededby(a,b);
printf("%2.lf", division);
if(Ispremier(divededby(a,b))==1){
  printf("un nombre premier",a,b);
}
else{
  printf("le nombre n'est pas premier",a,b);}
return 0;
}