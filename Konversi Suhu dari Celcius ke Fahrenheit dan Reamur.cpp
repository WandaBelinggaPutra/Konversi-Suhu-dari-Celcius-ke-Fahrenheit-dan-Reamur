#include <stdio.h>
#include <conio.h>

int main()
{
float c,r,f,k;

printf("masukan besar suhu dalam celcius : ");
scanf("%f", &c);
f=(c*1.8)+32;
printf("suhu dalam farenheit : %.2f farenheit\n", f);
r=(c*0.8);
printf("suhu dalam rheamur : %.2f rheamur\n",r);
getch();

}
