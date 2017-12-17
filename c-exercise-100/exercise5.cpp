/*
输入三个整数x,y,z，请把这三个数由小到大输出。
*/
#include "stdafx.h"
#include <stdio.h>
int main()
{
	int x,y,z,min;
	printf("输入三个数，x,y,z\n");
	scanf("%d,%d,%d",&x,&y,&z);
	if(x>y){
		min=x;x=y;y=min;
	}
	if(x>z){
		min=x;x=z;z=min;
	}
	if(y>z){
		min=y;y=z;z=min;
	}
	printf("这三个数从小到大为：%d,%d,%d",x,y,z);

	return 0;
}
