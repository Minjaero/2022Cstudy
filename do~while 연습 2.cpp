#include <stdio.h>
main()
{
/*	int n , sum=0;
	printf("���� �Է�");
	do{
		scanf("%d" , &n);
		sum = sum + n;
	} while(n!=0);
	printf("��:%d", sum);
	
		printf("\n����11==================================\n");
		
		int i , num;
	
		i = 1;
			printf("����� ���� �� �Է�:");
			scanf("%d", &num);
			
		while(i<=8){
		if(num%i==0) 
			printf("%d ", i);
			i++;
		   } */
		   
	int i, su, cnt =0;   
	i=1;
	
			printf("���� �Է�:");
			scanf("%d" , &su);
		
	while(i <=su ){
		if(su %i==0)
			cnt++;
		i++;
}
		if(cnt==2)
			printf("%d�� �Ҽ�\n", su);
		else
			printf("�Ҽ��� �ƴ�",su);	
		
	
		
	
		
		
	
}
