/*
 * main.c
 *
 *  Created on: Aug 26, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"

void main(){
	/*
int st ,i; float d=0 ,s=0;
	printf("enter the st number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&st);

	for(i=1;i<=st;i++)
	{
		printf("enter the st %d degree",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&d);
		s+=d;
	}
	printf("the average = %f",s/st);
*/
//use while
	int s=0,i=1;
	while(i<=3)
	{
		s+=i;
		i++;
	}
	printf("the sum = %d",s);
}

