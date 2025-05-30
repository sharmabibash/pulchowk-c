/*#include<stdio.h>
int main(){
    int a,b;
    printf("First num : ");
    scanf("%d",&a);
    printf("Second num : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\tb=%d",a,b);
}*/

/*#include<stdio.h>
void calculated(double NRR, double TeamA_Runs_Scored, double TeamB_Runs_Scored, double TeamA_Total_Over, double TeamB_Total_Over);
int main(){
    double TeamA_Runs_Scored, TeamA_Total_Over;
    double TeamB_Runs_Scored, TeamB_Total_Over;
    double NRR;
    printf("Enter the Total Run Scored by Team A : ");
    scanf("%lf",&TeamA_Runs_Scored);
    printf("Enter the Total Over Faced by Team A : ");
    scanf("%lf",&TeamA_Total_Over);
    printf("Enter the Total Run Scored by Team B : ");
    scanf("%lf",&TeamB_Runs_Scored);
    printf("Enter the Total Over Faced by Team A : ");
    scanf("%lf",&TeamB_Total_Over);

    calculated(NRR, TeamA_Runs_Scored, TeamB_Runs_Scored, TeamA_Total_Over, TeamB_Total_Over);
}

void calculated(double NRR, double TeamA_Runs_Scored, double TeamB_Runs_Scored, double TeamA_Total_Over, double TeamB_Total_Over){
    double r1= TeamA_Runs_Scored/TeamA_Total_Over;
    double r2= TeamB_Runs_Scored/TeamB_Total_Over;
     NRR= r1-r2;
    if(r1>r2){
        printf("+NRR : %lf by Team A",NRR);
    }else{
        printf("-NRR : %lf by Team B",NRR);
    }  
}*/

#include<stdio.h>

// Function to calculate sum and average using pointers
void sumAndavg(int *m, int *n, int *sum, float *avg) {
    *sum = 0;
    int count = 0;
    
    for (int i = *m; i <= *n; i++) {
        *sum += i;
        count++;
    }
    
    *avg = (float)(*sum) / count;  // Calculate average
}

int main() {
    int m, n, sum;
    float avg;

    // Taking input for M and N
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    // Function call (corrected)
    sumAndavg(&m, &n, &sum, &avg);

    // Displaying results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
