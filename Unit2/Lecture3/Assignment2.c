#include<stdio.h>
#include <stdlib.h>

/**************************************************************************************
 *                    Functions prototypes
*************************************************************************************/
void evenodd(int num);
void checkVowel(char x);
void findTheLargest(void);
void checkPositiveNegative(int number);
void checkalpha(void);
int sumN(int);
int factorial(int);
void calculator(void);
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
	//evenodd(12);
	//checkVowel('i');
	//findTheLargest();
	//checkPositiveNegative(5);
	//checkalpha();
    //printf("%d",sumN(100));
    //printf("%d",factorial(5));
    calculator();
	return 0;
}
/*function to check if a number is even or odd*/
void evenodd(int num){
	if(num%2==0){
		printf("%d is even\n",num);
	}
	else if(num%2!=0){
		printf("%d is odd\n",num);
	}
	else{
		/*do nothing*/
	}
}
/*function to check if the word is a vowel*/
void checkVowel(char x){
	if(x=='i'||x=='o'||x=='u'||x=='a'||x=='e'){
		printf("vowel\n");
	}
	else{
		printf("not vowel\n");
	}
}
/*function to check the largest amoung 3 numbers*/
void findTheLargest(void){
	float x,y,z;
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	if(x>y && x>z){
		printf("%f is the largest\n",x);
	}
	else if(y>x && y>z){
		printf("%f is the largest\n",y);
	}
	else{
		printf("%f is the largest\n",z);
	}
}
/*function to check if the number is positive or negative or 0*/
void checkPositiveNegative(int number){
	if(number>0){
		printf("%d is positive\n",number);
	}
	else if(number<0){
		printf("%d is negative\n",number);
	}
	else{
		printf("you entered 0\n");
	}
}
/*function to check if the input is alphapet or not*/
void checkalpha(void){
	char x;
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z')){
		printf("%c is alphapet",x);
	}
	else{
		printf("%c is not alphapet",x);
	}
}
/*function to return the sum of the numbers from 1 to n*/
int sumN(int n){
	int sum =0,i=0;
	for(;i<=n;i++){
		sum+=i;
	}
	return sum;
}
/*function to calculate the factorial of a number*/
int factorial(int n){

    if(n<0){
    	printf("error there is no factorial for negative");
    	return 0;
    }
	if(n==1||n==0){
		return 1;
	}
	return n* factorial(n-1);
}
void calculator(void){
	char x;
	float z,y;
	printf("enter the operator");
		scanf("%c",&x);
	printf("enter two numbers");
	scanf("%f",&y);
	scanf("%f",&z);

	switch(x){
	case '-':
		printf("%f",y-z);
		break;
	case '+':
			printf("%f",y+z);
			break;
	case '/':
			printf("%f",y/z);
			break;
	case '*':
			printf("%f",y*z);
			break;
//	default:
//		printf("enter a valid operator");
	}
}
