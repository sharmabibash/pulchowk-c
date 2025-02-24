/*#include <stdio.h>

struct TIME {
    int hour;
    int minutes;
    int seconds;
};

void difference(struct TIME start, struct TIME stop, struct TIME *diff);
void sum(struct TIME start, struct TIME stop, struct TIME *add);

int main() {
    struct TIME startTime, stopTime, diffTime, sumTime;

    printf("Enter start time (HH MM SS): ");
    scanf("%d %d %d", &startTime.hour, &startTime.minutes, &startTime.seconds);
    
    printf("Enter stop time (HH MM SS): ");
    scanf("%d %d %d", &stopTime.hour, &stopTime.minutes, &stopTime.seconds);

    difference(startTime, stopTime, &diffTime);
    sum(startTime, stopTime, &sumTime);
    
    printf("Time Difference: %02d:%02d:%02d\n", diffTime.hour, diffTime.minutes, diffTime.seconds);
    printf("Time Sum: %02d:%02d:%02d\n", sumTime.hour, sumTime.minutes, sumTime.seconds);
    
    return 0;
}

void difference(struct TIME start, struct TIME stop, struct TIME *diff) {
    if (stop.seconds < start.seconds) {
        stop.minutes--;
        stop.seconds += 60;
    }
    diff->seconds = stop.seconds - start.seconds;

    if (stop.minutes < start.minutes) {
        stop.hour--;
        stop.minutes += 60;
    }
    diff->minutes = stop.minutes - start.minutes;

    diff->hour = stop.hour - start.hour;

    if (diff->hour < 0) {
        diff->hour += 24;
    }
}

void sum(struct TIME start, struct TIME stop, struct TIME *add) {
    add->seconds = start.seconds + stop.seconds;
    add->minutes = start.minutes + stop.minutes;
    add->hour = start.hour + stop.hour;

    if (add->seconds >= 60) {
        add->seconds -= 60;
        add->minutes++;
    }

    if (add->minutes >= 60) {
        add->minutes -= 60;
        add->hour++;
    }

    if (add->hour >= 24) {
        add->hour -= 24;
    }
}*/

#include <stdio.h>
#include <string.h>
struct student {
    char name[50];
    char address[100];
    int id;
};
void sortStudents(struct student s[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); 
        printf("Address: ");
        scanf(" %[^\n]", s[i].address);
        printf("ID: ");
        scanf("%d", &s[i].id);
    }
    sortStudents(s, n);
    printf("\nSorted Student Details (Alphabetical Order by Name):\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Address: %s\n", s[i].address);
        printf("ID: %d\n", s[i].id);
    }

    return 0;
}