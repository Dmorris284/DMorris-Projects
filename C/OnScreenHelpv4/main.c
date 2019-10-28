#include <stdio.h>
#include <stdlib.h>

int option =0;
int batteryMethodopt =0;
int motorMethodopt =0;
int startMethodopt =0;
int ProgramMethodopt =0;

//sqaure
//sing hb lcd printing intune
//dance routine w/ music


void mainMethod()
    {
        printf("1) Batteries\n");
        printf("2) Motors, LED  and Sound\n");
        printf("3) Starting a Program\n");
        printf("4) Info about Programs\n");
        printf("5) Close the program\n\n");
        printf("Please enter an option: ");
        scanf("%d", &option);
        printf("\n");
    }
void batteryMethod()
    {
        printf("BATTERIES\n\n");
        printf("When starting the robot you need to make sure the robot is charged so it wont run out during operations especially if you are editing the robot as changing it while plugged in can be dangerous if it runs out of charge. to replace the batteries you ask Simon. The robot has $x AA batteries which make it work and provide it power.\n\n");
        printf("1) Go back to main menu\n");
        printf("2) Close the program\n\n");
        printf("Please enter an option: ");
        scanf("%d", &batteryMethodopt);
        printf("\n");
        if (batteryMethodopt == 1)
        {
            system("cls");
            mainMethod();
        }
        if (batteryMethodopt == 2)
        {
            exit(0);
        }
        if (batteryMethodopt > 2)
        {
            printf("Please enter a number between 1 and 2\n\n");
            batteryMethod();
        }
    }
void motorMethod()
    {
        printf("MOTORS, LED and SOUND\n\n");
        printf("The robot is powered by 2 motors one for each wheel, the robot can turn corners and speed of each wheel because of the differential drives it uses which makes it good at handling and movement in general. There are two LEd's at the bottom of the robot one is green and one is red you can make them flash at different times and in different sequences they are positioned under the robot. the Sound from the robot comes from a piezo buzzer which means it cant generate alot of different noises but it can alternate the volume and frequency of the sounds it can produce because of this you can make tunes and songs with it it is positioned on top of the robot\n\n");
        printf("1) Go back to main menu\n");
        printf("2) Close the program\n\n");
        printf("Please enter an option: ");
        scanf("%d", &motorMethodopt);
        printf("\n");
        if (motorMethodopt == 1)
        {
            system("cls");
            mainMethod();
        }
        if (motorMethodopt == 2)
        {
            exit(0);

        }
        if (motorMethodopt > 2)
        {
            printf("Please enter a number between 1 and 2\n\n");
            motorMethod();
        }
    }
void startMethod()motorMethod
    {
        printf("START ROBOT\n\n");
        printf("To start the robot you need to press the power button at the back of the robot, this button is labelled 'Power' so should be easy to recognise it is a small button and is potentially hard to touch so be careful when turning on the robot. you need to press the B button when the robot is on to start the program\n\n");
        printf("1) Go back to main menu\n");
        printf("2) Close the program\n\n");
        printf("Please enter an option: ");
        scanf("%d", &startMethodopt);
        printf("\n");
        if (startMethodopt == 1)
        {
            system("cls");
            mainMethod();
        }
        if (startMethodopt == 2)
        {
            exit(0);
        }
        if (startMethodopt > 2)
        {
            printf("Please enter a number between 1 and 2\n\n");
            startMethod();
        }
    }
void ProgramMethod()
    {
        printf("Program Information\n\n");
        printf("the first program is making the robot move around in a square shape, the second program is making the program sing happy birthday and it displays the lyrics on the LCD screen in time to the song and finally is a dance program where the robot does a a funky dance\n\n");
        printf("1) Go back to main menu\n");
        printf("2) Close the program\n\n");
        printf("Please enter an option: ");
        scanf("%d", &ProgramMethodopt);
        printf("\n");
        if (ProgramMethodopt == 1)
        {
            system("cls");
            mainMethod();
        }
        if (ProgramMethodopt == 2)
        {
            exit(0);
        }
        if (ProgramMethodopt > 2)
        {
            printf("Please enter a number between 1 and 2\n\n");
            ProgramMethod();
        }
    }
int main()
{
    printf("<-- 3Pi Robot Help -->\n\n");
    mainMethod();
    if (option == 1)
    {
        batteryMethod();
    }
    if (option == 2)
    {
        motorMethod();
    }
    if (option == 3)
    {
        startMethod();
    }
    if (option == 4)
    {
        ProgramMethod();
    }
    if (option == 5)
    {
        exit(0);
    }
    if (option > 5)
    {
        printf("Please enter a number between 1 and 5\n\n");
        mainMethod();
    }
    return 0;
}
