#include <stdio.h>
int minimum(int a,int b)
{
    int temp;
    if(a<b){
    temp=a;
    }
    else{
    temp=b;
    }
    return temp;
}
int main() {
  int a,b;
  int smaller=0;
  scanf("%d%d",&a,&b);
smaller=minimum(a,b);
//checking if minimum named functtion exist
//after that going to minimum function start execution
//and return temp value come again in main function in smaller=minimum(a,b) line and execute the rest operation
printf("The smaller number is %d\n",smaller);

  return 0;
}
