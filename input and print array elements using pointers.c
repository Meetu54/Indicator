#include<stdio.h>

main(){
	
	int n;
	
	printf("Enter Size :- ");
	scanf("%i",&n);
	
	int a[n];
	int *b[n];
	
	int i;
	
	for(i=0; i<n; i++){
		
		printf("Enter Value[%i] :- ",i);
		scanf("%i",&a[i]);
		
	}
	
	for(i=0; i<n; i++){
		
		b[i] = &a[i];
		
		printf("%i\n",*b[i]);
	}
	
	
}
