#include<stdio.h>
int main()
{
   char str[30];
   int i,length;

    gets(str);//only can use in str
    length=0;

    for(i=0;str[i] !='\0' ;i++){ // totokkhon cholbe jotokkhon na null value ashbe

    length=length+1;

    }

    printf("Length of %s is %d\n",str,length);

    return 0;

}
