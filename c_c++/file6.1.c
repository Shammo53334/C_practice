#include<stdio.h>
int main()
{

FILE*input_file;

input_file=fopen("a.txt","r"); //r for read mode w for write mode,have many modes like this

char input[80];// for storing into a string

fgets(input,80,input_file);//fgets is a function liek gets for file
//(string name,strng size,file name)

puts(input);//for print string
return 0;


}
