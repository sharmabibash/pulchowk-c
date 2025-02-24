/*1.Write a program that reads numbers from a file containing series of numbers
and separates odd numbers from even numbers and writes them on two
separate files. */

/*#include <stdio.h>

void separateNumbers(FILE *inputFile, FILE *evenFile, FILE *oddFile) {
    int number;

    while (fscanf(inputFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }
}

int main() {
    FILE *inputFile, *evenFile, *oddFile;

    // Open the input file for reading
    inputFile = fopen("numbers.txt", "r");
    if (inputFile == NULL) {
        printf("Could not open input file\n");
        return 1;
    }

    // Open the output files for writing
    evenFile = fopen("even_numbers.txt", "w");
    if (evenFile == NULL) {
        printf("Could not open even numbers file\n");
        return 1;
    }

    oddFile = fopen("odd_numbers.txt", "w");
    if (oddFile == NULL) {
        printf("Could not open odd numbers file\n");
        return 1;
    }

    // Separate the numbers and write them to the respective files
    separateNumbers(inputFile, evenFile, oddFile);

    // Close the files
    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers separated into even_numbers.txt and odd_numbers.txt\n");

    return 0;
}
*/

/*2.Write a C program to create a new file named "employee.dat" which consist
the information of 10 employees. Employee information includes empName,
salary and post. Read the file back to search the word "manager". */

/*#include <stdio.h>
#include <string.h>

struct Employee {
    char empName[50];
    float salary;
    char post[30];
};

void createEmployeeFile() {
    FILE *file;
    struct Employee emp;
    
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Could not create the file.\n");
        return;
    }

    for (int i = 0; i < 10; i++) {
        printf("Enter details for employee %d\n", i+1);
        printf("Enter name: ");
        getchar();
        fgets(emp.empName, sizeof(emp.empName), stdin);
        emp.empName[strcspn(emp.empName, "\n")] = '\0';
        
        printf("Enter salary: ");
        scanf("%f", &emp.salary);
        
        printf("Enter post: ");
        getchar();
        fgets(emp.post, sizeof(emp.post), stdin);
        emp.post[strcspn(emp.post, "\n")] = '\0';
        
        fwrite(&emp, sizeof(struct Employee), 1, file);
    }

    fclose(file);
}

void searchManagerInFile() {
    FILE *file;
    struct Employee emp;
    int found = 0;

    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return;
    }

    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        if (strstr(emp.post, "manager") != NULL) {
            printf("Found manager:\n");
            printf("Name: %s\n", emp.empName);
            printf("Salary: %.2f\n", emp.salary);
            printf("Post: %s\n\n", emp.post);
            found = 1;
        }
    }

    if (!found) {
        printf("No employee with the title 'manager' found.\n");
    }

    fclose(file);
}

int main() {
    createEmployeeFile();
    searchManagerInFile();
    return 0;
}
*/


/*3.WAP to write the name, roll no, and age of five students into a disk file name
“STUDENT.DAT”.*/

/*#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    int age;
};

int main() {
    FILE *file;
    struct Student student;
    
    file = fopen("STUDENT.DAT", "wb");
    if (file == NULL) {
        printf("Could not create the file.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i+1);
        printf("Enter name: ");
        getchar();
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = '\0';
        
        printf("Enter roll number: ");
        scanf("%d", &student.rollNo);
        
        printf("Enter age: ");
        scanf("%d", &student.age);

        fwrite(&student, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("Student data has been written to STUDENT.DAT\n");

    return 0;
}
*/


/*4.WAP to read a string, write it to a file and display the content of file into a
screen. */

/*#include <stdio.h>

int main() {
    FILE *file;
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }
    
    fputs(str, file);
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }
    
    printf("Content of file: \n");
    while (fgets(str, sizeof(str), file)) {
        printf("%s", str);
    }
    
    fclose(file);
    return 0;
}
*/

