#include <stdio.h>
main()
{
	int i = 0 , sum = 0;
	
	while (1)
{		printf("%d " , i);
		sum = sum + i;
		
	i = i+3;
	if(i>100) 
		break;
	
}
		printf("sum=%d", sum);
}
