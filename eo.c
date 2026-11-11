// Write a program in C to check if a given number is even or odd using the function.

// Test Data :

// Input any number : 5 Learn Math

// Expected Output :

//  The entered number is odd.  

# include <stdio.h>

int checkEvenOdd(int n) {
    if (n % 2 == 0) {
        return 1; // Even
    } else {
        return 0; // Odd
    }
}

int main() {
    int num;
    printf("Input any number: ");
    scanf("%d", &num);
    
    if (checkEvenOdd(num)) {
        printf("The entered number is even.\n");
    } else {
        printf("The entered number is odd.\n");
    }
    
    return 0;
}