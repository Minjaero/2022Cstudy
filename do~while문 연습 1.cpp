#include <stdio.h>
main()
{
	int i = 10;
	
	do
	{
		printf("%d ", i);
		i--;
	}	while (i >= 5);	
	 	
	 	printf("\n����11==================================\n");
	 	
	int n, a=0 ;
	printf("�����Է� : ");
	scanf("%d", &n);
	
	do{
		printf("I love programming\n");
		a++;
	}	while (a < n);
	
		printf("\n����11==================================\n");
		
	/*int num;
	
	do
	{
		scanf("%d", &num);
		
		if(num > 0) {
			if(num %2 ==1)
				printf("Ȧ��\n");
			else
				printf("¦��\n");
				
		}
			
	} while( num > 0 );
	
				printf("\n����11==================================\n"); */
				
	int sum = 0, b = 1;
	do
	{
	 	sum = sum + b;
	 	b = b + 2;
	}while(b < 50);
	printf("1���� 50������ Ȧ���� �� : %d", sum);			
}
