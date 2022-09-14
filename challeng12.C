#include <stdio.h>
#include <string.h>
void CopieChaine(char* p, char* q);

int main()
{
  	char Chaine1[100], Chaine2[100];
 
  	printf("\n entrer une chaine source  :  ");
  	gets(Chaine1);
 
	CopieChaine(Chaine1, Chaine2);
	
	printf("\n chaine de destination   = %s", Chaine1);

  	
  	return 0;
}

void CopieChaine(char* p, char* q)
{
	int i = 0;

  	for (i = 0; p[i]!='\0'; i++)
  	{
  		q[i] = p[i];
  	}
	q[i] = '\0';
}