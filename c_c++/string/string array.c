/*
#include<stdio.h>
int main()
{
    char name[3][10];//3 ta name str jegular length 10
     int i;

     for(i=0;i<3;i++){
     scanf("%s",name[i]);
     }
     for(i=0;i<3;i++){
     printf("%s\n",name[i]);
     }

     return 0;
}
*/

#include<stdio.h>
int main()
{
    char name[3][10]={"Shammo","Mahin",{'J','O','Y'}};//3 ta name str jegular length 10
     int i;

     for(i=0;i<3;i++){
     printf("%s\n",name[i]);
     }

     return 0;
}
