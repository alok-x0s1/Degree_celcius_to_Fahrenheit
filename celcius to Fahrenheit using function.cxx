#include<stdio.h>
float tempcon(float);
int main()
{
	float c;
	printf("enter temp in Celcius :\n");
	scanf("%f",&c);
	printf("temperature in fahrenheit is %f degrees",tempcon(c));
	return 0;
}
float tempcon(float c)
{
	int fehren=c*9.0/5.0+32;
	return fehren;
}