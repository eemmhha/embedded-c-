/*
 * min.c
 *
 *  Created on: Aug 26, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"
void main()
{
	int minn,x,y;
	printf("enter the 2 numbers");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("min number = %d ",minn=(y<x)?y:x);
}

