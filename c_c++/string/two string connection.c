
#include<stdio.h>
int main()
{
   char a[30]="Bangla",b[30]="Desh";
   int i,j,length;

   length=6;//bangla has 6 words


    for(i =length,j=0;b[j]!='\0' ;i++,j++){
        //i length theke loop shuru korbe and j 0 theke Desh print korete
        //b array teh jotkkhon na null value boshse cholbe
        //i and j 1 1 kore barte thakbe i 6 theke j 0 theke

        a[i]=b[j]; //array a the array b ta copy korbo

    }

    printf("%s\n",a);

    return 0;

}
