/* Program to check whether an alphabet is vowel or 
* consonant using function
* Vowels: {A,E,I,O,U}
*/
#include<stdio.h>
int isLowerCase(char ch)
{
if(ch>='a' && ch<='z')
return 1;
else
return 0;
}
int isVowel(char c)
{
if(isLowerCase(c))
c=c-32;
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
return 1;
else
return 0;
}
int main()
{

char ch;
scanf("%c",&ch);
if(isVowel(ch))
printf("%c is a vowel\n",ch);
else
printf("%c is not a vowel\n",ch);
return 0;


}
