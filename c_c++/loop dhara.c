/* #include <stdio.h>

int main() {
    int n;
    for(n=5;n<=1000;n=n+5){
    printf("%d\n",n);
    }

  return 0;
}
*/
/*
int main() {
    int n,sum=0;
    for(n=5;n<=1000;n=n+5){
     sum=sum+n;
        }
    printf("Sum is %d\n",sum);
  return 0;
  */
  int main() {
    int n,sum,start,dif,end;
    scanf("%d%d%d",&start,&dif,&end);
    //we can assign multiple variable value in loops
    for(n=start,sum=0;n<=end;n=n+dif){
     sum=sum+n;
        }
    printf("Sum is %d\n",sum);
  return 0;

}
