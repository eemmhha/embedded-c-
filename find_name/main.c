/*
 * main.c
 *
 *  Created on: Sep 1, 2017
 *      Author: eemmh
 */
/*
#include "stdio.h"
#include "string.h"
#include "math.h"
int findName(char names[][14],int x,char name[])
{
	int i;
	for(i=0;i<x;i++)
	{
		//if(names[i][]==name[]) return 1;
		if(stricmp(names[i],name)==0) return 1;
	}
	return 0;
}
void main()
{
char name[14];
char names[5][14] = {"Alaa", "Osama", "Mamdouh",
"Samy", "Hossain"};
puts("Enter your first name:");
gets(name);
if(findName(names, 5, name)== 1)
puts("Welcome");
else
puts("Goodby");
}
*/
/*
#include "stdio.h"
void reverse();
void main()
{
	printf("enter a sentence:");
	reverse();
}

void reverse()
{
	//char c='maha mohamed';
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c);
	}
}
*/
#include<stdio.h>
int main()
{
int a=10;
void f();
a = f();
printf("%d\n", a);
return 0;
}
void f()
{
printf("Hi");
}
