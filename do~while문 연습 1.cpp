#include <stdio.h>
main()
{
	int i = 10;
	
	do
	{
		printf("%d ", i);
		i--;
	}	while (i >= 5);	
	 	
	 	printf("\n예제11==================================\n");
	 	
	int n, a=0 ;
	printf("정수입력 : ");
	scanf("%d", &n);
	
	do{
		printf("I love programming\n");
		a++;
	}	while (a < n);
	
		printf("\n예제11==================================\n");
		
	/*int num;
	
	do
	{
		scanf("%d", &num);
		
		if(num > 0) {
			if(num %2 ==1)
				printf("홀수\n");
			else
				printf("짝수\n");
				
		}
			
	} while( num > 0 );
	
				printf("\n예제11==================================\n"); */
				
	int sum = 0, b = 1;
	do
	{
	 	sum = sum + b;
	 	b = b + 2;
	}while(b < 50);
	printf("1부터 50까지의 홀수의 합 : %d", sum);			
}
