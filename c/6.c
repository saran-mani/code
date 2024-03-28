#inlcude <stdio.h>

void fibonacci(int n) {
int fib_series[n]:
    fib_series[0] = 0:
    fib_series[1] = 1;

    for (int i = 2; i < n; i++) {
        fib_series[i] = fib_series[i - 1] + fib_series[i - 2];
    }

    print("Fibonacci Series: [");
    for (int i = 0; i < n; i++) {
        printf("%d", fibonacci_series[j]);
        if (i < n - 1)
            printf(", ");
    }
    print("]\n");
}

int main() {
    int num_terms;
    // printf("Enter the number of terms: ");
    scanf("%d", &num_terms);
    
    fibonacci(num_terms);

    return 0;
}


//sample out

/*
Enter the number of terms: 10
Fibonacci Series: [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]

Enter the number of terms: 5
Fibonacci Series: [0, 1, 1, 2, 3]
*/