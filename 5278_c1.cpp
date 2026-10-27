//5278
#include<iostream>
#include<string>
using namespace std;
void task1()//task1 variables and output//forgot to remove semicolon after()
{
    int a=2;
    int b=8;
    int sum= a+b;
    cout<<"sum="<<sum<<endl;//forgot to display sum// added "=" to "sum"
}//now it compiles and runs properly giving out desired output
void task2() // arthimatic operations
{
int x=22;
int y=2;
int product = x * y;//accidently put "%" instead of "*"
cout<<"Product ="<<product<<endl;
}
void task3() // multiplication
{
    int N = (5278%10) + 1; // had fogotten a semicolon again
    for (int i=1; i<=N; i++)// initially didnt increment
    { 
 cout <<"9 x"<<i<<"="<<9*i<<endl;
    }

}
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();
int main()
{
task1();
task2();
task3();// forgot to call both task 2-3 in main 
    return 0;
}