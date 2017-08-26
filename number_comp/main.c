/*
 * main.c
 *
 *  Created on: Aug 26, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"
void main (){
	int x,y,z;
	printf("enter 3 numbers to compare");
fflush(stdin);fflush(stdout);
scanf("%d %d %d",&x,&y,&z);
if(x>y){
	if(x>z){
		printf("the max number = %d",x);
	}
	else if(x<z){
		printf("the max number = %d",z);
	}
	else if(x<y){
		if(y>z){
			printf("the max number = %d",y);
		}
		else if(y<z){
			printf("the max number = %d",z);
		}
	}
}
}

