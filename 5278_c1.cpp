
#include<iostream>
#include<string>
using namespace std;


#include<iostream>
#include<string>
using namespace std;

// Task 1: Variables and Output
void task1()
{
    int a = 2;
    int b = 8;
    int sum = a + b; 
    // Bug: I forgot the semicolon after declaring variable a.
    // Fix: Added the missing semicolon.

    cout << "sum=" << sum << endl;
    // Bug: I previously used an incorrect variable name when displaying the result.
    // Fix: Changed it to sum so the correct value is displayed.
}

// Task 2: Arithmetic Operations
void task2()
{
    int x = 22;
    int y = 2;

    int product = x * y;
    // Bug: I accidentally used the modulus operator (%) instead of multiplication (*).
    // Fix: Replaced % with * to calculate the correct product.

    cout << "Product =" << product << endl;
}

// Task 3: Loops and Iterations
void task3()
{
    int N = (5278 % 10) + 1;

    for (int i = 1; i <= N; i++)
    {
        // Bug: I initially forgot to increment the loop variable.
        // Fix: Added i++ so the loop progresses correctly.

        cout << "9 x " << i << " = " << 9 * i << endl;
    }
}

// Task 4: If-Else Statements
void task4()
{
    int number = 5278;

    if (number % 2 == 0)
    {
        // Bug: I previously used == 1, which checks for odd numbers.
        // Fix: Changed it to == 0 to correctly identify even numbers.

        cout << number << " is even" << endl;
    }
    else
    {
        cout << number << " is odd" << endl;
    }
}

int main()
{
    task1();
    task2();
    task3();
    task4();

    return 0;
}


void task5()
{
    int month = (5278 / 12) + 1;

    switch (month)
    {
        case 1: cout << "January" << endl;
        case 2: cout << "February" << endl; break;
        case 3: cout << "March" << endl; break;
        case 4: cout << "April" << endl; break;
        case 5: cout << "May" << endl; break;
        case 6: cout << "June" << endl; break;
        case 7: cout << "July" << endl; break;
        case 8: cout << "August" << endl; break;
        case 9: cout << "September" << endl; break;
        case 10: cout << "October" << endl; break;
        case 11: cout << "November" << endl; break;
        case 12: cout << "December" << endl; break;
    }
}

void task6()
{
    int numbers[5] = {5, 2, 8, 7, 8};

    for (int i = 0; i <= 5; i++)
    {
        cout << "numbers[" << i << "]=" << numbers[i] << endl;
    }

    cout << "third value=" << numbers[3] << endl;
}

void task7(string name, int marks)
{
    cout << "Welcome, " << name << endl;
    cout << "Your marks are=" << score << endl;
}

void task8()
{
    int count = 0;
    count++;

    cout << "Personalization number=5278" << endl;
    cout << "Function call count: " << count << endl;
}

double computeAverage()
{
    int total = 0;
    int count = 0;
    int mark = 0;

    do
    {
        cin >> mark;

        if (mark == -1)
        {
            total += mark;
            count++;
            break;
        }

        if (mark >= 0)
        {
            total = total + mark;
            count++;
        }

    } while (mark == -1);

    return total / count;
}

void task9()
{
    cout << "Enter your marks (-1 to stop):" << endl;

    int average = computeAverage();

    cout << "Average marks are = " << average << endl;
}

int globalNumber = 5278;

void task10()
{
    int staticNumber = 5278;

    globalNumber--;
    staticNumber++;

    cout << "Global number: " << globalNumber << endl;
    cout << "Static number: " << staticNumber << endl;
}

int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();

    task7("5278", 78);

    task8();
    task8();
    task8();
    task8();
    task8();

    task9();

    task10();
    task10();
    task10();

    return 0;
}
