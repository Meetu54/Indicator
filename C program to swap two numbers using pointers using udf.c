#include<stdio.h>

void swap (int *a, int *b ) {
	
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
	
	printf("\n\n");
	
	
	printf("After swap First value is : %d \n",*a);
	printf("After swap Second value is : %d \n",*b);
	
}

main () {
	
	int i,j;
	
	printf("Before swap enter First value : ");
	scanf("%d",&i);
	
	printf("Before swap enter Second value : ");
	scanf("%d",&j);
	
	swap (&i,&j);
}
