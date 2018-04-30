/*
* C Program to check whether a alphabet is vowel or not
* using switch statement
* Vowels: {A,E,I,O,U}
*/
#include<stdio.h>
int main()
{
char ch;

scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
case 'e':
case 'i':
case  'o':
case 'u':
case 'E':
case 'I':
case 'O':
case 'U':
printf("%c is a vowel\n",ch);
break;
default:
printf("%c  is a consonant\n",ch);
}
return 0;




}

