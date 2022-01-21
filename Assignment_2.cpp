/*************************************************************************
Author: Upendra 

This program will help the Oiler Bank get their ATM up and running.

Input: 
		[D] Deposit
        [W] Withdraw
        [B] Balance
        [X] Done

Output: 
		All the banking options from the input can be performed.

*************************************************************************/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float init_bal;
    string char_sel;
    float dep_amt;
    float withdrawl_amt;
    float current_bal;

    init_bal = 1000; 
    cout << "Current balance $" << init_bal << endl;
    
    current_bal = init_bal;
    cout<< fixed<< setprecision(2);

    /* While loop is used to run the valid options until X or invalid value is entered to exit the loop */
    while (1)
    { 
        cout<< "\n*** Oiler Banking *** "<< endl;
        cout<< " [D] Deposit "<< endl;
        cout<< " [W] Withdraw "<< endl;
        cout<< " [B] Balance "<< endl;
        cout<< " [X] Done "<< endl;
        cout<<"\nEnter valid input from above: ";
        cin>> char_sel;
        /* Deposit amount should be within givin limits */
        if (char_sel == "D")
        {
            cout<< "Please enter the value between $0.01 and $5000: ";
            cin>>dep_amt;
            if  (   dep_amt >= 0.01
                &&  dep_amt <= 5000
                )
            {
                current_bal = current_bal + dep_amt;
                cout<< "New balance is $"<< current_bal<< endl;
            }
            else
            {
                cout<<"An invalid amount has been entered"<< endl;
            }
        }
        /* Withdrawl amount has conditions like positive value, multiple of 10's and within current balance limit */
        else if (char_sel == "W")
        {
            cout<< "The value must be a positive number, a multiple of 10 and less than or equal to the balance : ";
            cin>> withdrawl_amt;
            if(withdrawl_amt <= 0)
            {
                cout<< "Amount not a positive number"<< endl;
            }
            else if(remainder (withdrawl_amt,10.0) != 0)
            {
                cout<< "Amount is not a multiple of 10"<< endl;
            }
            else if(withdrawl_amt >= current_bal)
            {
                cout<< "Insufficiant funds in your account"<< endl;
            }
            else
            {
                current_bal = current_bal - withdrawl_amt;
                cout<< "New balance is $"<< current_bal<< endl;
            }
        }
        else if (char_sel == "B")
        {
            cout<< "Your Current balance is $"<< current_bal<< endl;
        }
        else if (char_sel == "X")
        {
            cout<< "Thank You for using Oiler Bank";
            break;
        }
        else
        {
            cout<< "Valid choice is not entered. Thank You";
            break;
        }
        
    }	
}
        