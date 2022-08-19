#include <stdio.h>
main()
{
	int i = 1, n, sum = 0;
	int start;
	
	printf("시작  수 :");
	scanf("%d", &i);
	start = i;
	
	printf("마지막 수 :"); 
	scanf("%d", &n);
	
	while( i <= n)
	{
		sum = sum+i;
		i++;
	 } 
	 	printf("%d부터 %d까지의 합은 %d" , start , n , sum);
	 	printf("\n===============================================\n");
	 	

	 	
	
	 
}
