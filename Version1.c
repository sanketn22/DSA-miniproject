#include <stdio.h> ///for input output functions like printf, scanf
#include <stdlib.h>
#include <string.h>  ///string operations
#include <conio.h>

 typedef struct emp{
	struct emp *next;
	struct emp *prev;
	int empid; // employee id
	char did[4]; // dep id
	char first_name[15]; ///first name of employee
	char last_name[20]; // last name of employee
	int age; /// age of employee
	float basic_salary; // basic salary of employee
    }emp;

    emp *head, *tail;


	/** structure that represent a department*/
    typedef struct dep{
	emp *e;
	int depid; // dep id
	char dname[20]; ///dep name
    }dep;

emp* add(emp* head);
void printList(emp *head);
emp *delete (emp* head);

/** Main function started */

int main(){

    int choice;

    emp *hr1; 
    emp *it1; 
    emp *fin1;
    emp *sales1;

    dep *HR = (dep*)malloc(sizeof(dep));
    dep *IT= (dep*)malloc(sizeof(dep));
    dep *Finance = (dep*)malloc(sizeof(dep));
    dep *Sales = (dep*)malloc(sizeof(dep));

    strcpy(HR->dname, "Human Resources");
    strcpy(IT->dname, "IT"); 
    strcpy(Finance->dname, "Finance");
    strcpy(Sales->dname, "Sales");

    HR->depid = 1001;
    IT->depid = 1002;
    Finance->depid = 1003;
    Sales->depid = 1004;

    while(1){
        main_menu:
        system("cls"); ///clear the console window
        printf("**************** Employee Management System *************\n");
        printf("*                                                       *\n");
        printf("*   PLEASE SELECT THE DEPARTMENT FOR FURTHER OPTIONS    *\n");
        printf("*                                                       *\n");
        printf("* 1. HR                                                 *\n");
        printf("*                                                       *\n");
        printf("* 2. IT                                                 *\n");
        printf("*                                                       *\n");
        printf("* 3. Finance                                            *\n");
        printf("*                                                       *\n");
        printf("* 4. Sales                                              *\n");
        printf("*                                                       *\n");
        printf("* 5. Exit                                               *\n");
        printf("*                                                       *\n");
        printf("*******************************************************\n\n");
        printf("Your Choice: ");
        fflush(stdin); /// flush the input buffer
        scanf("%d",&choice); /// get the input from keyboard
        switch(choice){
        case 1:  /// if user press 1
            while(1){
            HR_dep:
            system("cls");
            printf("****************        HR DEPARTMENT       *************\n");
            printf("*                                                       *\n");
            printf("*               PLEASE SELECT AN OPTION                *\n");
            printf("*                                                       *\n");
            printf("* 1. ADD                                                *\n");
            printf("*                                                       *\n");
            printf("* 2. DELETE                                             *\n");
            printf("*                                                       *\n");
            printf("* 3. VIEW                                               *\n");
            printf("*                                                       *\n");
            printf("* 4. MODIFY                                             *\n");
            printf("*                                                       *\n");
            printf("* 5. MAIN MENU                                          *\n");
            printf("*                                                       *\n");
            printf("*******************************************************\n\n");

            fflush(stdin); /// flush the input buffer
            scanf("%d",&choice); /// get the input from keyboard
            switch(choice){
                case 1:  /// if user press 1
                system("cls");
                hr1 = add(hr1);
                HR->e = hr1;                                   
                break;

                case 2:
                system("cls");
                delete(hr1);
                
                break;

                case 3:  /// if user press 3 then do editing existing record
                system("cls");
                printList(hr1);    
                break;

                case 4:
                printf("Enter the employee ID you wish to modify\n");
                int id; 
                emp *temp = hr1; 
                scanf("%d",&id);
                while(temp->empid!= id){
                    temp = temp->next;
                }

                while(1){
                        printf("Select option to modify\n");
                        printf("1. Name \n");
                        printf("2. Employee ID\n");
                        printf("3. Age\n");
                        printf("4. Basic Salary\n");
                        printf("5. Go back\n");
                        printf("Enter your choice\n");
                        fflush(stdin);
                        int k; 
                        scanf("%d",&k);

                        switch(k){
                        case 1:
                            printf("Enter the new First name\n");
                            char fname[50], lname[50]; 
                            fflush(stdin);
                            fgets(fname, 50, stdin);
                            printf("Enter the new Last name\n");
                            fflush(stdin);
                            fgets(lname, 50, stdin);

                            strcpy(temp->first_name, fname);
                            strcpy(temp->last_name, lname);
                        break;

                        case 2:
                            printf("enter the new employee ID\n");
                            int id1;
                            fflush(stdin);
                            scanf("%d",&id1);
                            temp->empid = id1;
                        break;

                        case 3:
                            printf("enter the new age\n");
                            fflush(stdin);
                            scanf("%d",&temp->age);
                        break;

                        case 4:
                            printf("enter the new basic salary\n");
                            fflush(stdin);
                            scanf("%d",&temp->basic_salary);
                        break;

                        case 5:
                            goto HR_dep;
                        break;            
                    }
                }
                break; 
                case 5:
                    goto main_menu;
                break;
            }
            }
        break;
            
        case 2:
            while(1){
            ITdep:
            system("cls");
            printf("****************        IT DEPARTMENT       *************\n");
            printf("*                                                       *\n");
            printf("*               PLEASE SELECT AN OPTION                *\n");
            printf("*                                                       *\n");
            printf("* 1. ADD                                                *\n");
            printf("*                                                       *\n");
            printf("* 2. DELETE                                             *\n");
            printf("*                                                       *\n");
            printf("* 3. VIEW                                               *\n");
            printf("*                                                       *\n");
            printf("* 4. MODIFY                                             *\n");
            printf("*                                                       *\n");
            printf("* 5. MAIN MENU                                          *\n");
            printf("*                                                       *\n");
            printf("*******************************************************\n\n");

            fflush(stdin); /// flush the input buffer
            scanf("%d",&choice); /// get the input from keyboard
            switch(choice){
                case 1:  /// if user press 1
                system("cls");
                it1 = add(it1);
                IT->e = it1;                                   
                break;

                case 2:
                system("cls");
                delete(it1);
                
                break;

                case 3:  /// if user press 3 then do editing existing record
                    system("cls");
                    printList(it1);    
                break;

                case 4:
                    printf("Enter the employee ID you wish to modify\n");
                    int id; 
                    emp *temp = it1; 
                    scanf("%d",&id);
                    while(temp->empid!= id){
                        temp = temp->next;
                    }

                    while(1){
                    printf("Select option to modify\n");
                    printf("1. Name \n");
                    printf("2. Employee ID\n");
                    printf("3. Age\n");
                    printf("4. Basic Salary\n");
                    printf("5. Go back\n");
                    printf("Enter your choice\n");
                    fflush(stdin);
                    int k; 
                    scanf("%d",&k);

                    switch(k){
                        case 1:
                            printf("Enter the new First name\n");
                            char fname[50], lname[50]; 
                            fflush(stdin);
                            fgets(fname, 50, stdin);
                            printf("Enter the new Last name\n");
                            fflush(stdin);
                            fgets(lname, 50, stdin);
                            strcpy(temp->first_name, fname);
                            strcpy(temp->last_name, lname);
                        break;

                        case 2:
                            printf("enter the new employee ID\n");
                            int id1;
                            fflush(stdin);
                            scanf("%d",&id1);
                            temp->empid = id1;
                        break;
                        case 3:
                            printf("enter the new age\n");
                            fflush(stdin);
                            scanf("%d",&temp->age);
                        break;
                        case 4:
                            printf("enter the new basic salary\n");
                            fflush(stdin);
                            scanf("%d",&temp->basic_salary);
                        break;
                        case 5:
                            goto ITdep;
                        break;
                    }
                    }
                break;            
            
                case 5:
                    goto main_menu;
                break;
                }
            }			
        break;

        case 3:  /// if user press 3 then do editing existing record
            while(1){
            findep:
            system("cls");
            printf("****************    FINANCE DEPARTMENT      *************\n");
            printf("*                                                       *\n");
            printf("*               PLEASE SELECT AN OPTIONS                *\n");
            printf("*                                                       *\n");
            printf("* 1. ADD                                                *\n");
            printf("*                                                       *\n");
            printf("* 2. DELETE                                             *\n");
            printf("*                                                       *\n");
            printf("* 3. VIEW                                               *\n");
            printf("*                                                       *\n");
            printf("* 4. MODIFY                                             *\n");
            printf("*                                                       *\n");
            printf("* 5. MAIN MENU                                          *\n");
            printf("*                                                       *\n");
            printf("*******************************************************\n\n");

            fflush(stdin); /// flush the input buffer
            scanf("%d",&choice); /// get the input from keyboard
            switch(choice){
                case 1:  /// if user press 1
                system("cls");
                fin1 = add(fin1);
                Finance->e = fin1;                                   
                break;

                case 2:
                system("cls");
                delete(fin1);			
                break;

                case 3:  /// if user press 3 then do editing existing record
                system("cls");
                printList(fin1);    
                break;

                case 4:
                    printf("Enter the employee ID you wish to modify\n");
                    int id; 
                    emp *temp = fin1; 
                    scanf("%d",&id);
                    while(temp->empid!= id){
                        temp = temp->next;
                    }

                    while(1){
                    printf("Select an option\n");
                    printf("1. Name \n");
                    printf("2. Employee ID\n");
                    printf("3. Age\n");
                    printf("4. Basic Salary\n");
                    printf("5. Go back\n");
                    printf("Enter your choice\n");
                    fflush(stdin);
                    int k; 
                    scanf("%d",&k);

                    switch(k){
                        case 1:
                            printf("Enter the new First name\n");
                            char fname[50], lname[50]; 
                            fflush(stdin);
                            fgets(fname, 50, stdin);
                            printf("Enter the new Last name\n");
                            fflush(stdin);
                            fgets(lname, 50, stdin);

                            strcpy(temp->first_name, fname);
                            strcpy(temp->last_name, lname);
                        break;

                        case 2:
                            printf("enter the new employee ID\n");
                            fflush(stdin);
                            scanf("%d",temp->empid);
                        break;
                        case 3:
                            printf("enter the new age\n");
                            fflush(stdin);
                            scanf("%d",&temp->age);
                        break;
                        case 4:
                            printf("enter the new basic salary\n");
                            fflush(stdin);
                            scanf("%d",&temp->basic_salary);
                        break;
                        case 5:
                            goto findep;
                        break;
                        
                    }
                }
            }    
        }
        break;

        case 4:
            while(1){
            Salesdep:
            system("cls");
            printf("****************     SALES DEPARTMENT       *************\n");
            printf("*                                                       *\n");
            printf("*               PLEASE SELECT AN OPTIONS                *\n");
            printf("*                                                       *\n");
            printf("* 1. ADD                                                *\n");
            printf("*                                                       *\n");
            printf("* 2. DELETE                                             *\n");
            printf("*                                                       *\n");
            printf("* 3. VIEW                                               *\n");
            printf("*                                                       *\n");
            printf("* 4. MODIFY                                             *\n");
            printf("*                                                       *\n");
            printf("* 5. MAIN MENU                                          *\n");
            printf("*                                                       *\n");
            printf("*******************************************************\n\n");
            fflush(stdin); /// flush the input buffer
            scanf("%d",&choice); /// get the input from keyboard
            switch(choice){
                case 1:  /// if user press 1
                    system("cls");
                    fin1 = add(sales1);
                    Sales->e = sales1;                                   
                break;

                case 2:
                    system("cls");
                    delete(sales1);			
                break;

                case 3:  /// if user press 3 then do editing existing record
                    system("cls");
                    printList(sales1);    
                break;

                case 4:
                    printf("Enter the employee ID you wish to modify\n");
                    int id; 
                    emp *temp = sales1; 
                    scanf("%d",&id);
                    while(temp->empid!= id){
                        temp = temp->next;
                    }

                    while(1){
                    printf("Select option to modify\n");
                    printf("1. Name \n");
                    printf("2. Employee ID\n");
                    printf("3. Age\n");
                    printf("4. Basic Salary\n");
                    printf("5. Go back\n");
                    printf("Enter your choice\n");
                    fflush(stdin);
                    int k; 
                    scanf("%d",&k);

                        switch(k){
                        case 1:
                            printf("Enter the new First name\n");
                            char fname[50], lname[50]; 
                            fflush(stdin);
                            fgets(fname, 50, stdin);
                            printf("Enter the new Last name\n");
                            fflush(stdin);
                            fgets(lname, 50, stdin);

                            strcpy(temp->first_name, fname);
                            strcpy(temp->last_name, lname);
                        break;

                        case 2:
                            printf("enter the new employee ID\n");
                            fflush(stdin);
                            scanf("%d",temp->empid);
                        break;
                        case 3:
                            printf("enter the new age\n");
                            fflush(stdin);
                            scanf("%d",&temp->age);
                        break;
                        case 4:
                            printf("enter the new basic salary\n");
                            fflush(stdin);
                            scanf("%d",&temp->basic_salary);
                        break;
                        case 5:
                            goto Salesdep;
                        break;
                        
                    }
                    }
                break;

                case 5:
                    goto main_menu;
                break;
            }

        }
        break;

        case 5:
            return 0;
        break;

    }
    }
return 0;
}

