## 1.Create a structure to represent a student with the following members: name (string), roll number (int), and marks (float). Write a function to display the details of a student. 
```c
#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int rollno;
    float marks;
};

void display(struct student s){
    printf("______student details _____\n");
    printf("name : %s\n",s.name);
    printf("rollno : %d\n",s.rollno);
    printf("marks : %.2f\n", s.marks);
}
int main(){
    struct student s1;
    
    printf("enter the string\n");
    fgets(s1.name,sizeof(s1.name),stdin);
    s1.name[strcspn(s1.name,"\n")]='\0';
    
    printf("enter the rollno\n");
    scanf("%d",&s1.rollno);
    
    printf("enter the marks\n");
    scanf("%f",&s1.marks);
    
    display(s1);
    
    return 0;
}
```