/*5.Write a program to display the record in sorted order, sorting is performed in
ascending order with respect to name using data files concept. */

/*#include <stdio.h>
#include <string.h>

struct Record {
    char name[50];
    int age;
};

int main() {
    FILE *file;
    struct Record records[5], temp;
    int i, j;

    file = fopen("records.dat", "wb");
    if (file == NULL) {
        printf("Could not create the file.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Enter name for record %d: ", i + 1);
        getchar();
        fgets(records[i].name, sizeof(records[i].name), stdin);
        records[i].name[strcspn(records[i].name, "\n")] = '\0';
        
        printf("Enter age for record %d: ", i + 1);
        scanf("%d", &records[i].age);
    }

    fwrite(records, sizeof(struct Record), 5, file);
    fclose(file);

    file = fopen("records.dat", "rb");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    fread(records, sizeof(struct Record), 5, file);
    fclose(file);

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(records[i].name, records[j].name) > 0) {
                temp = records[i];
                records[i] = records[j];
                records[j] = temp;
            }
        }
    }

    printf("Records in sorted order by name:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Age: %d\n", records[i].name, records[i].age);
    }

    return 0;
}
*/

/*6.A file name employee.txt stores employee name, employee id and employee
salary. Write a program to display the detail of all employees in the order of
their salary. */

/*#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *file;
    struct Employee employees[5], temp;
    int i, j;

    file = fopen("employee.txt", "wb");
    if (file == NULL) {
        printf("Could not create the file.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Enter name for employee %d: ", i + 1);
        getchar();
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';
        
        printf("Enter employee id for employee %d: ", i + 1);
        scanf("%d", &employees[i].id);
        
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
    }

    fwrite(employees, sizeof(struct Employee), 5, file);
    fclose(file);

    file = fopen("employee.txt", "rb");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    fread(employees, sizeof(struct Employee), 5, file);
    fclose(file);

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (employees[i].salary > employees[j].salary) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("Employees sorted by salary:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", employees[i].name, employees[i].id, employees[i].salary);
    }

    return 0;
}
*/


/*7.WAP to read integers from users until user says "no". After reading the data
write all the odd number to a file named odd.txt and all the even number to
file named even.txt. */

/*#include <stdio.h>
#include <string.h>

int main() {
    FILE *oddFile, *evenFile;
    int num;
    char response[3];

    oddFile = fopen("odd.txt", "w");
    if (oddFile == NULL) {
        printf("Could not open odd.txt file.\n");
        return 1;
    }

    evenFile = fopen("even.txt", "w");
    if (evenFile == NULL) {
        printf("Could not open even.txt file.\n");
        fclose(oddFile);
        return 1;
    }

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", response);
    } while (strcmp(response, "no") != 0);

    fclose(oddFile);
    fclose(evenFile);

    printf("Odd and even numbers have been written to odd.txt and even.txt respectively.\n");

    return 0;
}
*/

/*8.Write a program to read name and roll number of 48 students from user and
store them in file. If the file already contains data, your program should add
new data at the end of the file.*/

/*#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
};

int main() {
    FILE *file;
    struct Student student;
    
    file = fopen("students.dat", "a"); 
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    for (int i = 0; i < 48; i++) {
        printf("Enter name for student %d: ", i + 1);
        getchar(); 
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = '\0';
        
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &student.rollNo);

        fwrite(&student, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("Student data has been written to students.dat\n");

    return 0;
}
*/

/*9.Write a program to read the information of a file named "data.txt" and write
its contents to another file “record.txt”.*/

/*#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("data.txt", "r");
    if (sourceFile == NULL) {
        printf("Could not open data.txt file.\n");
        return 1;
    }

    destinationFile = fopen("record.txt", "w");
    if (destinationFile == NULL) {
        printf("Could not open record.txt file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("Contents from data.txt have been written to record.txt\n");

    return 0;
}
*/

