#include <stdio.h>
main()
{
/*	int i=30;
	while(i>10)
	{
		printf("%d ", i);
		i=i-2;
	}  */
	
/*	int i=1, n, sum=0;
	printf("���� ���� ������ �� �Է� :");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
		
	 } 
	 printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);*/
	
	/*int i = 0, sum= 0;
	
	while(1)
	{
		 i++;
		 if(i > 10) break;
		 if(i % 5==0)
		 continue;
	 } 
	 	printf("sum = %d\n" , sum);*/
/*	int i, su, cnt = 0;
	printf("���� �Է�:");
	scanf("%d", &su);
	
	i =1;
	while(i<=su)
	{
		if(su % i==0)
			cnt ++;
		i ++;
 } 	
	if(cnt ==2)
	printf("%d��(��)�Ҽ�\n", su);
	else
	printf("%d�� �Ҽ��� �ƴ�", su); */
	int i, j;
	for (i =1 ; i<=5 ; ++i)
	{
		for(j=1; j<=i; ++j)
		printf("*");
		printf("\n");
	}
		for(i=4; i>=1; --i)
	{
		for(j=1; j<=i; ++j)
			printf("*");
			printf("\n");
	}	
	
}
	 
