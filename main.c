#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
char name[255],last[255];

printf("Enter your fistname: ");
fgets(first,255,stdin);
first[strlen(first)-1] = '\0';
printf("Now enter your lastname: ");
gets(last);

printf("Hello %s %s!\n",first,last);

return 0;
}