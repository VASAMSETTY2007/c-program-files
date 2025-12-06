/*write a c program to read and display a character a string and a sentence*/
#include<stdio.h>
int main()
{
	char ch;
	char word[10];
	char sentence[50];
	
	printf("enter any character");
	scanf("%c",&ch);
	
	printf("enter any word");
	scanf("%s\n",word);
	
	printf("enter any sentence");
	scanf("[^\n]s",sentence);

   printf("character is %c\n",ch);
   printf("word is %s\n",word);
   printf("sentence is %s\n",sentence);
}