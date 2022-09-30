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
	printf("합을 구할 마지막 수 입력 :");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
		
	 } 
	 printf("1부터 %d까지의 합은 %d입니다\n", n, sum);*/
	
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
	printf("숫자 입력:");
	scanf("%d", &su);
	
	i =1;
	while(i<=su)
	{
		if(su % i==0)
			cnt ++;
		i ++;
 } 	
	if(cnt ==2)
	printf("%d은(는)소수\n", su);
	else
	printf("%d는 소수가 아님", su); */
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
	 
