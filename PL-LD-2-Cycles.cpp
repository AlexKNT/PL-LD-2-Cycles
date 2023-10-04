#include <cstdio>

// Prime number check
bool isPrime(int n)
{
    if (n <= 1) return false; // A prime number cannot be less than or equal to 1
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false; // If the number is divisible without a remainder, it's not prime
    }
    return true;
}

// Divisible by its digits check
bool isDivided(int n)
{
    int d = n;
    while (d != 0)
    {
        int c = d % 10;
        if (c == 0 || n % c != 0) return false;
        d /= 10;
    }
    return true;
}

int main()
{
    int A, B;
    printf("A = "); scanf("%i", &A);
    printf("B = "); scanf("%i", &B);

    printf("Prime numbers in the range %i to %i:\n", A, B);

    for (int i = A; i <= B; i++)
    {
        if (isPrime(i))
        {
            printf("%i\n", i);
        }
    }

    printf("Numbers divisible by each of their own digits in the range %i to %i:\n", A, B);

    for (int i = A; i <= B; i++)
    {
        if (isDivided(i))
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
