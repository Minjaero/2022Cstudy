#include <stdio.h>
main()
{
	int money;			//�뵷 4020�� 
	int danwi=1;		//������� 1��,10��,100��	
	int won;			//��������� ��� 4,0,2,0 
	int count;			//������ ������ ���� �ʿ��Ѵ�� ����
	 
	printf("*�Է��� �뵷�� ȭ����� ���ϱ�*\n");
	printf("�ݾ��� �Է��ϼ���:");
	scanf("%d", &money);
	
	while(1){
		if(money<=0)
			break;
			
		won = money % 10;
		if(won!=0){
		 	printf("%d�� %d��\n", danwi , won);
		 	count++;
	}
		money = money / 10;
		danwi *= 10;
	} 
		printf("�� %d�� ������ ȭ�� �ʿ�", count);
}
