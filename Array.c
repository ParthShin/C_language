#include <stdio.h>

int main() {
    int i,n, total = 0;
    printf("How many Stutents list requird you: ");
    scanf("%d",&n);

    int marks[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter Student %d Marks : ",i + 1);
        scanf("%d",&marks[i]);
        total += marks[i];
    }

    printf("\n Total %d Students Marks List \n",n);

    for (i = 0; i < n; i++)
    {
        printf("Studet %d Marks Is :%d \n",i + 1,marks[i]);
    }

    printf("Students Total Marks Is : %d",total);
    
    

    return 0;
}
