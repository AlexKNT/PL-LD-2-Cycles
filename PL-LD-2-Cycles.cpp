#include <cstdio>

// Define a function to determine if each digit of number1 is present in number2 or vice-versa
bool haveSameDigits(int number1, int number2)
{
    int digits1[10] = { 0 }; // Assuming numbers are non-negative
    int digits2[10] = { 0 };

    // Extract digits of number1
    int n1 = number1;
    while (n1 != 0)
    {
        digits1[n1 % 10] = 1;
        n1 /= 10;
    }

    // Extract digits of number2 and check if each digit is in number1
    int n2 = number2;
    while (n2 != 0)
    {
        if (digits1[n2 % 10] == 0)
        {
            return false; // A digit in number2 is not present in number1
        }
        n2 /= 10;
    }

    // Extract digits of number2
    n2 = number2;
    while (n2 != 0)
    {
        digits2[n2 % 10] = 1;
        n2 /= 10;
    }

    // Check if each digit in number1 is in number2
    n1 = number1;
    while (n1 != 0)
    {
        if (digits2[n1 % 10] == 0)
        {
            return false; // A digit in number1 is not present in number2
        }
        n1 /= 10;
    }

    return true; // All digits are present in both numbers
}

int main()
{
    int number1, number2;
    printf("Number 1 = ");
    scanf_s("%i", &number1);
    printf("Number 2 = ");
    scanf_s("%i", &number2);

    if (haveSameDigits(number1, number2))
    {
        printf("Number 1 and Number 2 consist of the same digits.\n");
    }
    else
    {
        printf("Number 1 and Number 2 do not consist of the same digits.\n");
    }

    return 0;
}
