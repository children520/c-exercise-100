/*
����ĳ��ĳ��ĳ�գ��ж���һ������һ��
*/
#include "stdafx.h"
#include <stdio.h>
int main(){
	int m,n,k,sum,leap;
	printf("�������꣬�£���\n");
	scanf("%d,%d,%d",&m,&n,&k);
	switch(n) // �ȼ���ĳ����ǰ�·ݵ�������
    {
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf("data error");break;
    }
	sum=sum+k;
	if(m%4==0&&m%100!=0){

		leap=1;
	}
	else{
		leap=0;
	}
	if(leap==1&&n>2){
	sum+=leap;
	}
	printf("������һ���%d��",sum);
}
		