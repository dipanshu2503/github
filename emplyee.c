#include<stdio.h>
struct employee
{
    int phone_No,age,salary;
    char name[25];
}emp[100];

void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as phone_No, name , age , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d",&emp[i].phone_No,emp[i].name,&emp[i].age,&emp[i].salary);
    }
    printf("\nEMP_NAME\tEMP_NAME\tEMP_AGE\t\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\n",emp[i].phone_No,emp[i].name,emp[i].age,emp[i].salary);
    }
}
