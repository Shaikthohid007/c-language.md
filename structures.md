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
## 7. Define a structure to represent a complex number with real and imaginary parts (both floats). Write a function to add two complex numbers represented by structures. 
## 8. Implement a linked list using structures. Each node in the list should hold an integer value and a pointer to the next node. 
## 9. Define a self-referential structure to represent a binary tree node. Each node should have data (integer) and pointers to left and right child nodes. 
## 10. Write a program that reads a text file containing lines of student data (name, roll number, marks) and stores the information in an array of structures. 
## 11. Implement a function that takes a structure representing a date (day, month, year) and checks if the date is valid (e.g., not exceeding the number of days in a month). 
## 12. Define a union to represent a shape. The union can hold the dimensions of different shapes like cicle (radius), rectangle (length, breadth), or triangle (base, height). Write functions to calculate the area of each shape based on the type stored in the union. 
 ## 13. Define a structure to represent a playing card with suit (enum) and rank (integer). Write a function to generate a random playing card and another function to print the card's details. 
## 14. Implement a function that takes a structure representing a time (hours, minutes, seconds) and performs basic time arithmetic (e.g., adding two time durations). 
## 15.Create a structure to represent a student enrollment record with student ID (string), course name (string), and grade (character). Write functions to add a new record to an array of structures and to search for a record based on student ID.
