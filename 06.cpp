#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char * name;
    char * familyName;
    char * age;
    char * phone;
};

int main(){
    student students[100];
    FILE * file = fopen("/Users/vladimirignatov/Documents/CProgs/06.txt", "r");

    char str[100];
    int n = 0;

    while(!feof(file)){
        fscanf(file,"%s",&str);
        students[n].name = (char *) malloc(sizeof(str));
        strcpy(students[n].name, str);

        fscanf(file,"%s",&str);
        students[n].familyName = (char *) malloc(sizeof(str));
        strcpy(students[n].familyName, str);

        fscanf(file,"%s",&str);
        students[n].age = (char *) malloc(sizeof(str));
        strcpy(students[n].age, str);

        fscanf(file,"%s",&str);
        students[n].phone = (char *) malloc(sizeof(str));
        strcpy(students[n].phone, str);

        n++;
    }
    fclose(file);


    for (int i = 0; i < n; i++){
        printf("\n%s %s %s %s", students[i].name, students[i].familyName, students[i].age, students[i].phone);
     }
    return 0;
}