#include<stdio.h>
#include<stdbool.h>
 bool  is_leap_year(int year){
        
        if((year%4==0)&&(year%100!=0)||(year%400==0)){
            return true;
        }
        else {
            return false;
        }
    }

int main(){
    int year;
    printf("entrer une annee entre 1800 et 10000: ");
    scanf("%d",&year);
    if(is_leap_year(year)==true)
    {printf("est une annee bissextile");}
   else
   {printf("n'est pas une annee bissextile");}
    return 0;
}
