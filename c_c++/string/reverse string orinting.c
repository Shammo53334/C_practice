/*
#include<stdio.h>
int main()
{
   char str[30];
   int i;

    gets(str);//only can use in str

    for(i =10;i>=0 ;i=i-1){ // totokkhon cholbe jotokkhon na null value ashbe

    printf("%c",str[i]);

    }

    printf("\n");

    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
   char str[30],str_new[30];
   int i,j;

gets(str);

    for(i =5,j=0;i>=0 ;i=i-1){
        //j er 0 th ghore i er 10th ghorer char copy hobe

   str_new[j]=str[i];
   j=j+1; //j will go forward  starts with last string like i====bangla to j====algnab

    }
    str_new[j]='\0'; //null charcter assign korbo j teh karon null eta forward jacche
    //r null charcter na dile memory teh thaka data boshbe like &%#signs

    printf("%s\n",str_new);

    return 0;

}
*/
#include<stdio.h>
int main()
{
   char str[30];
   int i;

gets(str);

    for(i =10;i>=0 ;i=i-1){


       printf("%c\n",str[i]);


    }
    str[i]='\0'; //null charcter assign korbo j teh karon null eta forward jacche
    //r null charcter na dile memory teh thaka data boshbe like &%#signs



    return 0;

}
