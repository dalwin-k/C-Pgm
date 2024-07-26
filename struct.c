#include<stdio.h>
#include<stdlib.h>

    struct student {
        char name[50];
        int age;
        float gpa;
    
    };
 int main(){
    struct student *ptr;
    ptr=(struct student *)malloc(sizeof(struct student));
    if(ptr==NULL){
        printf("memory allocation is failed\n");
        return 1;
    }
    printf("enter the student name:");
    scanf("%49s",ptr->name);
    printf("enter the age:");
    scanf("%d",&ptr->age);
    printf("enter the student gpa:");
    scanf("%f",&ptr->gpa);
    printf("\n students informations: \n");
    printf("name: %s\n",ptr-> name);
    printf("age: %d\n",ptr-> age);
    printf("gpa: %f\n",ptr-> gpa);
    free(ptr);return 0;
    }