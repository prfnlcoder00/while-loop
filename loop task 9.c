#include<stdio.h>

main(){
	
		int a = 1;
		
		int factorial=1;
		
		int n;
		
		
		printf("Enter the facorial value: ");
		
		scanf ("%d", &n);
		while(a<=n){
			
						factorial *= a; // factorial = favtorial * a; 
			
			
						/*
								factorial = 1 * 1 = 1
								
								factorial = 1 * 2 = 2
								
								factorial = 2 * 3 = 6
								
								factorial = 6 * 4 = 24
								
								factorial = 24 * 5 = 120
							
						*/
			
						a++;
			
		}
	
			printf("%d ", factorial);
	
	
	
	
	
	
	
	
	
}
