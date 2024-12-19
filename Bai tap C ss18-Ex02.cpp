#include <stdio.h>
#include <string.h>
struct Student {
		char fullName[100];
		int age;
		char phone[20];
	};
int main(){
	struct Student student;
	printf("Nhap ten cua ban: ");
	fgets(student.fullName, sizeof(student.fullName), stdin);
	if (student.fullName[strlen(student.fullName) - 1] == '\n') {
        student.fullName[strlen(student.fullName) - 1] = '\0';
    }
	printf("Nhap so tuoi: ");
	scanf("%d", &student.age);
	printf("Nhap so dien thoai cua ban: ");
	scanf("%s", &student.phone);
	printf("In thong tin sinh vien: \n");
	printf("Ho va ten: %s\n", student.fullName);
	printf("Tuoi: %d\n", student.age);
	printf("So dien thoai: %s\n", student.phone);
	return 0;
}
