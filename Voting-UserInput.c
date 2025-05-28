#include<stdio.h>

int main(){
    int Age;

    printf("Enter Your Age : ");
    scanf("%d",&Age);

     if (Age > 100)
    {
        printf("somthing is wrong!");
    }
    else if (Age >= 18)
    {
        printf("You are eligible to vot");
    }
    else{
        printf("You are Not eligible to vot");
    }
    
    
}