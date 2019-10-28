#include <stdio.h>
#include <stdlib.h>


   // printf("Hello world!\n");
    //return 0;

   /* int fahr, celcius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper ) {
        clecius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    } */

  //  messageHello(){
   // printf("Hellowworld!\n");

   // }
void askQuestion();
int integer1 = 0;
int integer2 = 0;
int integer3 = 0;

    int main(){

        printf("Enter the first integer\n");
        scanf("%d", integer1);

        printf("Enter the second integer\n");
        scanf("%d", integer2);

        integer3 = integer2 + integer1;

        printf("Here is the total\n");
        scanf("%d", integer3);

        askQuestion();
        return 0;
}

void askQuestion(){
    printf("hello world!\n");
    scanf("%s", names);
    printf("hello world! %s \n", names);

}
