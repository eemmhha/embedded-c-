/*
 * main.c
 *
 *  Created on: Sep 1, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"

int calcmin(int a[],int n);

void main()
{
	//int arr[]={1,5,8,6,-1,5,3,4};
	int arr[]={22,45,65,12,85,36,7,26,5,9,0,5,-8,5,-1};
	//int s=sizeof(arr);
	int s=15;
	printf("the min=%d",calcmin(arr,s));

}

int calcmin(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<=n;i++)
	{
		if(a[i]<min) min=a[i];

	}
	return min;
}


