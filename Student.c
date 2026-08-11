#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

void add_student(void) {
    FILE *fp = fopen("students.dat", "ab");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    Student s;
    printf("\nEnter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter GPA: ");
    scanf("%f", &s.gpa);

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    printf("Record added successfully!\n");
}

void display_students(void) {
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) {
        printf("\nNo records found!\n");
        return;
    }

    Student s;
    printf("\n--- Student Records ---\n");
    printf("%-10s %-20s %-5s\n", "ID", "Name", "GPA");
    printf("-----------------------------------\n");

    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("%-10d %-20s %-5.2f\n", s.id, s.name, s.gpa);
    }

    fclose(fp);
}

void search_student(void) {
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) {
        printf("\nNo records found!\n");
        return;
    }

    int search_id, found = 0;
    Student s;

    printf("\nEnter Student ID to search: ");
    scanf("%d", &search_id);

    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        if (s.id == search_id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nGPA: %.2f\n", s.id, s.name, s.gpa);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", search_id);
    }

    fclose(fp);
}

int main(void) {
    int choice;

    while (1) {
        printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_student(); break;
            case 2: display_students(); break;
            case 3: search_student(); break;
            case 4: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}