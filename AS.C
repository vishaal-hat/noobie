#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()                             //memaan
{
char a[]="meet me again";
char b[11],c[11],d[11];
int i,l1;
int l;
clrscr();
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]==32)
a[i]='\0';
b[i]=a[i];
printf("%c",b[i]);
}
//for(i=0;i<strlen(b);i++)
//{
//printf("%c",b[i]);
//}
getch();
}