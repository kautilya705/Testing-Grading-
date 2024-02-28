#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to display the Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n = 5;
    
    // Calculate and display the factorial of n
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    // Check if n is a prime number
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    // Display the Fibonacci series up to 10 terms
    fibonacci(10);

    // Calculate and display the sum of digits of a number
    int num = 12345;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;

    return 0;
}


#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to display the Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n = 5;
    
    // Calculate and display the factorial of n
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    // Check if n is a prime number
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    // Display the Fibonacci series up to 10 terms
    fibonacci(10);

    // Calculate and display the sum of digits of a number
    int num = 12345;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to display the Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n = 5;
    
    // Calculate and display the factorial of n
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    // Check if n is a prime number
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    // Display the Fibonacci series up to 10 terms
    fibonacci(10);

    // Calculate and display the sum of digits of a number
    int num = 12345;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;

    return 0;
}