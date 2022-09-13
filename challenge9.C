 #include<stdio.h>
#include<stdbool.h>
int num;
bool isPremier(num){
bool result;
result=true;
printf(isPremier);
for(int i=2;i<=num/2;i++){
if(num%i==0){
   result=false;
}break;
}
if(result==true){
   printf("%d est un nombre premier");
}
else
printf("%d n'est pas un nombre premier");
}
 int main(){
   printf("donner un nombre");
   scanf("%d", &num);
   if(num==1){
      printf("n'est pas un nombre premier");
   }

   isPremier(num);
return 0;
 }
