//Code to input a string and count numbers of words in a string
#include<stdio.h>
#inlude<string.h>
int words(char str[]){
int c=0,i=0;
while(str[i]!='\0'){
if(str[i]==' '||str[i]=='\n'){
c++;
}
i++;
}
c++;
return c;
}
int main()
{
char str[10];
printf("Enter the elements in the string\n");
fgets(str,10,stdin);
int num=words(str);
printf("Number of words in given string is %d\n",num);
return 0;
}