/*10. Write a program to continuously read name, age and salary of a worker
and write it into a file until user confirm to end. Then read n from user and
display the nth record in the file. Details of worker must be represented by a
structure*/

/*#include <stdio.h>

struct Worker {
    char name[50];
    int age;
    float salary;
};

int main() {
    FILE *file;
    struct Worker worker;
    int n, count = 0;

    file = fopen("workers.dat", "ab");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    char choice;
    do {
        printf("Enter name: ");
        getchar();
        fgets(worker.name, sizeof(worker.name), stdin);
        worker.name[strcspn(worker.name, "\n")] = '\0';

        printf("Enter age: ");
        scanf("%d", &worker.age);

        printf("Enter salary: ");
        scanf("%f", &worker.salary);

        fwrite(&worker, sizeof(struct Worker), 1, file);
        count++;

        printf("Do you want to enter another record? (y/n): ");
        getchar();
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(file);

    printf("Enter the record number to display: ");
    scanf("%d", &n);

    file = fopen("workers.dat", "rb");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    if (n <= 0 || n > count) {
        printf("Invalid record number.\n");
    } else {
        fseek(file, (n - 1) * sizeof(struct Worker), SEEK_SET);
        fread(&worker, sizeof(struct Worker), 1, file);
        printf("Record %d - Name: %s, Age: %d, Salary: %.2f\n", n, worker.name, worker.age, worker.salary);
    }

    fclose(file);

    return 0;
}
*/

/*11. WAP in c to store employee details in a text file. Read data from the text file,
sort them in ascending order of salary and store the sorted record to a binary
file. Display the details and rank of employee given by the user.*/

/*#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int empID;
    float salary;
};

int compareSalary(const void *a, const void *b) {
    return ((struct Employee *)a)->salary - ((struct Employee *)b)->salary;
}

int main() {
    FILE *textFile, *binaryFile;
    struct Employee employee[100], temp;
    int count = 0, rank, i;
    
    textFile = fopen("employees.txt", "r");
    if (textFile == NULL) {
        printf("Could not open employees.txt file.\n");
        return 1;
    }

    while (fscanf(textFile, "%s %d %f", employee[count].name, &employee[count].empID, &employee[count].salary) != EOF) {
        count++;
    }

    fclose(textFile);

    qsort(employee, count, sizeof(struct Employee), compareSalary);

    binaryFile = fopen("employees.dat", "wb");
    if (binaryFile == NULL) {
        printf("Could not open employees.dat file.\n");
        return 1;
    }

    fwrite(employee, sizeof(struct Employee), count, binaryFile);
    fclose(binaryFile);

    printf("Enter the rank of the employee to display: ");
    scanf("%d", &rank);

    if (rank <= 0 || rank > count) {
        printf("Invalid rank.\n");
    } else {
        printf("Rank: %d\n", rank);
        printf("Name: %s\n", employee[rank - 1].name);
        printf("Employee ID: %d\n", employee[rank - 1].empID);
        printf("Salary: %.2f\n", employee[rank - 1].salary);
    }

    return 0;
}
*/

/*12. Write a program to write any structure information in a binary file and to
read and display it later. Make a menu driven program to read and display
information from file.*/

/*#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

void writeToFile() {
    FILE *file;
    struct Student student;
    
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return;
    }

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character after entering the number

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = '\0'; // Remove trailing newline
        printf("Roll Number: ");
        scanf("%d", &student.rollNo);
        printf("Marks: ");
        scanf("%f", &student.marks);
        getchar(); // To consume the newline character

        fwrite(&student, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("Student data written to file successfully.\n");
}

void readFromFile() {
    FILE *file;
    struct Student student;
    
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return;
    }

    printf("Reading student data from file:\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", student.name);
        printf("Roll Number: %d\n", student.rollNo);
        printf("Marks: %.2f\n\n", student.marks);
    }

    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Write student data to file\n");
        printf("2. Read student data from file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
*/