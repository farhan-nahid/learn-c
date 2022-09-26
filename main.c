#include <stdio.h>
// #include <stdlib.h>

// void hello_world();

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;

    int sum = 0;
    int sub = 0;
    int multiplication =0;
    int division = 0;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("\nEnter second number: ");
    scanf("%d", &secondNumber);


    sum = firstNumber + secondNumber;
    sub = firstNumber - secondNumber;
    multiplication = firstNumber * secondNumber;
    division = firstNumber / secondNumber;

    printf("Sum %d\n", sum);
    printf("Sub %d\n", sub);
    printf("Multiplication %d\n", multiplication);
    printf("Division %d\n", division);
    return 0;
    
}

/*


void hello_world()
{
    char a[6] = "Hello";
    int age = 22;
    printf("%s. \n", a);
    printf("%s is best %s ever.\n", "Farhan", "noob");
    printf("my age is %d. \n", age);
    printf("my age is %f. \n", 22.2);
}

*/
