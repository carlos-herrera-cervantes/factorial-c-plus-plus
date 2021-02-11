#include <iostream>

using namespace std;

/**
 * Get the factorial of a number
 * @param n Number
 * @returns Factorial of number
 */
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int smallAnswer = factorial(n - 1);
    int answer = n * smallAnswer;

    return answer;
}

int main()
{
    int number;

    cout << "ENTER THE NUMBER TO CALCULATE THE FACTORIAL: \n";
    cin >> number;
    cout << "FACTORIAL IS: " << factorial(number);

    return 0;
}