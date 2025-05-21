#include <stdio.h>

int main() {
    int marks[5] = {86, 94, 78, 88, 92};
    int i = 0;
    int total = 0;

    for ( i ; i < 5; i++) {
        printf("Student %d Marks: %d\n", i + 1, marks[i]);
        total += marks[i];
    }

    printf("Total is : %d",total);

    return 0;
}
