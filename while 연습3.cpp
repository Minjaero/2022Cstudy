#include <stdio.h>
main()
{
	int i=1 , dan;
	while(1){
		i = 1;
		printf("몇단?[0:종료]");
		scanf("%d" , &dan);
		if(dan==0){
		printf("Bye~");
		break;}
		
		printf("\n*** %단 ***\n", dan);
	
	while(i <= 9) {
		printf("%d * %d = %d\n", dan ,i, dan*i);
		i++;
}
	} 
}
