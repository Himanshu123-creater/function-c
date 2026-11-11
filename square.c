// Write a program in C to find the square of any number using the function.

// Test Data :

// Input any number for square : 20 Learn Math

// Expected Output :

// The square of 20 is : 400.00


# include  <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    
    int num;
    printf("Input any number for square: ");
    scanf("%d", &num);
    
    int result = square(num);
    printf("The square of %d is: %.2f\n", num, (float)result);
    
    return 0;
}