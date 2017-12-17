#include "stdafx.h"
#include <stdio.h>
void main()
{
	double t;
	printf("请输入金额,以万元为单位:\n");
	scanf("%lf",&t);
	if(t<=10)
		printf("奖金为%lf",t*0.1);
	else if(t<=20)
		printf("奖金为%lf",10*0.1+(t-10)*0.75);
	else if(t<=40)
		printf("奖金为%lf",(t-10)*0.05);
	else if(t<=60)
		printf("奖金为%lf",(t-40)*0.03);
	else if(t<=100)
		printf("奖金为%lf",(t-60)*0.015);
	else 
		printf("奖金为%lf",(t-100)*0.01);
}

