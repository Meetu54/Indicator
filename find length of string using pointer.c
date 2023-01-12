#include<stdio.h>
#include<string.h>
main () {
	
	int i;
	int a[100];
	int *b[100];
	
		b[100]=&a[100];
		
	printf(" enter the value : ");
	scanf("%s",&a);
	

	
	printf("%d",strlen(a));
			
			printf("%s",*b);
		
}
