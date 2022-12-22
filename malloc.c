#include<stdio.h>
#include<stdlib.h>
int main()
{
int choose;
float *kelvin;
puts("do you want to enter degree in 1.celsius or 2.fahrenheit\n");
scanf("%d",&choose);
kelvin = (float *)malloc(sizeof(float)*2);
if (choose == 1)
{
puts("enter degree in celsius\n");
scanf("%f",kelvin[1]);
*kelvin[2] = *kelvin[1] + 273.15; 
}
else if(choose == 2)
{
puts("enter degree in fahrenheit\n");
scanf("%f",kelvin[1]);
*kelvin[2] = (*kelvin[1] + 459.67)*(5.0/9.0);
}
else
{
puts("wrong input");
}
printf("%f",*kelvin[2]);
return 0;
}
