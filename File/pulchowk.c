/*1.WAP to read a string, write it to a file and display the content of file into a
screen. */

/*#include<stdio.h>
int main(){
FILE *file;
char str[100];
printf("Enter a string : ");
fgets(str,sizeof(str),stdin);
file = fopen("record.txt","w");
if(file==NULL){
    printf("\n Could not open \n");
    return 1;
}
fputs(str,file);
fclose(file);

file=fopen("record.txt","r");
if(file==NULL){
    printf("\n File Error !\n");
    return 1;
}

printf("Content of File :\n");
    while(fgets(str,sizeof(str),file)){
        printf("%s",str);
    }
    fclose(file);
    return 0;


}*/

/*#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    
    sourceFile = fopen("record.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: record.txt not found!\n");
        return 1;
    }

    
    destFile = fopen("record.txt", "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(sourceFile);
        return 1;
    }

   
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully!\n");

    return 0;
}
*/

/*#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    
    file = fopen("records.txt", "r");
    if (file == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    fclose(file); 

    printf("Total number of characters: %d\n", count);
    return 0;
}
*/

#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    file = fopen("notes.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fclose(file);

    printf("Text appended successfully!\n");

    return 0;
}
