/* strlen  task
#include<stdio.h>
#include<string.h>
int main()
{
   char a[50]= "abcdef";
   int len= strlen(a);//a string er length ber korbe strlen
   printf("Length equals %d\n",len);
    return 0;

}
*/

#include<stdio.h>
#include<string.h>
int main()
{
   char a[50]= "Desh";
   char b[50]= "Bangla";
   strcat(b,a);//jaar shthe jog kore sheta jogfoler variable hobe character er sheta age thakbe like a
   //strcat for concat
   printf("%s Length equals %d\n",b,strlen(b));
    return 0;

}
