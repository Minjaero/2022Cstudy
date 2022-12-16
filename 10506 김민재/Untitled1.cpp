#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define STD_FILE "C:\\Users\\user\\Desktop\\test1.txt"

noStruct(){
	int id1 , id2;
	char name1[10] , name2[10];
	int score1, score2;
	
	id1 =10504;
	id2 =10504;
	
	strcpy(name1, "�����");
	strcpy(name2, "�������");
	strcat(name1,"��");
	strcat(name2,"��");	
	
	score1 = 98;
	score2 = 100; 
	
	printf("%d %s %d\n" , id1 , name1, score1);
	printf("%d %s %d\n" , id2, name2, score2); 
}
useStruct(){
	struct student{
		int id;
		char name[10];
		int score;	
	};
	
	struct student s1 = {7, "�����" , 95};
	struct student s2 = {8, "������" , 100};
	
	s1.id += 16000;
	
	printf("%d %s %d\n" , s1.id, s1.name, s1.score); 
	printf("%d %s %d\n" , s2.id, s2.name, s2.score);
}
useStructArray(){
	struct student{
		int id;
		char name[10];
		int score;	
	} robot[100];
	
	int i;
	char temp[5]="";
	srand(time(NULL));
	FILE *fp = fopen( STD_FILE , "w");
	
	for(i=0; i<100; i++){
		robot[i].id = 10301 + i;
		strcpy(robot[i].name , "test");
		itoa(i, temp, 10);
		strcat(robot[i].name , temp);
		robot[i].score = rand()%100+1;		
		printf("%d %s %d\n" , robot[i].id, robot[i].name, robot[i].score);
		fprintf(fp, "%d %s %d\n" , robot[i].id, robot[i].name, robot[i].score);
	}
	fclose(fp);

}
fileTest(){
	//���� ����
	FILE *fp = fopen("C:\\Users\\user\\Desktop\\test1.txt", "w"); //write
	fprintf(fp, "%s %d" , "�����", 100);
	fclose(fp); 
	//���� �б� 
	fp = fopen("C:\\Users\\user\\Desktop\\test1.txt", "r");
	char name[10]  ;
	int score;
	fscanf(fp, "%s %d" , name, &score);
	fclose(fp);
	
	printf("%s %d\n" , name, score);
}
readFile(){
	struct student{
		int id;
		char name[10];
		int score;	
	}robot; 
	FILE *fp = fopen(STD_FILE , "r");
	while( !feof(fp)) {//end of file
		fscanf(fp,  "%d %s %d" , &robot.id , &robot.name, &robot.score);
		printf("[%s] %5d %5d\n", robot.name , robot.id , robot.score);
	}
	
	fclose(fp);
}

main()
{
 //	noStruct();//����ü�� ������ 
 //	useStruct(); //����ü Ȱ���ϴ� ���
 	useStructArray(); //����ü �迭 Ȱ�� 
 	
//fileTest();
  readFile();		  
}
