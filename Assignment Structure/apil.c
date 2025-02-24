#include<stdio.h>
struct student {
    int roll;
    char name[50];
    float marks[10];
}s[10];
int main(){
    int i,j;
    for(i=0;i<2;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter roll: ");
        scanf("%d",&s[i].roll);
        for(j=0;j<5;j++){
            printf("Enter marks in subject %d: ",j+1);
            scanf("%f",&s[i].marks[j]);
        }
    } 
    printf("\n");
    for(i=0;i<2;i++){
        float avg=0;
        for(j=0;j<5;j++){
            avg+=s[i].marks[j];
        }
        avg/=5;
        if(avg>80){
            printf("\nName: %s\tRoll: %d\tAverage marks: %.2f\n",s[i].name,s[i].roll,avg);
        }

}
}
