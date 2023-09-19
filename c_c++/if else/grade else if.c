#include <stdio.h>
int main() {
    int marks;
   char grade;
   scanf("%d",&marks);

   if(marks>=80 ){
       grade='+';
   printf("Your grade is %c\n",grade);
   }
     else if(marks>=70 ){
       grade='A';
   printf("Your grade is %c\n",grade);
   }
      else if(marks>=60 ){
       grade='B';
   printf("Your grade is %c\n",grade);
   }
    else if(marks>=50 ){
       grade='C';
   printf("Your grade is %c\n",grade);
   }
   else{
       grade='F';
         printf("Your grade is %c\n",grade);


   }
   return 0;
}

