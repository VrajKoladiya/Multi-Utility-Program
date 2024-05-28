#include<stdio.h>

main()
{
	float First_angle, Second_angle, Third_angle;
	
	printf("Enter your First Triangle Angle=");
	scanf("%f",&First_angle);
	
	printf("Enter your Second Triangle Angle=");
	scanf("%f",&Second_angle);
	
	Third_angle=180-First_angle-Second_angle;
	printf("Result of Third Triangle angle is=%.2f",Third_angle);
}