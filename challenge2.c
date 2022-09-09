#include <stdio.h>
#include <stdlib.h>

int main() {

//une voyelle ou non 
//switch case
char lettre;

printf(" entrer une lettr: ");
scanf("%c", &lettre);
switch (lettre)
{
case  'a'/* constant-expression */:
    /* code */
    {printf
    (" la lettre est une voyelle %c", lettre);}
    break;
case  'o':
    {printf(" la lettre est une voyelle %c", lettre);}

    break;

    case  'e':
    {printf(" la lettre est une voyelle %c", lettre);}

    break;

    case  'i':
    {printf(" la lettre est une voyelle %c", lettre);}

    break;
    case  'u':
    {printf(" la lettre est une voyelle %c", lettre);}

    break;
    default:
    printf(" la lettre est une consonnes %c", lettre);
}

    return 0;
}