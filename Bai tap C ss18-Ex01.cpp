#include <stdio.h>
#include <string.h>
struct Student {
		char fullName[100];
		int age;
		char phone[20];
	};
int main(){
	struct Student student;
	strcpy(student.fullName, "Vu Hong Anh");
	student.age = 20;
	strcpy(student.phone, "0976460744");
	printf("In thong tin sinh vien: \n");
	printf("%s\n", student.fullName);
	printf("%d\n", student.age);
	printf("%s\n", student.phone);
	return 0;
}
