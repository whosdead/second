#include<stdio.h>
#include<math.h>
float F(float x1,float x2);
int main()
{
	float a,b,c,x,y;

	do{
	
	
	
	printf("/////////\n");
	scanf("%f%f",&a,&b);
	x=2*a*a*a-4*a*a+3*a-6;
	y=2*b*b*b-4*b*b+3*b-6;
	
	}while(x*y>0);
	c=F(a,b);
	printf("%.2f\n",c);
	return 0;
}
float F(float x1,float x2)
{
	float f1,f2,x,f;
	
	
	
	f1=2*x1*x1*x1-4*x1*x1+3*x1-6;
	f2=2*x2*x2*x2-4*x2*x2+3*x2-6;
	
	do{
		x=(x1+x2)/2;
		f=2*x*x*x-4*x*x+3*x-6;
		if(f1*f>0)
		{
			f1=f;
			x1=x;
		}
		else
		{
			x2=x;
			f2=f;
		}
	}while(fabs(f)>=1e-6);
	return x;
}
