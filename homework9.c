#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

typedef struct {
    char name[MAX_LEN];
    char surname[MAX_LEN];
    int id;
    float grade;
} Student;

void addStudent(Student **list, int *size);
void removeStudent(Student **list, int *size);
void searchStudent(Student *list, int size);
void displayStudents(Student *list, int size);
void averageGrade(Student *list, int size);
void saveToFile(Student *list, int size);
void readFromFile(Student **list, int *size);

int main() {
    Student *students = NULL;
    int size = 0;
    int choice;

    readFromFile(&students, &size);

    do {
        printf("Student Management Menu\n");
        printf("1. Add a new student\n");
        printf("2. Remove a student by ID\n");
        printf("3. Search a student by ID\n");
        printf("4. Display all students\n");
        printf("5. Display average grade\n");
        printf("6. Save to file\n");
        printf("7. Read from file\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(&students, &size); break;
            case 2: removeStudent(&students, &size); break;
            case 3: searchStudent(students, size); break;
            case 4: displayStudents(students, size); break;
            case 5: averageGrade(students, size); break;
            case 6: saveToFile(students, size); break;
            case 7: readFromFile(&students, &size); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);

    free(students);
    return 0;
}

void addStudent(Student **list, int *size) {
    *list = realloc(*list, (*size + 1) * sizeof(Student));
    if (*list == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    Student *s = &(*list)[*size];

    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter surname: ");
    scanf("%s", s->surname);
    printf("Enter ID: ");
    scanf("%d", &s->id);
    printf("Enter grade: ");
    scanf("%f", &s->grade);

    (*size)++;
    printf("\nStudent added\n");
}

void removeStudent(Student **list, int *size) {
    if (*size == 0) {
        printf("No students to remove!\n");
        return;
    }

    int id, index = -1;
    printf("Enter ID to remove: ");
    scanf("%d", &id);

    for (int i = 0; i < *size; i++) {
        if ((*list)[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student with ID %d not found!\n", id);
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        (*list)[i] = (*list)[i + 1];
    }

    *list = realloc(*list, (*size - 1) * sizeof(Student));
    (*size)--;

    printf("Student removed\n");
}

void searchStudent(Student *list, int size) {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < size; i++) {
        if (list[i].id == id) {
            printf("\nStudent found:\n");
            printf("Name: %s\n", list[i].name);
            printf("Surname: %s\n", list[i].surname);
            printf("ID: %d\n", list[i].id);
            printf("Grade: %.2f\n", list[i].grade);
            return;
        }
    }
    printf("Student not found.\n");
}

void displayStudents(Student *list, int size) {
    if (size == 0) {
        printf("No students available.\n");
        return;
    }

    printf("Student List\n");
    for (int i = 0; i < size; i++) {
        printf("%d) %s %s | ID: %d | Grade: %.2f\n",
               i + 1,
               list[i].name,
               list[i].surname,
               list[i].id,
               list[i].grade);
    }
}

void averageGrade(Student *list, int size) {
    if (size == 0) {
        printf("No students available.\n");
        return;
    }

    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += list[i].grade;
    }

    printf("Average grade: %.2f\n", sum / size);
}

void saveToFile(Student *list, int size) {
    FILE *fp = fopen("group_details.csv", "w");
    if (!fp) {
        printf("Failed to open file!\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(fp, "%s,%s,%d,%.2f\n",
                list[i].name,
                list[i].surname,
                list[i].id,
                list[i].grade);
    }

    fclose(fp);
    printf("Data saved to group_details.csv\n");
}

void readFromFile(Student **list, int *size) {
    FILE *fp = fopen("group_details.csv", "r");
    if (!fp) return;

    *size = 0;
    *list = NULL;

    Student temp;
    while (fscanf(fp, "%49[^,],%49[^,],%d,%f\n",
                  temp.name, temp.surname,
                  &temp.id, &temp.grade) == 4) {

        *list = realloc(*list, (*size + 1) * sizeof(Student));
        (*list)[*size] = temp;
        (*size)++;
    }

    fclose(fp);
    printf("Loaded %d students from file.\n", *size);
}
