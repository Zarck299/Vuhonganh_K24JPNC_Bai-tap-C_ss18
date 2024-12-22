#include <stdio.h>
#include <string.h>

int main(){
	int checkid;
	char fixname[50];
	int fixage;
	
	struct Student{
		int id;
		char name[50];
		int age;
	};
	struct Student student[50]={
		{0," ",},
		{1,"Bui Van Anh",18},
		{2,"Vu Hong Anh",18},
		{3,"Nguyen Thanh Cong",18},
		{4,"Dinh Ngoc Diep",18},
		{5,"Tran Quang Phuc",18},
	};
	for(int i = 1 ; i < 6 ; i++){
		printf("%d. %s - %d tuoi\n", student[i].id, student[i].name, student[i].age);
	}
	for(int i = 1 ; i < 6 ; i++){
		if(i == 5){
			student[i].id = 6;
			printf("Moi ban nhap ho ten sinh vien moi : ");
			fflush(stdin);
			fgets(student[i].name,sizeof(student[i].name),stdin);
			printf("Moi ban nhap tuoi : ");
			scanf("%d", &student[i].age);
		}
	}
	for(int i = 1 ; i < 6 ; i++){
		printf("%d. %s - %d tuoi\n", student[i].id, student[i].name, student[i].age);
	}
	return 0;
}
