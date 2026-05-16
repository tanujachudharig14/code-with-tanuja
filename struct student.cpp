#include <stdio.h>

struct Student
{
	int rollnumber;
	char name[50];
	float marks;
};

int main()
{
	int i, n;
	printf("enter the number of students: ");
	scanf("%d", &n);
	struct Student students[n];
	
	for (i = 0; i < n; i++)
	{
		printf("\nEnter details for students %d\n", i + 1);
		printf("Roll number: ");
		scanf("%d", &students[i].rollnumber);
		printf("Name: ");
		scanf(" %[^\n]", students[i].name);
		printf("Marks: ");
		scanf("%f", &students[i].marks);
	}
	
	printf("\nStudent details\n");
	for (i = 0; i < n; i++)
	{
		printf("\nStudents %d\n", i + 1);
		printf("Roll number: %d\n", students[i].rollnumber);
		printf("Name   : %s\n", students[i].name);
                    printf("marks   : %.2f\n", students[i].marks);
	         
}
  return 0;
}
