#include <stdio.h>
struct employee
{   char name[50];
    float salary;
    int age;
};
    int main ()
{
    struct employee employees[1];
    for (int i=0;i<1;i++) 
 {
    printf("Enter information for employee %d: ",i+1);
    printf("Name: ");
    scanf("%s",employees[i].name);
    printf("Salary: ");
    scanf("%f", &employees[i].salary);
    printf("Age: ");
    scanf("%d", &employees[i].age);
}
    printf("Employee Information:\n");
    for (int i=0;i<1;i++) 
{   
    printf("Name: %s\n", employees[i].name);
    printf("Salary: %.2f", employees[i].salary);
    printf("Age: %d\n", employees[i].age);
}
 return 0;
}