emp* add(emp* head){
    system("cls");
    emp *ptr = (emp*)(malloc(sizeof(emp)));

     if(head == NULL)
    {    
        ptr->next = NULL;
        ptr->prev = NULL;
        printf("Enter the employee's First name\n");
        scanf("%s",&ptr->first_name);
        printf("Enter the employee's Last name\n");
        scanf("%s",&ptr->last_name);
        printf("Enter the employee ID\n");
        scanf("%d",&ptr->empid);
        printf("Enter the employee's Department ID\n");
	    scanf("%s",&ptr->did);
        printf("Enter the employee's Age\n");
	    scanf("%d",&ptr->age);
        printf("Enter the employee's Basic Salary\n");
	    scanf("%f",&ptr->basic_salary);
        head = ptr;       
        tail = ptr; 
    }
    else 
    {
        printf("Enter the employee's First name\n");
        scanf("%s",&ptr->first_name);
        printf("Enter the employee's Last name\n");
        scanf("%s",&ptr->last_name);
        printf("Enter the employee ID\n");
        scanf("%s",&ptr->empid);
        printf("Enter the employee's Department ID\n");
	    scanf("%s",&ptr->did);
        printf("Enter the employee's Age\n");
	    scanf("%d",&ptr->age);
        printf("Enter the employee's Basic Salary\n");
	    scanf("%f",&ptr->basic_salary);
        ptr->prev = tail;
        ptr->next = NULL; 
        tail->next = ptr; 
        tail = ptr; 
    }
    return head;
}

