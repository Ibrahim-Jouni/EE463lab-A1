#include <stdio.h>
#define MAX_STUDENTS 10 
#define MAX_NAME_LENGTH 50

struct Student {
char name[MAX_NAME_LENGTH];
int grade;

};

int main (){ 
struct Student students[MAX_STUDENTS];


for (int i= 0; i < MAX_STUDENTS; i++) { 

printf("Enter name and grade %d: ", i+ 1);
scanf("%s %d" , students[i].name, &students[i].grade);
}


printf("\nStudent Grades: \n");
for (int i=0;i < MAX_STUDENTS; i++) { 

printf("Student %d: Name = %s, Grade = %d\n",i+1, students[i].name, students[i].grade);
}
return 0; 


}
