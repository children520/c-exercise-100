/*
������������x,y,z���������������С���������
*/
#include "stdafx.h"
#include <stdio.h>
int main()
{
	int x,y,z,min;
	printf("������������x,y,z\n");
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
	printf("����������С����Ϊ��%d,%d,%d",x,y,z);

	return 0;
}
