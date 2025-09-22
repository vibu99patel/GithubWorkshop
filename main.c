#include <stdio.h>

// Function prototype
int findSum(int x, int y);

int main(void) {
    // Call the functions
    int num1 = 10;
    int num2 = 20;
    int sum1 = findSum(num1, num2);
    printf("sum: %d\n", sum1);
    

    return 0;
}

//function definition
int findSum(int x, int y){
    return x+y;
}

