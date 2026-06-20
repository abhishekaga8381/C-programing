#include <stdio.h>

struct Patient
{
    int patientid;
    char name[50];
    int age;
};

struct Patient p[100];
int count = 0;

void addPatient()
{
    int n;

    printf("How many patients do you want to add? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter Patient ID: ");
        scanf("%d", &p[count].patientid);

        printf("Enter Patient Name: ");
        scanf("%s", p[count].name);

        printf("Enter Patient Age: ");
        scanf("%d", &p[count].age);

        count++;

        printf("Patient Added Successfully!\n");
    }
}

void viewPatients()
{
    if(count == 0)
    {
        printf("\nNo Patients Available!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("\n----------------------");
        printf("\nPatient Number : %d", i + 1);
        printf("\nPatient ID     : %d", p[i].patientid);
        printf("\nPatient Name   : %s", p[i].name);
        printf("\nPatient Age    : %d", p[i].age);
        printf("\n----------------------\n");
    }
}

void searchPatient()
{
    int id;
    int found = 0;

    printf("Enter Patient ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(id == p[i].patientid)
        {
            printf("\nPatient Found!");
            printf("\nPatient ID   : %d", p[i].patientid);
            printf("\nPatient Name : %s", p[i].name);
            printf("\nPatient Age  : %d\n", p[i].age);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Patient Not Found!\n");
    }
}

void updatePatient()
{
    int id;
    int found = 0;

    printf("Enter Patient ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(id == p[i].patientid)
        {
            printf("Enter New Patient Name: ");
            scanf("%s", p[i].name);

            printf("Enter New Patient Age: ");
            scanf("%d", &p[i].age);

            printf("Patient Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Patient Not Found!\n");
    }
}

void deletePatient()
{
    int id;
    int found = 0;

    printf("Enter Patient ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(id == p[i].patientid)
        {
            found = 1;

            for(int j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;

            printf("Patient Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("Patient Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n\n===== PATIENT MANAGEMENT SYSTEM =====");
        printf("\n1. Add Patient");
        printf("\n2. View Patients");
        printf("\n3. Search Patient");
        printf("\n4. Update Patient");
        printf("\n5. Delete Patient");
        printf("\n6. Exit");
        printf("\nEnter Your Choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                viewPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updatePatient();
                break;

            case 5:
                deletePatient();
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}