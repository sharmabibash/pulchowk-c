#include<stdio.h>

struct employee {
    int id;
    char emp_name[20];
    float salary;
};

struct company {
    char name[30];
    char location[20];
    struct employee e[3];
};

int main() {
    struct company c[2];
    int i, j;
    
    for(i=0; i<1; i++) {
        printf("Enter the name of company: ");
        scanf("%s", c[i].name);
        printf("Enter the location: ");
        scanf("%s", c[i].location);
        for(j=0; j<1; j++) { // Change this to 3
            printf("Name of employee: ");
            scanf("%s", c[i].e[j].emp_name);
            printf("Enter ID: ");
            scanf("%d", &c[i].e[j].id);
            printf("Enter salary: ");
            scanf("%f", &c[i].e[j].salary); // Change %d to %f
        }
    }
    
    printf("............\n");
    
    for(i=0; i<1; i++) {
        printf("Company name=%s\nLocation=%s\n", c[i].name, c[i].location);
        printf("Details of employee whose salary is > 50000\n");
        for(j=0; j<1; j++) { // Change this to 3
            if(c[i].e[j].salary > 50000) {
                printf("Employee name=%s\nID=%d\nSalary=%f\n",
                       c[i].e[j].emp_name, c[i].e[j].id, c[i].e[j].salary);
            }
        }
    }
    
    return 0;
}
