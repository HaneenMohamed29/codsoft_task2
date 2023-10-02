#include <iostream>

using namespace std;

int main()
{
    string answer;
    int number1,number2,sum,subtraction,devision,product;
    char operation;
 while(1){
    cout<<"please choose the operation (+,-,*,/)"<<endl;
     cin>>operation;
    switch(operation)
    {
case '+':
    cout<<"Enter the first number:"<<endl;
    cin>>number1;
    cout<<"Enter the second number:"<<endl;
    cin>>number2;
    sum=number1+number2;
    cout<<number1<<"+"<<number2<<"="<<sum<<endl;
    break;
case'-':
    cout<<"Enter the first number:"<<endl;
    cin>>number1;
    cout<<"Enter the second number:"<<endl;
    cin>>number2;
    subtraction=number1-number2;
    cout<<number1<<"-"<<number2<<"="<<subtraction<<endl;
    break;
case'*':
    cout<<"Enter the first number:"<<endl;
    cin>>number1;
    cout<<"Enter the second number:"<<endl;
    cin>>number2;
    product=number1*number2;
    cout<<number1<<"*"<<number2<<"="<<product<<endl;
    break;
case'/':
    cout<<"Enter the first number:"<<endl;
    cin>>number1;
    cout<<"Enter the second number:"<<endl;
    cin>>number2;
    if(number2==0)
    {
        cout<<"Math error, the denominator cannot be zero, please enter another number:"<<endl;
        cin>>number2;
        devision=number1/number2;
    }
    else
        devision=number1/number2;
 cout<<number1<<"/"<<number2<<"="<<devision<<endl;
    break;
default:
    cout<<"wrong input "<<endl;

    }

cout<<"Do you want to make another operation?"<<endl;
cin>>answer;
if(answer=="yes")
    {
    continue;
   }
else if(answer=="no")
{
     break;
}

}

    return 0;
}
