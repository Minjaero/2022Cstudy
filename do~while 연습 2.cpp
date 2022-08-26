#include <stdio.h>
main()
{
/*	int n , sum=0;
	printf("숫자 입력");
	do{
		scanf("%d" , &n);
		sum = sum + n;
	} while(n!=0);
	printf("합:%d", sum);
	
		printf("\n예제11==================================\n");
		
		int i , num;
	
		i = 1;
			printf("약수를 구할 수 입력:");
			scanf("%d", &num);
			
		while(i<=8){
		if(num%i==0) 
			printf("%d ", i);
			i++;
		   } */
		   
	int i, su, cnt =0;   
	i=1;
	
			printf("숫자 입력:");
			scanf("%d" , &su);
		
	while(i <=su ){
		if(su %i==0)
			cnt++;
		i++;
}
		if(cnt==2)
			printf("%d는 소수\n", su);
		else
			printf("소수가 아님",su);	
		
	
		
	
		
		
	
}
