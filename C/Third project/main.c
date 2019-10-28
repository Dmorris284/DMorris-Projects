#include <stdio.h>
#include <stdlib.h>
char name [256];

void question();

int main()
{

question();
}

void question(){
printf("please enter your name!\n");
scanf("%s", &name);
return 0;

}
