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
## 2. Define a union to store either an integer or a floatingpoint number. Write a function to accept the type of data (integer or float) and then read the corresponding value from the user. Store the value in the union and print it. 
## 3. Define a structure to represent a point in 2D space with x and y coordinates (both integers). Write a function to check if two points are equal (have the same x and y coordinates).                                                                                                         
## 4. Create a structure to represent a book with the following members: title (string), author (string), ISBN (long int), and number of pages (int). Write a function to accept details of a book from the user andstore them in a structure variable. 
## 5. Define a union to represent the size of a product, which can be specified in centimeters, inches, or feet. Write a function to convert the size from one unit to another (e.g., centimeters to inches). 
## 6. Define a structure to represent a date with day, month, and year (all integers). Write a function to check if a given year is a leap year. 
```c
#include<stdio.h>
struct date {
    int year;
    int day;
    int month;
};
int leapyear(int year);
int main(){
    struct date stu;
    scanf("%d %d %d",&stu.year,&stu.day,&stu.month);
    if(leapyear(stu.year))
    printf("yes");
    else
    printf("no\n");
}
int leapyear(int year){
if(year%4==0)
return 1;
else
return 0;
}
```
## 7. Define a structure to represent a complex number with real and imaginary parts (both floats). Write a function to add two complex numbers represented by structures. 
```c
#include<stdio.h>
struct complex{
    float image;
    float real;
};
struct complex addcomplex(struct complex c1,struct complex c2);
int main(){
    struct complex num1,num2,sum;
    scanf("%f %f",&num1.real,&num1.real);
    scanf("%f %f",&num2.image,&num2.image);
    
    sum=addcomplex(num1,num2);
    
    printf("%.2f +%.2f\n",sum.real,sum.image);
    return 0;
}
struct complex addcomplex(struct complex c1,struct complex c2){
struct complex result;
result.real=c1.real+c2.real;
result.image=c1.image+c2.image;
return result;
}
```
## 8. Implement a linked list using structures. Each node in the list should hold an integer value and a pointer to the next node. 
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
struct node *head=malloc(sizeof(struct node));
head->data=10;
head->next=NULL;

struct node *second=malloc(sizeof(struct node));
second->data=20;
second->next=NULL;
head->next=second;

struct node *third=malloc(sizeof(struct node));
third->data=30;
third->next=NULL;
second->next=third;

struct node *temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL\n");
return 0;
}
```
## 9. Define a self-referential structure to represent a binary tree node. Each node should have data (integer) and pointers to left and right child nodes.
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int main(){
    struct node *root=malloc(sizeof(struct node));
    root->data=10;
    root->left=NULL;
    root->right=NULL;
    
    struct node *leftchild=malloc(sizeof(struct node));
    leftchild->data=5;
    leftchild->left=NULL;
    leftchild->right=NULL;
    
    root->left=leftchild;
    
    struct node *rightchild=malloc(sizeof(struct node));
    rightchild->data=20;
    rightchild->left=NULL;
    rightchild->right=NULL;
    
    root->right=rightchild;
    
    printf("%d\n",root->data);
    printf("%d\n",root->left->data);
    printf("%d\n",root->right->data);
    return 0;
}
```
## 10. Write a program that reads a text file containing lines of student data (name, roll number, marks) and stores the information in an array of structures. 
```c
#include<stdio.h>
struct stu {
char name[10];
int rollno;
float marks;
};
int main(){
    int i;
    struct  stu stuarr[10];
    for(i=0;i<1;i++){
        scanf("%s %d %f",stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
    }
    for(i=0;i<1;i++)
    printf("%s %d %f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
    return 0;
}
```
## 11. Implement a function that takes a structure representing a date (day, month, year) and checks if the date is valid (e.g., not exceeding the number of days in a month).
```c
#include<stdio.h>
struct date{
    int date;
    int month;
    int year;
};
int leapyear(int year);
int validdate(struct date);
int main(){
    struct date d;
    scanf("%d %d %d",&d.date,&d.month,&d.year);
    
    if(validdate(d))
    printf("valid\n");
    else
    printf("no\n");
    return 0;
}
    
    int leapyear(int year){
    if(year %4==0)
    return 1;
    else
    return 0;
    }


int validdate(struct date d){
    if(d.year<1)
    return 0;
    
    if(d.month<1 || d.month>12)
    return 0;
    
    if(d.date<1 || d.date>31)
    return 0;
    
    return 1;
}
```5
## 12. Define a union to represent a shape. The union can hold the dimensions of different shapes like cicle (radius), rectangle (length, breadth), or triangle (base, height). Write functions to calculate the area of each shape based on the type stored in the union. 
 ## 13. Define a structure to represent a playing card with suit (enum) and rank (integer). Write a function to generate a random playing card and another function to print the card's details. 
## 14. Implement a function that takes a structure representing a time (hours, minutes, seconds) and performs basic time arithmetic (e.g., adding two time durations). 
## 15.Create a structure to represent a student enrollment record with student ID (string), course name (string), and grade (character). Write functions to add a new record to an array of structures and to search for a record based on student ID.
