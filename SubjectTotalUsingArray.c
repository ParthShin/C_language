#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char subjects[6][20] = {"Math", "Physics", "Chemistry", "English", "Biology", "Computer"};

    int marks[n][6];
    int subjectTotals[6] = {0};

    for (int i = 0; i < n; i++) {
        printf("\nEnter marks for student %d:\n", i + 1);
        for (int j = 0; j < 6; j++) {
            printf("  %s: ", subjects[j]);
            scanf("%d", &marks[i][j]);
            subjectTotals[j] += marks[i][j];
        }
    }

    printf("\nTotal marks for each subject:\n");
    for (int j = 0; j < 6; j++) {
        printf("Total  marks in %s are: %d\n", subjects[j], subjectTotals[j]);
    }

    return 0;
}
