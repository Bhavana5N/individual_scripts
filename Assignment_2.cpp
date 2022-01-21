/*************************************************************************
Author: Upendra 

This program will demonstrate a variety of tools that can be used when
reading a data stream from user input

Input: 
		Various inputs from the user, indicated by prompts

Output: 
		Results of each example are written to the console

*************************************************************************/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    float init_bal;
    string char_sel;
    float dep_amt;
    float total_bal;
    float withdrawl_amt;
    float current_bal;


	//get function
	//Example Input:  A 25
    init_bal = 1000;
    
    
    cout << "Current balance $" << init_bal << endl;
    cout<< "*** Oiler Banking *** \n";
    cout<< " [D] Deposit \n";
    cout<< " [W] Withdraw \n";
    cout<< " [B] Balance \n";
    cout<< " [X] Done \n";
        
    
   /* if (    char_sel == "D" 
            ||  char_sel == "W"
            ||  char_sel == "B"
            ||  char_sel == "X")

         {  */ 

    current_bal = init_bal;
    while (1)
    
    {
        cout<<"\nEnter valid input from above: ";
        cin>> char_sel;
        if (char_sel == "D")
        {
            cout<< "Please enter the value between $0.01 and $5000: ";
            cin>>dep_amt;
            if(dep_amt >= 0.01
                && dep_amt <= 5000)
            {
                current_bal = current_bal + dep_amt;
                cout<<"New balance $"<< current_bal<< endl;
            }
            else
            {
                cout<<"An invalid amount has been entered";
            }
        }
        else if (char_sel == "W")
        {
            cout<< "The value must be a positive number, a multiple of 10 and less than or equal to the balance : ";
            cin>>withdrawl_amt;
            if( withdrawl_amt > 0
            && remainder (withdrawl_amt,10.0) == 0
            && withdrawl_amt <= current_bal )
            {
                current_bal = current_bal - withdrawl_amt;
                cout<<"new balance $"<< current_bal<< endl;
            }
            else
            {
                cout<<"Amount not a positive number or amount not a multiple of 10 or insufficient funds depending on the problem";
            }
            

        }
        else if (char_sel == "B")
        {
            cout<< "Your Current balance is $"<< current_bal<< endl;
        }
        else if (char_sel == "X")
        {
            cout<<" Your transaction is done. Thank You";
            break;
        }
        else
        {
            cout<<"Valid choice is not entered. Thank You";
            break;
        }
        
    }	
}
        