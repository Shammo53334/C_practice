#include<stdio.h>
int main()
{
   // char str[40]="Bangladesh is my country";
   char str[40];
   scanf("%[^\n]",str);//to scan data with space except new line means enter
    printf("%s\n",str);
    return 0;

}
