#include <stdio.h>

int count=0;
struct Employee{
    int empid;
    char name[50];
    float salary;

};

struct Employee e[100];

void add_employee(){
    printf("Enter how many do you want to add =");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter employee id: ");
    scanf("%d",&e[count].empid);
    printf("Enter employee name: ");
    scanf("%s",e[count].name);
    printf("Enter employee salary: ");
    scanf("%f",&e[count].salary);
    printf("Employee %d added successfully!\n",count+1);
    count++;
    }
    
}
void view_employees(){
  if(count==0){
    printf("\n Employee Records not Found !");
  }
   else{
for(int i=0;i<count;i++){
        
        printf("\n \nEmployee Number = %d \n",i+1);
        printf("\nEmployee Id = %d",e[i].empid);
        
        printf("\nEmployee Name = %s",e[i].name);
        
        printf("\nEmployee Salary = %f",e[i].salary);
       


    }
   } 
}

void  update_employee(){
    int id;
    int flag=0;

    printf("\nEnter Your Id =");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
       if(id==e[i].empid)
       {    flag=1;
            printf("\nWhat do you want to update \n1.Name\n2.Salary\n3.Both\nEnter choice = ");
            int ch;
            scanf("%d",&ch);

            if(ch==1){
                 printf("\nEnter Updated employee name: ");
                 scanf("%s",e[i].name);
                 printf("\nUpdated Successfully !");
            }
            
            else if(ch==2){
                printf("\nEnter Updated employee salary: ");
                scanf("%f",&e[i].salary); 
                printf("\nUpdated Successfully !");
            }
            else if(ch==3){
                printf("\nEnter Updated employee name: ");
                scanf("%s",e[i].name);
                printf("\nEnter Updated employee salary: ");
                scanf("%f",&e[i].salary); 
                printf("\nUpdated Successfully !");
            }
            
            else{
                printf("Invalid Choice !");
            }
            
            
       }
       
    }
    if(flag==0){
        printf("Emp Id not found :(");
    }
    
}
void Total_Salary(){
   
    float total=0;
     for(int i=0;i<count;i++){
         float bs=0;
         float hra=0;
         float ta=0,gross=0;
         bs=e[i].salary;
         hra=0.12*bs;
         ta=0.07*bs;
         gross=bs-hra-ta;
         printf("\n \nEmployee Number = %d \n",i+1);
         printf("\nEmployee Id = %d",e[i].empid);
        
         printf("\nEmployee Name = %s",e[i].name);
        
         printf("\nEmployee Salary = %f",e[i].salary);
          printf("\nEmployee Inhand Salary = %f",gross);
        total+=bs;
       


     }
    
     printf("\n---------------------------------------------------------\n");
     printf("\nTotal Cost to be Paid by Company = %f",total);

}
void delete_employee(){
    int id;
    printf("\nEnter Your Id =");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
       if(id==e[i].empid){
            for(int j=i;j<count;j++){
                e[j].empid=e[j+1].empid;
                strcpy((e[j].name),(e[j+1].name));
                e[j].salary=e[j+1].salary;               
                
            }
            count--;
       }
    }

}



int main(){
    int ip;
    do{
        printf("\n\n\nWelcome To EMS \n1.Add\n2.View\n3.Update\n4.Total Salary\n5.Delete\n6.Exit\nEnter Your Choice ");
        scanf("%d",&ip);
        switch (ip)
        {
        case 1:
            add_employee();
            break;
        case 2:
            view_employees();
            break;
        case 3:
            update_employee();
            break; 
        case 4:
            Total_Salary();
            break;
        case 5:
            delete_employee();
            break;
        case 6:
            printf("Exiting the program. Goodbye!");
            return 0;
        default:
            printf("Invalid choice. Please try again.");
            break;
        };
    }
    while(ip!=4);
    
    return 0;
}