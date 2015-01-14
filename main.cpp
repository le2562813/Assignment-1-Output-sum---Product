/* 
 * File:   main.cpp
 * Author: Vincent Espada
 *
 * Created on January 14, 2015, 1:41 PM
 */
//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int op1,op2,sum=0,prod=1;
    //Prompt for the two operands
    cout<<"Press enter after every entry"<<endl;
    cout<<"Type in 2 numbers "<<endl;
    cin>>op1>>op2;
    //Calculate the sum and the product
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    //Output the results
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;
    return 0;
}