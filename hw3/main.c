/*
 * main.c
 *
 *  Created on: Aug 26, 2017
 *      Author: eemmh
 */
#include "stdio.h"
#include "math.h"
void main(){
	//ex1
	/*
	int x;
	printf("enter your number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int ns=x%2;
	if(ns==0)
		{
			printf("the number %d is even",x);

		}
	else
		{
			printf("the number %d is odd",x);
		}
		*/
	//ex2
	/*
char c;
printf("enter your char");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
switch(c){
case 'a':
case 'e':
case 'o':
case 'u':
case 'i':
	printf(" your char %c is vowels\n",c);
	break;
default:
	printf(" your char %c is cons\n",c);
	break;
}
*/
	//ex3
	/*
	float x,y,z;
	printf("enter 3 numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	float max1,max2;
	max1=(x>y)?x:y;
	max2=(max1>z)?max1:z;
	printf("the max number = %f \n",max2);
*/
	//ex4
	/*
	float x;
	printf("enter your number\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x<0){
		printf(" your char %f is -ve\n",x);
	}
	else if (x>0){
		printf(" your char %f is +ve\n",x);
	}
	else {
		printf(" your entet zero \n");
	}
*/
	//ex6
	/*
	int x,s=0;
	printf("enter your number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		s+=i;
	}
	printf("the sum =%d",s);
*/
	//ex7
	/*
	int x,y=1;
	printf("enter your number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x>0){
		for(int i=1;i<=x;i++){
			y*=i;
		}
		printf(" the factoial =%d \n",y);
	}
	else if (x<0){
		printf(" factorial not exist");
	}
	else {
		printf(" factorial=1");
	}
*/
	//ex8
	float x,y,z;
	char c;
	printf("enter your operator + - * /:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("enter 2 value :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f ",&x,&y);
	switch(c){
	case '+':{
		printf("%f %c %f = %f",x,c,y,x+y);
	//	z=x+y;
	}
		break;
	case '-':{
		printf("%f %c %f = %f",x,c,y,x-y);
	}break;
	case '*':{
		printf("%f %c %f = %f",x,c,y,x*y);
	}break;
	case '/':{
		printf("%f %c %f = %f",x,c,y,x/y);
	}break;
	default:{
		printf("there is error in the wrong data");
	}break;
	}
	//printf("%f %c %f = %f",x,c,y,z);
}

