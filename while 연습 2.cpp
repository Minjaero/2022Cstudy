#include <stdio.h>
main()
{
	int i = 1, n, sum = 0;
	int start;
	
	printf("����  �� :");
	scanf("%d", &i);
	start = i;
	
	printf("������ �� :"); 
	scanf("%d", &n);
	
	while( i <= n)
	{
		sum = sum+i;
		i++;
	 } 
	 	printf("%d���� %d������ ���� %d" , start , n , sum);
	 	printf("\n===============================================\n");
	 	

	 	
	
	 
}
