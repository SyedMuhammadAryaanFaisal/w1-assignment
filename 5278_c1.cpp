
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
// error: i recalled the tasks here again.
//fix: i removed them.
// Task 5: Switch Case
void task5()
{
    int month = (5278 % 12) + 1;
    // Bug: I accidentally used division (/) instead of modulus (%).
    // Fix: Replaced / with % to calculate the correct month number.

    switch (month)
    {
        case 1:
            cout << "January" << endl;
            break;

        case 2:
            cout << "February" << endl;
            break;

        case 3:
            cout << "March" << endl;
            break;

        case 4:
            cout << "April" << endl;
            break;

        case 5:
            cout << "May" << endl;
            break;

        case 6:
            cout << "June" << endl;
            break;

        case 7:
            cout << "July" << endl;
            break;

        case 8:
            cout << "August" << endl;
            break;

        case 9:
            cout << "September" << endl;
            break;

        case 10:
            cout << "October" << endl;
            break;

        case 11:
            cout << "November" << endl;
            break;

        case 12:
            cout << "December" << endl;
            break;
    }
}

// Task 6: Arrays
void task6()
{
    int numbers[5] = {5, 2, 8, 7, 8};
    // Bug: I initially used curly brackets {} instead of square brackets [] when declaring the array.
    // Fix: Used square brackets [] to declare the array size.

    for (int i = 0; i < 5; i++)
    {
        cout << "numbers[" << i << "]=" << numbers[i] << endl;
    }

    cout << "third value=" << numbers[2] << endl;
    // Bug: I initially selected the wrong array index.
    // Fix: Used index 2 because array indexing starts from 0.
}

// Task 7: Functions and Parameters
void task7(string name, int marks)
{
    // Bug: I initially forgot to pass the required arguments when calling the function.
    // Fix: Passed the name and marks through the function call in main.

    cout << "Welcome, " << name << endl;
    cout << "Your marks are=" << marks << endl;
}

// Task 8: Static Local Variables
void task8()
{
    static int count = 0;
    // Bug: I initially forgot to use the static keyword.
    // Fix: Added static so the variable keeps its value between function calls.

    count++;

    cout << "Personalization number=5278" << endl;
    cout << "Function call count: " << count << endl;
    // Bug: I initially forgot to display the updated count.
    // Fix: Added the count variable to the output statement.

    cout << endl;
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
            break;
            // Bug: I initially counted -1 as a valid mark.
            // Fix: Added break before calculating the total and count.
        }

        if (mark >= 0)
        {
            total = total + mark;
            count++;
            //bug: i had added && mark<=100 putting a limit now.
            //fix: i removed it.
            
        }
        else
        {
            cout << "negative mark ignored." << endl;
        }

    } while (mark != -1);
    // Bug: I accidentally used == instead of != in the loop condition.
    // Fix: Changed it to != so the loop continues until -1 is entered.

    if (count == 0)
    {
        return 0.0;
        // Bug: The program could divide by zero if no valid marks were entered.
        // Fix: Added a condition to return 0.0 when count is zero.
    }

    return static_cast<double>(total) / count;
    // Bug: I initially used integer division, which removed decimal values.
    // Fix: Used static_cast<double> to calculate an accurate decimal average.
}

void task9()
{
    cout << "Enter your marks (-1 to stop):" << endl;

    double average = computeAverage();

    cout << "Average marks are = " << average << endl;
}
// Task 10: Global vs Static Variables

int globalNumber = 5278;

void task10()
{
    static int staticNumber = 5278;

    // Bug: I initially forgot to use the static keyword.
    // Fix: Added static so the variable retains its value between function calls.

    globalNumber++;
    staticNumber++;

    // Bug: I accidentally used -- instead of ++ for the global variable.
    // Fix: Changed -- to ++ so the global number increases with every function call.

    cout << "Global number: " << globalNumber << endl;
    cout << "Static number: " << staticNumber << endl;

    cout << endl;
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

    task9();// i used 50,60,70 their average was 60.
    task9();// i used 50,0,70 their average was 40.
    task9();// i used -1 and got 0.

    task10();
   

    return 0;
}
