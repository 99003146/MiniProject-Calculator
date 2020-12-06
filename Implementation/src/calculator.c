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


//conversion

double ctof(double celsius)
{
    double fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

double ftoc(double fahrenheit)
{
    double celsius;
    celsius = ((fahrenheit-32)*5)/9;
    return celsius;
}

double kmtom(double km)
{   if(km>=0)
    {
    double meter;
    meter=km*1000;
    return meter;
    }
    else
    {
        return 0;
    }
    
}

double mtokm(double meter)
{
    int km;
    if(km>=0)
    {
    km=meter/1000;
    return km;
    }
    else
    {
        return 0;
    }
    
}

double kgtog(double kg)
{   if(kg>=0)
    {
    double gram=kg*1000;
    return gram;
    }
    else
    {
        return 0;
    }
    
}

double gtokg(double gram)
{   if(gram>=0)
    {
    double kg=gram/1000;
    return kg;
    }
    else
    {
        return 0;
    }
}

//trignometric


double cosine(double m){
    m=m/57.295779513;
    printf("cosine of angle is ");
    double result=cos(m);
    return result;
}
double sine(double m){
    m=m/57.295779513;
    printf("sine of angle is ");
    double result=sin(m);
    return result;
}
double Tan(double m){
    m=m/57.295779513;
    printf("tan of angle is ");
    double result=tan(m);
    return result;
}
double Cot(double m){
    m=m/57.295779513;
    printf("Cot of angle is ");
    double result=1/tan(m);
    return result;
}
double Sec(double m){
    m=m/57.295779513;
    printf("Sec of angle is ");
    double result=1/cos(m);
    return result;
}
double Cosec(double m){
    m=m/57.295779513;
    printf("Cosec of angle is ");
    double result=1/sin(m);
    return result;
}
