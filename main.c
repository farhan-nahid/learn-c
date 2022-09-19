#include <stdio.h>
#include <stdlib.h>

void hello_world();

int main()
{
    hello_world();
    return 0;
    
}

void hello_world()
{
    char a[6] = "Hello";
    int age = 22;
    printf("%s. \n", a);
    printf("%s is best %s ever.\n", "Farhan", "noob");
    printf("my age is %d. \n", age);
    printf("my age is %f. \n", 22.2);
}
