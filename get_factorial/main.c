/*
 * main.c
 *
 *  Created on: Sep 1, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"

int getfactorial(int x)
{
	int f=1;
	//if(x==0)return 1;
	for(int i=0;i<x;i++)
	{
		f*=(x-i);
	}
	return f;
}
void main()
{
	int x,fac;
	printf("enter your number ");
	scanf("%d",&x);
fac=getfactorial(x);
printf("the fact of %d = %d",x,fac);

}

