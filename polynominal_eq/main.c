/*
 * main.c
 *
 *  Created on: Aug 26, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"
void main()
{
	int y,x;
	do {
	printf("enter x value :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	y=(x*x)+(2*x)+2;
	printf(" your value= %d need more y , no n ",y);
	}while(getche()=='y');
}

