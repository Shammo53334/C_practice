#include <stdio.h>
int main() {
    int n;

    for(n=1;n<=100;n=n+1){

        if(n>=50){
        continue;
        }
    printf("%d\n",n);
    }

   return 0;
}
