#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,b=0;
clrscr();
printf("enter the word :\n");
scanf("%s",a);
for(i=0;a[i]!=0;i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
b++;
}
printf("no of vowels %d \n",b);
getch();
}
