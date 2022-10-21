#include <stdio.h>
main()
{
	int money;			//용돈 4020원 
	int danwi=1;		//지폐단위 1원,10원,100원	
	int won;			//지폐단위당 출력 4,0,2,0 
	int count;			//나머지 변수는 각자 필요한대로 선언
	 
	printf("*입력한 용돈의 화폐숫자 구하기*\n");
	printf("금액을 입력하세요:");
	scanf("%d", &money);
	
	while(1){
		if(money<=0)
			break;
			
		won = money % 10;
		if(won!=0){
		 	printf("%d원 %d개\n", danwi , won);
		 	count++;
	}
		money = money / 10;
		danwi *= 10;
	} 
		printf("총 %d의 종류의 화폐가 필요", count);
}
