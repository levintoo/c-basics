#include<stdio.h> 
int main( )
{
	int age;

	printf ("Enter your age: ");
	scanf("%d",&age);

	if (age >= 18 ){
		printf ("\nYou can vote.");
		printf ("\nPlease Vote Wisely.");
	}
	else{
		printf("\nYou are too young to vote.");
		printf ("\nDont worry you can vote someday.");
	}

	return 0;
}
