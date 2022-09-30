#include <stdio.h>
#include <stdlib.h>
#include <time.h>
exam1(){
	int n, a;
	
	printf("4자리 입력:");
	scanf("%d" , &n);
		
		do{
		a = n % 10;
		printf("%d" , a);
		n = n/ 10;
			
	}while( n>0 );
	
} 

exam2(){
	int n, a1 = 0, a2 = 1, a3, i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &n);
	for(int i = 1; i<=10; i++ )
	{
		
		printf("%d " , a1);
		a3 = a1 + a2;
		
		a1 = a2;
		a2 = a3;
	}
	
} 

exam3(){
	int answer, cnt, guess;
	
	srand(time(NULL));
	
	//for(int i = 1; i<=5, i++)

	//answer = rand();
	//printf("%d\n" , answer);
	answer = rand()%100 + 1;
	printf("정답:%d" , answer);
	do{
		printf("1~100까지의 숫자:");
		scanf("%d", &guess);
		
		cnt++;
		
		if(guess > answer )
			printf("제시한 숫자가 더 높다.");
				
		else if(guess < answer );
			printf("제시한 숫자가 더 낮다.");
		
			
	} while(guess != answer );
	printf("축하합니다! 정답은 %d이고, 시도횟수 = %d\n", answer, cnt);
	
} 

exam4(){
	int a , b, temp, i;
	printf("***두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력:");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(i = a; i<=b; i++);
		printf("%d", i);
	
} 

exam5(){
	int i, j;
	for(i=1 ; i<=5; i++) {
	for (j=5 ; j>i; j--){
		printf("*"); 
	}
	printf("0\n");
	}
	i=j=1;
	while(i<=5){
		j=5;
		while(j>i){
		printf("*"	);
		j--;	}
		printf("0\n");
		i++;
	}
	
} 


main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		
						
		}
	}
}
