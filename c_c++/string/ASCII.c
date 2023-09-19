/* AScii value of x
#include<stdio.h>
int main()
{
  char ch = 'x';
  printf("%c\n",ch);
  printf("%d\n",ch);
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
  int ascii;

  for (ascii=0;ascii<256;ascii++){
  printf("Ascii -%d :%c\n",ascii,ascii);
  }

  return 0;

}
*/
#include<stdio.h>
int main()
{
  char ch = 'd';
  char capital=ch-'a'+'A'-3;//find distance from a and plus capital form of a=A
  //we can use f and F too
  printf("%c\n",capital);
    return 0;

}

