#include<stdio.h>
union employes
{
	char name;
	int IDname;
	float hours;
};
    int main()
{
     union employee employees[1];
     for(i=0;i<1;i++);
     printf("Enter information in  employee %d: ",i+1);
     printf("Name: ");
     scanf("%s",employees[i].name);
     printf("Id name: ");
     scanf("%f", &employees[i].IDname);
     printf("hours: ");
     scanf("%d", &employees[i].IDname);
}
	printf("Employee Information:\n");
    for (int i=0;i<1;i++)
{
	printf("Name:%s", employees[i].name);
    printf("ID name :%.2f", employees[i].IDname);
    printf("hours:%d\n", employees[i].hours);
}
    return 0;
}

