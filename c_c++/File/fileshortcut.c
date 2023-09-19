#include<stdio.h>

int main()
{
    //file redirecttory open
    //stdin standard input...keyboard input hishebe nibe file er input
    freopen("G:\\c_c++\\File\\input.txt","r",stdin);//must follow the directory format like"\\"
    freopen("G:\\c_c++\\File\\output.txt","w",stdout);

    int num1,num2,sum;

    while(2==scanf("%d%d",&num1,&num2)){
 // program jotokkhon 2 ta value scan korbe totokkhon shotto hobe and loop cholbe
    sum= num1+num2;
    printf("%d\n",sum);
    }
  return 0;

}
