/*
 ============================================================================
 Name        : Assignment1.c
 Author      : Sharnoby
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/**************************************************************************************
 *                    Functions prototypes
 *************************************************************************************/
void printCprogramming(void);
void Enterint(void);
void sum(void);
void ascii(void);
void swap(int *x,int*y);
void swapTrick(int *x,int *y);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
	//printCprogramming();   /*calling the function*/
	//Enterint();
	//sum();
	//ascii();                         /*calling the function*/
    int x =200 ,y=2;
    swapTrick(&x,&y);
	return 0;
}
/**************************************************************************************
 *                    Functions implementations
 *************************************************************************************/
/*function to print on screen C programming*/
void printCprogramming(void){
	printf("C Programming \n");
}
/*function to take input from the user and print it*/
void Enterint(void){
	int x; /*Defining Integer Variable*/
	printf("Enter a integer:");
	scanf("%d",&x);
	printf("You entered: %d\n",x);
}
/*function to print the sum of two user input variables*/
void sum(void){
	int x,y; /*Defining Integer Variables*/
	printf("Enter two integers:");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Sum:%d\n",x+y);
}
/*function to print the ascii of a number*/
void ascii(void){
	char x;
	printf("Enter a character:");
	scanf("%c",&x);
	printf("ASCII value of %c =%d",x,(int)x);
}
/*function to swap two integers*/
void swap(int *x,int * y){
	int  temp = *y;
	*y= *x;
	*x = temp;

}
void swapTrick(int *x,int *y){
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("%d",*y);
}

