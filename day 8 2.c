#include<stdio.h>

int main (){
	
	int a ;
	
	printf("Enter a number to Find if a given number is neutral or not : ");
	scanf("%d",&a);
	
	if (a==0){
		
		printf("Congratulations , you enter a neutral number");
		
	}
	else{
		
		printf("Oops! The number you have enter is not a neutral number :");
	}
	
	return 0 ;
}
