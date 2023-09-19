
//square of a variable
/*
#include<stdio.h>

int square(int x)//a variable will be assigned as x in this function
{
    int y;
    y=x*x;
    return y;//will returrn the value of y and return t 14 line again then execute
}


int main(){
int a ,sq;
scanf("%d",&a);
sq=square(a);
printf("The sqare of %d is %d\n",a,sq);
return 0;
}
*/
#include<stdio.h>

int minimum(int a,int b)//a ,b variable will be assigned as a,b and t1,c in this function
{
    int temp;
   if(a<b){
   temp=a;
   }
     else{
   temp=b;
     }
    return temp;//will returrn the value of temp and return to 40 and 41 line again then execute
}


int main(){
int a ,b,c;
int t1,t2;
scanf("%d%d%d",&a,&b,&c);
t1=minimum(a,b);
t2=minimum(t1,c);
printf("The smaller number is %d \n",t2);
return 0;
}
