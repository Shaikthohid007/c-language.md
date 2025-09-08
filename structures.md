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
```c
#include<stdio.h>
struct point {
    int x;
    int y;
};
int equal(struct point p1,struct point p2);
int main(){
    struct point a,b;
    scanf("%d %d",&a.x,&a.y);
    scanf("%d %d",&b.x,&b.y);
    
    if(equal(a,b))
        printf("equal\n");
        else
        printf("not\n");
    
    return 0;
}
int equal(struct point p1,struct point p2){
    if(p1.x==p2.x&& p1.y==p2.y)
    return 1;
    else
    return 0;
    
}
```
## 4. Create a structure to represent a book with the following members: title (string), author (string), ISBN (long int), and number of pages (int). Write a function to accept details of a book from the user andstore them in a structure variable.
```c
#include <stdio.h>

struct book {
    char name[10];
    char author[10];
    long int num;
};

void display(struct book b); 

int main() {
    struct book b;

    scanf("%s %s %ld", b.name, b.author, &b.num);

    display(b);
    return 0;
}

void display(struct book b) {
    printf("%s %s %ld", b.name, b.author, b.num);
}
```
## 5 Define a union to represent the size of a product, which can be specified in centimeters, inches, or feet. Write a function to convert the size from one unit to another (e.g., centimeters to inches).
```c
#include <stdio.h>

// union to hold only one size at a time
union Size {
    float cm;
    float inch;
    float feet;
};

// convert function
void convert(union Size s, char type) {
    if (type == 'c') {  // input is centimeters
        printf("In cm   : %.2f\n", s.cm);
        printf("In inch : %.2f\n", s.cm / 2.54);
        printf("In feet : %.2f\n", s.cm / 30.48);
    }
    else if (type == 'i') { // input is inches
        printf("In inch : %.2f\n", s.inch);
        printf("In cm   : %.2f\n", s.inch * 2.54);
        printf("In feet : %.2f\n", s.inch / 12.0);
    }
    else if (type == 'f') { // input is feet
        printf("In feet : %.2f\n", s.feet);
        printf("In inch : %.2f\n", s.feet * 12.0);
        printf("In cm   : %.2f\n", s.feet * 30.48);
    }
    else {
        printf("Invalid type!\n");
    }
}

int main() {
    union Size s;
    char type;

    printf("Enter type (c = cm, i = inch, f = feet): ");
    scanf(" %c", &type);

    if (type == 'c')
        scanf("%f", &s.cm);
    else if (type == 'i')
        scanf("%f", &s.inch);
    else if (type == 'f')
        scanf("%f", &s.feet);

  convert(s, type);

    return 0;
}
```
## 6. Define a structure to represent a date with day, month, and year (all integers). Write a function to wcheck if a given year is a leap year. 
```c
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1; // leap year
    else
        return 0; // not leap
}

int main() {
    struct Date d;

    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    if (isLeapYear(d.year))
        printf("%d is a Leap Year\n", d.year);
    else
        printf("%d is NOT a Leap Year\n", d.year);

    return 0;
}
```
## 7. Define a structure to represent a complex number ith real and imaginary parts (both floats). Write a function to add two complex numbers represented by structures. 
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
```
 ## 12. Define a structure to represent a playing card with suit (enum) and rank (integer). Write a function to generate a random playing card and another function to print the card's details. 
 ```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };

struct Card {
    enum Suit suit;
    int rank;   // 1 = Ace, 2–10 = numbers, 11 = Jack, 12 = Queen, 13 = King
};

struct Card generateCard() {
    struct Card c;
    c.suit = rand() % 4;         // random suit (0–3)
    c.rank = (rand() % 13) + 1;  // random rank (1–13)
    return c;
}

void printCard(struct Card c) {
    if (c.rank == 1) printf("Ace");
    else if (c.rank == 11) printf("Jack");
    else if (c.rank == 12) printf("Queen");
    else if (c.rank == 13) printf("King");
    else printf("%d", c.rank);

    printf(" of ");

    if (c.suit == HEARTS) printf("Hearts");
    else if (c.suit == DIAMONDS) printf("Diamonds");
    else if (c.suit == CLUBS) printf("Clubs");
    else printf("Spades");

    printf("\n");
}

int main() {
    srand(time(0));  

    struct Card c = generateCard();
    printf("Random Card: ");
    printCard(c);

    return 0;
}
```
## 13. Implement a function that takes a structure representing a time (hours, minutes, seconds) and performs basic time arithmetic (e.g., adding two time durations). 
```c
#include <stdio.h>

struct Time {
    int h;
    int m; 
    int s; 
};

struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;

    result.s = t1.s + t2.s;
    result.m = t1.m + t2.m + result.s / 60;
    result.h = t1.h + t2.h + result.m / 60;

    result.s = result.s % 60;
    result.m = result.m % 60;

    return result;
}

int main() {
    struct Time t1, t2, sum;

    printf("Enter first time (h m s): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    printf("Enter second time (h m s): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    sum = addTime(t1, t2);

    printf("Sum of times = %02d:%02d:%02d\n", sum.h, sum.m, sum.s);

    return 0;
}
```
## 14.Create a structure to represent a student enrollment record with student ID (string), course name (string), and grade (character). Write functions to add a new record to an array of structures and to search for a record based on student ID.
```c
#include <stdio.h>
#include <string.h>

struct Student {
    char id[20];
    char course[50];
    char grade;
};

// search function
int searchRecord(struct Student arr[], int n, char searchID[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].id, searchID) == 0) {
            printf("ID: %s, Course: %s, Grade: %c\n",
                   arr[i].id, arr[i].course, arr[i].grade);
            return 1; // found
        }
    }
    return 0; // not found
}

int main() {
    struct Student records[100];
    int n;

    printf("How many students? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter ID, Course, Grade: ");
        scanf("%s %s %c", records[i].id, records[i].course, &records[i].grade);
    }

    char id[20];
    printf("Enter ID to search: ");
    scanf("%s", id);

    if (!searchRecord(records, n, id)) {
        printf("Record not found!\n");
    }

    return 0;
}
```
