/* printing descending order
#include<stdio.h>

int main(){
int n[5]={2,3,5,6,9};
int i;

for(i=4;i>=0;i--)
{
    printf("%d\n",n[i]);
}

return 0;
}
*/
/*
#include<stdio.h>

int main(){
int n[5]={2,3,5,6,9};
int i;

printf("the number is %d\n",n[3]);

return 0;
}
*/
#include<stdio.h>

int main(){
double math[5]={92,33,65,76,89}; // math marks
int roll;

for(roll=1;roll<=5;roll++)
{
    printf("ROLL: %d Marks:%lf\n",roll,math[roll-1]);
}

return 0;
}
