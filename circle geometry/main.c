/*
 * main.c
 *
 *  Created on: Aug 26, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"
void main ()
{
	char x ;
	int r;
	float pi=3.14;
	printf("enter a for area and c for circ , then enter the radis value");
	fflush(stdin); fflush(stdout);
	scanf("%c %d",&x,&r);
	/*
if(x=='a')
{
	printf("area = %f ",pi*r*r);
}
else if(x=='c')
{
	printf("circ = %f",2*pi*r);
}
else {
	printf("you enter wrong char ");
}
*/
	//by switch method
	switch (x){
	case 'a':
	{
		printf("area = %f ",pi*r*r);
	}
	break;
	case 'c':
		{
			printf("circ = %f",2*pi*r);
		}
		break;
	default:
	{
		printf("you enter wrong char ");
	}
	}

}
