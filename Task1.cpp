#include <iostream>
using namespace std;
//first I define function for Addition
int add(){
    //then I take two numbers from the user
int num1, num2;
int sum;
cout<<"Enter the value of num1:";
cin>>num1;
cout<<"Enter the value of num2:";
cin>>num2;
sum=num1+num2;
cout<<"The sum is: " <<sum; //the sum will show to the user
}
//I define a function for subtraction, and take two numbers from user
int sub(){
int num1, num2;
int sub;
cout<<"Enter the value of num1:";
cin>>num1;
cout<<"Enter the value of num2:";
cin>>num2;
sub=num1-num2; //I define sub here
cout<<"The subtraction is: " <<sub;//the subtraction will show to the user here
}
//I difine a function for multiplication and take two numbers from the user 
int mul(){
int num1, num2;
int mul;
cout<<"Enter the value of num1:";
cin>>num1;
cout<<"Enter the value of num2:";
cin>>num2; 
mul=num1*num2;//I define multiplication here
cout<<"The multiplication is: " <<mul;
}
//I define a function for division 
int div(){
int num1, num2;
int div;
cout<<"Enter the value of num1:";
cin>>num1;
cout<<"Enter the value of num2:";
cin>>num2;
div=num1/num2;
cout<<"The division is: " <<div;
if (num2!=0){//If the user divides a number by zero then he will get infinity as the answer
    cout<<div;
}
else{
    cout<<"infinity";
}
}
int exit(){
    cout<<"EXIT";
}
//I show the menu for the operation to the user and he will choose the operation from the user
int main(){
    cout<<"calculator menu:"<<endl;
    cout<<"1. Addition:"<<endl;
    cout<<"2. subtraction:"<<endl;
    cout<<"3. multiplication:"<<endl;
    cout<<"4. division:"<<endl;
    cout<<"5. EXIT:"<<endl;

    int choose;
    cout<<" Please Choose the operator you want :";
    cin>>choose;
//I use switch to operate further
    switch (choose){
case 1:
     cout<< add();//case 1 will give addition 
     break;
case 2://case 2 will give subtraction 
     cout<< sub();
     break;
case 3://case 3 will give multiplication
     cout<< mul();
     break;
case 4://case 4 will give division
     cout<< div();
     break;
case 5://case 5 will give EXIT as an output
     cout<< exit();
     break;
    
    }
}
