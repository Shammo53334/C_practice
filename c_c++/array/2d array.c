/*printing an index data
#include<stdio.h>

int main()
{
    double math[2][5];//subset 2 and element inside that 5
    math[0][2]=90; //this index value is 90
   printf("%lf\n",math[0][2]);

return 0;
}
*/
#include<stdio.h>

int main()
{
    double math[2][5];//subset here classes are 2 and element roll inside that 5 rolls
    int c,r;//c means class and r means roll
  // Taking input for math marks
    for(c=0;c<2;c++){
    for(r=0;r<5;r++){

    scanf("%lf",&math[c][r]);// take values from user for each index


    }

    }
//copy and paste them and make some changes  for printing
   // Printing math marks along with class and roll information
    for(c=0;c<2;c++){
    for(r=0;r<5;r++){

    printf("Class %d and roll %d marks %lf\n",c+6,r+1,math[c][r]);// here class starts with 6 and roll starts with 1


    }
    }
return 0;
}