emp *delete (emp* head){
    printf("\nEnter the full name of the employee you want to remove\n");
    char name[50];
    gets(name);

    emp *ptr = head;
    emp *temp = NULL; 

    if(head==NULL)
        printf("No employees in the list\n");


    while(ptr->next!= NULL)
    {
        int a = strcmp(strcat(strcat(ptr->last_name," "), ptr->first_name), name);
   
        if (a==0) 
        {
            printf("Employee details found\n");
            break;
        }

        ptr = ptr->next;         
    }

    if(ptr->next == NULL)
    {   
        printf("%s \n",strcat(ptr->last_name,ptr->first_name));
        temp = ptr->prev; 
        temp->next = NULL; 
        tail = temp; 
        free(ptr);        
    }
    else if (ptr->next != NULL)
    {
        printf("If ptr lies in the middle\n");
        printf("%s \n",strcat(ptr->last_name,ptr->first_name));
        temp = ptr->prev; 
        temp->next = ptr->next;
        ptr->next->prev = temp;
        free(ptr);
    }
    return head; 
}

void printList(emp *head){ 
    emp *temp= NULL; 
    temp = head; 
    printf("Dept_id   Emp_id     First name      Last Name     Age     Basic Salary");
    printf("------------------------------------------------------------------------");
    
    while(temp!=NULL)
    {
        printf("\n%s    %s     %s     %s    %d     %f", temp->did, temp->empid, temp->first_name, temp->last_name, temp->age, temp->basic_salary);
        temp = temp->next;
    }
}

