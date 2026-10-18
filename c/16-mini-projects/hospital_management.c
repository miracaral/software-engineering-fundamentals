#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Hospital
{
    char name[50];
    char city[50];
    int beds;
    float price;
    float rating;
    int reviews;
};

struct Patient
{
    char name[50];
    int age;
};

void printHospital(struct Hospital hospital)
{
    printf("Hospital: %s\n",hospital.name);
    printf("City: %s\n",hospital.city);
    printf("Bed Capacity: %d\n",hospital.beds);
    printf("Daily Price: %.2f\n",hospital.price);
    printf("Rating: %.2f\n",hospital.rating);
    printf("Review Note: %d\n\n",hospital.reviews);
}
void printPatient(struct Patient patient)
{
    printf("Patient name: %s\n",patient.name);
    printf("Patient age: %d\n\n",patient.age);
    
}
void sortByPrice(struct Hospital hospitals[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(hospitals[j].price > hospitals[j+1].price)
            {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp;
            }
        }
    }
}
void sortByBeds(struct Hospital hospitals[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(hospitals[j].beds < hospitals[j+1].beds)
            {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp;
            }
        }
    }
}
void sortByName(struct Hospital hospitals[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(hospitals[j].name,hospitals[j+1].name) > 0)
            {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp;
            }
        }
    }
}
void sortByRating(struct Hospital hospitals[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(hospitals[j].rating < hospitals[j+1].rating)
            {
                struct Hospital temp = hospitals[j+1];
                hospitals[j+1] = hospitals[j];
                hospitals[j] = temp;
            }
        }
    }
}
void printHospitalInCity(struct Hospital hospitals[])
{
    char city[50];
    int i;
    printf("Please text a City name. {Ankara,Istanbul,Izmir}\n");
    scanf("%s",city);

    printf("Hospitals in %s City:\n",city);

    for(i=0;i<5;i++)
    {
        if(strcasecmp(hospitals[i].city,city) == 0)
        {
            printf("Hospital: %s\n",hospitals[i].name);
            printf("City: %s\n",hospitals[i].city);
            printf("Bed Capacity: %d\n",hospitals[i].beds);
            printf("Daily Price: %.2f\n",hospitals[i].price);
            printf("Rating: %.2f\n",hospitals[i].rating);
            printf("Review Note: %d\n\n",hospitals[i].reviews);
        }
    }
}
int main()
{
    int choice,n=5,i,j;
    struct Hospital hospitals[5] = { {"Can","Istanbul",100,250.0,4.5,100},
            {"Balkan","Ankara",150,200.0,4.2,80},
            {"Balbadem","Istanbul",200,180.0,4.0,120},
            {"Edikol","Izmir",80,300.0,4.8,90},
            {"Mekol","Ankara",120,220.0,4.6,110} };

    struct Patient patients[5][3] = {{{"Osman",35},{"Hakan",45},{"Elif",28}},
                                    {{"Can",62},{"Kerem",18},{"Mazlum",55}},
                                    {{"Zafer",50},{"Melis",30},{"Fulya",40}},
                                    {{"Mert",22},{"Asli",38},{"Beyza",60}},
                                    {{"Ada",28},{"Celil",48},{"Ozan",33}}};
    
    do
    {
        printf("\n\n\n*************** Hospital Management System ***************\n\n\n");
        printf("1 ==> Hospital Informations\n");
        printf("2 ==> Patient Informations\n");
        printf("3 ==> Arrange hospitals according to 'Daily Fees(Euro)'\n");
        printf("4 ==> Arrange hospitals according to Bed Amounts (Highest to lowest)\n");
        printf("5 ==> Arrange hospitals according to their name\n");
        printf("6 ==> Arrange hospitals according to their ratings\n");
        printf("7 ==> Show the hospitals which city you choose\n");
        printf("8 ==> Exit\n");

        printf("Make your choice.\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                for(i=0;i<n;i++)
                {
                    printf("%d. Hospital\n",i+1);
                    printHospital(hospitals[i]);
                }

                break;

            case 2:
                for(i=0;i<n;i++)
                {
                    printf("%s Hospital\n",hospitals[i].name);
                    for(j=0;j<3;j++)
                    {
                        printf("%d. Patient\n",j+1);
                        printPatient(patients[i][j]);
                    }
                }
                break;

            case 3:
                sortByPrice(hospitals,n);
                for(i=0;i<n;i++)
                {
                    printf("%d. Hospital\n",i+1);
                    printHospital(hospitals[i]);
                }
                
                break;

            case 4:
                sortByBeds(hospitals,n);
                for(i=0;i<n;i++)
                {
                    printf("%d. Hospital\n",i+1);
                    printHospital(hospitals[i]);
                }
                break;

            case 5:
                sortByName(hospitals,n);
                for(i=0;i<n;i++)
                {
                    printf("%d. Hospital\n",i+1);
                    printHospital(hospitals[i]);
                }
                break;
            case 6:
                sortByRating(hospitals,n);
                for(i=0;i<n;i++)
                {
                    printf("%d. Hospital\n",i+1);
                    printHospital(hospitals[i]);
                }
                break;
            case 7:
                printHospitalInCity(hospitals);
                
                break;
            case 8: 
                printf("Program has already finished!");
                break;
            
            
        }
    }while(choice != 8);
    
    
    
    
    return 0;
}