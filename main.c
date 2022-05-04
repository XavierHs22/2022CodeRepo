#include <kipr/wombat.h>

int rightMotor = 0;
int rightPower = 100;
int leftMotor = 3;
int leftPower = 90;

int main()
{
    while(analog(5)<1500){
    motor(rightMotor, rightPower);
    motor(leftMotor, leftPower);
    if(analog(0)>4000){
        printf("adjustment left\n");
            motor (leftMotor,leftPower+10);
            motor (rightMotor,rightPower-2);
        msleep(50);
}
    }
    return 0;
}
