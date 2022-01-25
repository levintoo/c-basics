#include<stdio.h> 
void main( )
{
	int age;

	printf ("Enter your age: ");
	scanf("%d",&age);

	if (age >= 18){
		printf ("\nYou can vote.");
	}
	else if (age <= 0){
		printf ("\nYou dont even exist.");
	}
	else if (age >= 80){
		printf ("\nYou are too old to vote.");
	}
	else{
		printf("\nYou are too young to vote.");
	}

	printf("\n\n");
}
