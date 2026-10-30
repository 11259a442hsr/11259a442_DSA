#include <stdio.h>
#include <string.h>
struct stud {
    int id;
    char name[50];
    float cgpa;
};
int main() { 
    struct stud s1;  
    s1.id = 11259442;
    strcpy(s1.name, "V.Hema Sai Reddy"); 
    s1.cgpa = 9.10;    
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("Student CGPA: %.2f\n", s1.cgpa);
    return 0;
}
