#include "stdafx.h"
#include <stdio.h>
void main()
{
	double t;
	printf("��������,����ԪΪ��λ:\n");
	scanf("%lf",&t);
	if(t<=10)
		printf("����Ϊ%lf",t*0.1);
	else if(t<=20)
		printf("����Ϊ%lf",10*0.1+(t-10)*0.75);
	else if(t<=40)
		printf("����Ϊ%lf",(t-10)*0.05);
	else if(t<=60)
		printf("����Ϊ%lf",(t-40)*0.03);
	else if(t<=100)
		printf("����Ϊ%lf",(t-60)*0.015);
	else 
		printf("����Ϊ%lf",(t-100)*0.01);
}

