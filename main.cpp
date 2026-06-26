#include<iostream>
using namespace std;

//function for additon
double add(double a, double b){
    return a+b;
} 

//function for subtraction
double sub(double a, double b){
    return a-b;
}

//function for multiplication
double mult(double a, double b){
    return a*b;
}

//function for division
double div(double a , double b){
    if (b == 0)
    {
        cout<<"Error : Divide by zero is not valid\n";
        return 0;
    }
    return a/b;
}

int main(){
    double num1, num2;
    int choice;
    while (true)
    {
        cout<<"----CALCULATOR----\n";
        cout<<"1.Addition\n";
        cout<<"2.Subtraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n";
        cout<<"5.Exit\n";
        
        cout<<"Enter your choice : ";
        cin>>choice;

        if (choice == 5)
        {
           cout<<"CALCULATOR CLOSED\n";
           break;  //immidietly closed 
        }
        if (choice < 1 || choice > 5)
        {
            cout<<"Invalid choice\n";
            continue;
        }

        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;

        switch (choice){
            case 1:
            cout<<"Result = "<<add(num1, num2)<<endl;
            break;

            case 2:
            cout<<"Result = "<<sub(num1, num2)<<endl;
            break;

            case 3:
            cout<<"Result = "<<mult(num1, num2)<<endl;
            break;

            case 4:
            cout<<"Result = "<<div(num1, num2)<<endl;
            break;

            default:
            cout<<"Invalid Choice!\n";
        }
    }
    return 0;
}
