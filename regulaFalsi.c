#include<stdio.h>
#include<conio.h>
#include<math.h>
#define hata 0.000001

float f(float x)
{
	//1-x-e^-2x=0 [0.5 , 1] örneði için
	//return 1-x-exp(-2*x);
	
	//x+lnx-5=0 [3.2 , 4] örneði için
	return log(x)-x+2;
	//float a=3.2;
	//float b=4;
}

int main()
{
	float a=3;
	float b=4;
	float x0,xk;
	
	if(f(a)*f(b)>0)
	{
		printf("Wrong Range");
		return 0;
	}
	
	x0=(a*f(b)-b*f(a))/(f(b)-f(a));
	printf("%f\n",x0);
	
	if(f(a)*f(x0)<0)
		b=x0;
	else
		a=x0;
		
	do
	{
		xk=x0;
		x0=(a*f(b)-b*f(a))/(f(b)-f(a));
		printf("%f\n :",x0);
	
	if(f(a)*f(x0)<0)
		b=x0;
	else
		a=x0;	
	}		
	
	while(fabs(xk-x0)>hata);
	printf("Approximate Result : %f \n",x0);
	getch();
	
}
