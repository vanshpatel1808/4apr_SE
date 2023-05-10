#include <stdio.h>
struct Employee 
{
    int number;
    char name[100];
    char address[100];
    int age;
};

int main() 
{
    struct Employee employees[5];

    for(int i = 0; i < 5; i++) 
	{
        printf("Enter the details for employee %d:\n", i+1);

        printf("Employee number: ");
        scanf("%d", &employees[i].number);

        printf("Employee name: ");
        scanf(" %[^\n]s", employees[i].name);

        printf("Employee address: ");
        scanf(" %[^\n]s", employees[i].address);

        printf("Employee age: ");
        scanf("%d", &employees[i].age);
    }
    printf("\nEmployee Details:\n");
    for(int i = 0; i < 5; i++) 
	{
        printf("Employee %d:\n", i+1);
        printf("Number: %d\n", employees[i].number);
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }

}
