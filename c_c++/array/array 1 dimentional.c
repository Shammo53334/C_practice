/*Basic example of array
#include<stdio.h>

int main()
{
    int a,b,c;
    int n[3];
    scanf("%d",&n[0]);
    scanf("%d",&n[1]);
    scanf("%d",&n[2]);

    printf("%d\n",n[0]);
    printf("%d\n",n[1]);
    printf("%d\n",n[2]);

return 0;
}
*/
#include<stdio.h>

int main()
{
    int a,b,c;
    int n[3];
   int i;

   for (i=0;i<3;i++){
   scanf("%d",&n[i]);
   }
    for (i=0;i<3;i++){
   printf("%d\n",n[i]);
   }
return 0;
}
