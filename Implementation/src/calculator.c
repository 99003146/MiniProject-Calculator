#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int add (int number1, int number2)
{
    return number1+number2;

}
int substract(int number1, int number2)
{
    return number1-number2;
}

double multiply(double number1, double number2)
{
    return number1*number2;
}
double divide(double number1, double number2)
{   if(number2!=0)
    {
    return number1/number2;
    }
    else
    {
        return 0;
    }
    
}
double square(double number)
{
    return number*number;
}
double sqarert(double number)
{
    return sqrt(number);
}
