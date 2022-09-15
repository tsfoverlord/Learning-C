#include <stdio.h>
struct employee{
    char firstName[20];
    char lastName[20];
    int empid;
    int empssn;
    char title[20];
};

struct employees {
    struct employee employee1, employee2;
};
void input(struct employee *emp);
void printEmployee(struct employee *emp);
int main(){
    struct employees org;
    input(&(org.employee1));
    input(&(org.employee2));

    printEmployee(&(org.employee1));
    printEmployee(&(org.employee2));

    return 0;
}
void input(struct employee *emp){
    printf("\nEnter employee's first name: ");
    scanf("%s",emp->firstName);
    printf("Enter employee's last name: ");
    scanf("%s",emp->lastName);
    printf("Enter employee's title: ");
    scanf("%s",emp->title);
    printf("Enter employee's ID: ");
    scanf("%d",&(emp->empid));
    printf("Enter last 4 digits of employee's SSN: ");
    scanf("%d",&(emp->empssn));
}

void printEmployee(struct employee *emp){
    printf("\nDetail for employee %s %s %s",emp->title,emp->firstName,emp->lastName);
    printf("\nID: %d",emp->empid);
    printf("\nSSN: %d",emp->empssn);
}