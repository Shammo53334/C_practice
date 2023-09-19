#include <stdio.h>

int main() {
int i,j;
for(j=0;j<5;j=j+1){
for(i=0;i<j+1;i=i+1){ //for(i=0;i<5;i=i+1) make that to this for run nested loop where i and j is not equal to run
printf("*");
}
printf("\n");
}

  return 0;
}

