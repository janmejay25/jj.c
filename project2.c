#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store student information
struct Student {
    char name[50];
    float marks;
    float cgpa;
    char course[50];
};

int inputStudentInfo(struct Student *student);
void writeToFile(struct Student students[], int count);

int main() {
    struct Student students[3];
    int count = 3;
    
   
   for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d (type 'none' for name to stop):\n", i + 1);
        if (inputStudentInfo(&students[count]) == 0) {
            break; // Stop if "none" is entered
        }
        count++;
    }
    writeToFile(students, count);
    
    printf("Student information written to 'students_info.txt' successfully.\n");
    return 0;
}

int inputStudentInfo(struct Student *student) {
    printf("Name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0'; // Remove newline character

     if (strcmp(student->name, "none") == 0) {
        return 0; // Indicate to stop the input
    }
    
    printf("Marks: ");
    scanf("%f", &student->marks);
    printf("CGPA: ");
    scanf("%f", &student->cgpa);
    
    // Clear input buffer before reading the next string
    while (getchar() != '\n');

    printf("Course: ");
    fgets(student->course, sizeof(student->course), stdin);
    student->course[strcspn(student->course, "\n")] = '\0'; // Remove newline character
    return 1;
}

void writeToFile(struct Student students[], int count) {
    FILE *file = fopen("students_info.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    
   
    fprintf(file, "+-----------------+---------+-------+-------------------+\n");
    fprintf(file, "| %-15s | %-7s | %-5s | %-17s |\n", "Name", "Marks", "CGPA", "Course");
    fprintf(file, "+-----------------+---------+-------+-------------------+\n");
    

    for (int i = 0; i < count; i++) {
        fprintf(file, "| %-15s | %-7.2f | %-5.2f | %-17s |\n", students[i].name, students[i].marks, students[i].cgpa, students[i].course);
    }
    
    // Write table footer
    fprintf(file, "+-----------------+---------+-------+-------------------+\n");
    
    fclose(file);
}
