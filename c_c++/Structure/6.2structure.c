/* structure
#include<stdio.h>

//char name [10] [10];//phone book e 10 joner data thakbe and 10 size er naam
//char phoneno [10] [15];//phone no 10 joner 15 size
//char email [10] [15];

//here is the main problem is we can not understand is there any interconnection among them thats why we use structure

struct Record {
    char name [10];
char phone [15];
char email [15];

};
//Here Record is structure name

int main(){
struct Record a,b; //  Record is struct name; a is Record name
printf("Enter name:");
scanf("%s",&a.name);//a record er name string array scan nicche
printf("Enter  phone:");
scanf("%s",&a.phone);
printf("Enter email:");
scanf("%s",&a.email);
b=a;

printf("Name:%s,Phone:%s,Email:%s",b.name,b.phone,b.email);
return 0;


}
*/
#include<stdio.h>
struct Record {
    char name [10];
char phone [15];
char email [15];

};
int main(){
struct Record a[2]; //  Record is struct name; a is Record name 2 joner jonno so loop use korte hbe
int i;
for(i=0;i<2;i++){ //this for loop is for scanf
printf("Enter name:");
scanf("%s",&a[i].name);//a record er name string array scan nicche
printf("Enter  phone:");
scanf("%s",&a[i].phone);
printf("Enter email:");
scanf("%s",&a[i].email);
}

for(i=0;i<2;i++){ //this for is for print result
printf("Name:%s,Phone:%s,Email:%s\n",&a[i].name,&a[i].phone,&a[i].email);

}


return 0;


}
