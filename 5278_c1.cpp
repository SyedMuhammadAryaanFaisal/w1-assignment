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
void task3() // loops/ iterations//multiplication
{
    int N = (5278%10) + 1; // had fogotten a semicolon again
    for (int i=1; i<=N; i++)// initially didnt increment
    { 
 cout <<"9 x"<<i<<"="<<9*i<<endl;
    }

}
void task4()//  if else //5278 = even or odd
{
    int number=5278;
    if(number%2==0){
        cout<<number<<"is even"<<endl;
    }
    else{
        cout<<number<<"is odd"<<endl;
    }
} // no errors in code, went smoothly
void task5()//switch case//displaying months by input value of personalization num
{
int month= (5278%12) + 1;//got a bit confused here because i accidently put "/" instead of "% modulus"
switch (month){
    case 1:
    cout<<"january"<<endl;
    break;
    case 2:
    cout<<"february"<<endl;
    break;
    case 3:
    cout<<"march"<<endl;
    break;
    case 4:
    cout<<"april"<<endl;
    break;
    case 5:
    cout<<"may"<<endl;//forgot semicolon
    break;
    case 6:
    cout<<"june"<<endl;
    break;
    case 7:
    cout<<"july"<<endl;
    break;
    case 8:
    cout<<"august"<<endl;
    break;
    case 9:
    cout<<"september"<<endl;
    break;//didnt put "break" here 
    case 10:
    cout<<"october"<<endl;
    break;
    case 11:
    cout<<"november"<<endl;
    break;
    case 12:
    cout<<"december"<<endl;
    break;

}
}
void task6()//arrays//printing the third value
{
int numbers [5]={5,2,8,7,8};// initially i used "{}" instead of "[]"
for(int i=0;i<5;i++)
{
    cout<<"numbers["<<i<<"]="<<numbers[i]<<endl; //displaying "[]" as well for better understanding in output
}
cout<<"third value="<<numbers[2]<<endl;
}
void task7(string name, int marks)//functions and parameters//setting parameters
{
cout<<"welcome,"<<name<<endl;
cout<<" your marks are="<<marks<<endl;
}
void task8()//static local variables//have to call task 5 times
{
   static int count = 0;
 count++;
 cout<<"personalization number= 5278"<<endl;
 cout<<"function call count:"<< count<<endl;//forgot to display count here
 cout<<endl;  
}
void task9();
void task10();
int main()
{
task1();
task2();
task3();// forgot to call both task 2-3 in main 
task4();
task5();
task6();//forgot to recall again
task7("5278",78);//5278 as name and 78 as marks

task8();
task8();
task8();// recalling in main 5 times
task8();
task8();

return 0;
}