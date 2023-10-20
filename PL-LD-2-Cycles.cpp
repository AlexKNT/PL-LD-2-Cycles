#include <cstdio>

// Function to check if number1 and number2 consist of the same digits
bool haveSameDigits(int number1, int number2)
{
    // Initialize an array to count the occurrences of each digit (0-9)
    int digitCount[10] = { 0 };
    int digit;

    // Count the occurrences of each digit in number1
    int tempNumber = number1;
    while (tempNumber != 0)
    {
        // Extract the last digit of 'tempNumber' and store it in 'digit'
        digit = tempNumber % 10;

        // Increase the count of this digit in the 'digitCount' array
        digitCount[digit]++;

        // Remove the last digit from 'tempNumber'
        tempNumber /= 10;
    }

    // Check if each digit in number2 is present in number1
    tempNumber = number2;
    while (tempNumber != 0)
    {
        // Extract the last digit of 'tempNumber' and store it in 'digit'
        digit = tempNumber % 10;
        if (digitCount[digit] == 0)
        {
            return false; // A digit in number2 is not present in number1
        }
        tempNumber /= 10;
    }

    // All digits in number2 are present in number1
    return true;
}

int main()
{
    int number1, number2;

    printf("Enter Number 1: "); scanf_s("%i", &number1);
    printf("Enter Number 2: "); scanf_s("%i", &number2);

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
