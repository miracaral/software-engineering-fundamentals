#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define max 20

void build();
void insert();
void showMenu();

struct employee
{
    char name[20];
    int code;
    char job[20];
    int exp;
    int age;
};

struct employee emp[20];
int num;

void build()
{
    int i;
    printf("Max Employee Amount: %d\n",max);
    printf("Please, Text the employee amount\n");
    scanf("%d",&num);

    if(num > 20)
    {
        printf("You have already passed the max amount. MAX Employee Amount can be: %d\n",max);
        num=max;
    }
    for(i=0;i<num;i++)
    {
        printf("Text the %d. Employee's info's\n",i+1);
        printf("Name: ");
        scanf("%s",emp[i].name);
        printf("Employee ID: ");
        scanf("%d",&emp[i].code);
        printf("Job: ");
        scanf("%s",emp[i].job);
        printf("Exp: ");
        scanf("%d",&emp[i].exp);
        printf("Age: ");
        scanf("%d",&emp[i].age);
        printf("\n");
    }

    showMenu();
}

void insert()
{
    if(num < max)
    {
        printf("Name: ");
        scanf("%s",emp[num].name);
        printf("Employee ID: ");
        scanf("%d",&emp[num].code);
        printf("Job: ");
        scanf("%s",emp[num].job);
        printf("Exp: ");
        scanf("%d",&emp[num].exp);
        printf("Age: ");
        scanf("%d",&emp[num].age);
        num++;
    }
    else
    {
        printf("You have already passed max amount\n");
    }

    showMenu();
}

void searchRecord()
{
    int code,i;
    printf("Text Employee ID for getting info's\n");
    scanf("%d",&code);

    for(i=0;i<num;i++)
    {
        if(emp[i].code == code)
        {
            printf("Name : %s\n",emp[i].name);
            printf("Job : %s\n",emp[i].job);
            printf("Experience : %d\n",emp[i].exp);
            printf("Age : %d\n",emp[i].age);
            break;
        }
    }

    showMenu();
}

void showNumber()
{
    printf("Employee amount: %d\n",num);

    showMenu();
}

void deleteIndex(int i)
{
    int j;
    for(j=i;j<(num-1);j++)
    {
        strcpy(emp[j].name,emp[j+1].name);
        emp[j].code = emp[j+1].code;
        strcpy(emp[j].job,emp[j+1].job);
        emp[j].exp = emp[j+1].exp;
        emp[j].age = emp[j+1].age;
    }
    return;
}

void deleteRecord()
{
    int code,i;
    printf("To delete an employee please text Employee ID\n");
    scanf("%d",&code);

    for(i=0;i<num;i++)
    {
        if(emp[i].code == code)
        {
            deleteIndex(i);
            num--;
            printf("Deleted Correctly\n");
            break;
        }
    }

    showMenu();
}

void showMenu()
{
    int option;

    printf("\n\n-------------------------Employee Management-------------------------\n\n");

    printf("Choose an operation...\n");
    printf("1 ==> Create an Employee Board\n");
    printf("2 ==> Add a new Employee\n");
    printf("3 ==> Delete a Employee\n");
    printf("4 ==> Choose and get employee's information\n");
    printf("5 ==> Show employee number\n");
    printf("6 ==> Exit\n");
    scanf("%d",&option);

    if(option==1)
    {
        build();
    }
    else if(option==2)
    {
        insert();
    }
    else if(option==3)
    {
        deleteRecord();
    }
    else if(option==4)
    {
        searchRecord();
    }
    else if(option==5)
    {
        showNumber();
    }
    else if(option==6)
    {
        return;
    }
    else
    {
        printf("You have made a wrong decision!\n");
        showMenu();
    }
}

int main()
{
    showMenu();

    return 0;
}