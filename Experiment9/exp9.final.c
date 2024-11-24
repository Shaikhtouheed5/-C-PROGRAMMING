#include <stdio.h>
#include <string.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

void input_student_data(struct student_record students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        // Use fgets to safely read the name
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove newline character if present
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);
        // Consume the newline character left by scanf
        getchar();
    }
}

int find_topper(struct student_record students[], int n) {
    int topper_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }
    return topper_index;
}

int main() {
    int n = 5;
    struct student_record students[n];
    printf("\t\t *** Topper Finder *** \n\n");
    input_student_data(students, n);
    int topper_index = find_topper(students, n);

    printf("\nTopper Details:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);

    return 0;
}
