#include <stdio.h>
main()
{
  int n = 0;
  
  while (n < 5){  //0 1 2 3 4 
  		printf("Hi~\n");
  		n++; //++n , n=n+1, n+=1
  		
  }
  		
  		printf("n=%d\n" , n);
  		printf("\n===============================================\n");
  		
  	int i = 0;
  	
  	while (i < 10){
  		printf("#");
  		i++;
	  }
	  printf("\n===============================================\n");
	  
	  
	int num = 1;
	while (num < 6){
		printf("�ݺ�����:%d\n", num);
		num++;
		
	}
		printf("�ݺ��� ������ num=%d", num);
		
		printf("\n===============================================\n");
	
	int b = 30;
	while(b >= 10){
		printf("%d " , b);
		b=b-2;
	}
   		printf("\n===============================================\n");
   int sum = 0;
   int c=1;
   while(c <= 10){
   		sum = sum + c;
   		c++;
   }
    	printf("1���� 10������ ��:%d" , sum );
}
