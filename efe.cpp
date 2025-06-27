#include<iostream>
#include<string>
#include<windows.h>//add this for Sleep()
#include<cmath> // Add this at the top
#include<conio.h> // Add this for _getch()
using namespace std;
class InvestmentCalculator
{ public:
    void calculateFutureValue()
    { //1
        system("cls");
        double principal,rate; 
        int time;       
        cout<<"\t enter the principal amount: ";
        cin >> principal;
        cout<<"\t enter the rate of interest: ";
        cin >> rate;
        cout<<"\t enter the time in years: ";
        cin >> time;
        cout << "\n\tCalculating future value..." << endl;
        Sleep(1000);
        double futureValue = principal * pow((1 +( rate / 100)), time);
        cout << "\tFuture Value: " << futureValue << endl;
        int key;
        cout << "\tPress any key to continue..." << endl;
        key = _getch(); // Wait for user input
    }
    void calculatePresentValue()
    {//2
        system("cls");
        double futureValue, rate;
        int time;
        cout<<"\t enter the future value: ";
        cin >> futureValue;
        cout<<"\t enter the rate of interest: ";
        cin >> rate;
        cout<<"\t enter the time in years: ";
        cin >> time;
        cout << "\n\tCalculating present value..." << endl;
        Sleep(1000);
        double presentValue = futureValue / pow((1 + (rate / 100)), time);
        cout << "\tPresent Value: " << presentValue << endl;
        int key;
        cout << "\tPress any key to continue..." << endl;
        key = _getch(); // Wait for user input
    }
    void calculateFutureValueOfAnnuity()
    {//3
        system("cls");
        double payment, rate;
        int time;
        cout<<"\t enter the payment amount: ";
        cin >> payment;
        cout<<"\t enter the rate of interest: ";
        cin >> rate;
        cout<<"\t enter the time in years: ";
        cin >> time;
        cout << "\n\tCalculating future value of annuity..." << endl;
        Sleep(1000);
        double futureValue = payment * ((pow((1 + (rate / 100)), time) - 1) / (rate / 100));
        cout << "\tFuture Value of Annuity: " << futureValue << endl;
         int key;
        cout << "\tPress any key to continue..." << endl;
        key = _getch(); // Wait for user input
    }
    void calculatePresentValueOfAnnuity()
    {//4
        system("cls");
        double payment, rate;
        int time;
        cout<<"\t enter the payment amount: ";
        cin >> payment;
        cout<<"\t enter the rate of interest: ";
        cin >> rate;
        cout<<"\t enter the time in years: ";
        cin >> time;
        cout << "\n\tCalculating present value of annuity..." << endl;
        Sleep(1000);
        double presentValue = payment * ((pow((1 + (rate / 100)), time)-1) / (rate / 100)*pow((1 + (rate / 100)), time));
        cout << "\tPresent Value of Annuity: " << presentValue << endl;
        int key;
        cout << "\tPress any key to continue..." << endl;
        key = _getch(); // Wait for user input
       
        
    }
    void calculateAnnuityForLongTermInvestment()
    {//5
        system("cls");
        double futureValue, rate;
        int time;
        cout<<"\t enter the future value: ";
        cin >> futureValue;
        cout<<"\t enter the rate of interest: ";
        cin >> rate;
        cout<<"\t enter the time in years: ";
        cin >> time;
        cout << "\n\tCalculating annuity for long term investment..." << endl;
        Sleep(1000);
        double annuity = futureValue * (rate / 100) / (pow((1 + (rate / 100)), time) - 1);
        cout << "\tAnnuity for Long Term Investment: " << annuity << endl;
        int key;
        cout << "\tPress any key to continue..." << endl;
        key = _getch(); // Wait for user input
    }
    void calculateEMIForLoan()
    {//6
        system("cls");
        double principal, rate;
        int year, months;
        cout<<"\t enter the principal amount: ";
        cin >> principal;
        cout<<"\t enter the rate of interest: ";
        cin >> rate;
        cout<<"\t enter the time in years: ";
        cin >>year ;
        months = year * 12; // Convert years to months
        cout << "\n\tCalculating EMI for loan..." << endl;
        Sleep(1000);
        double monthlyRate = rate / (12 * 100);
        double emi = (principal * monthlyRate * pow((1 + monthlyRate), months)) / (pow((1 + monthlyRate), months) - 1);
        cout << "\tEMI for Loan: " << emi << endl;
        int key;
        cout << "\tPress any key to continue..." << endl;
        key = _getch(); // Wait for user input
    }

};
int main()
{
    InvestmentCalculator calculator;

    while(true)
    {  
        system("cls");
        cout<<"\n\t welcome to the value for money calculator\n"<<endl;
        cout<<"\t1. calculate the future value of an investment"<<endl;
        cout<<"\t2. calculate the present value of an investment"<<endl;
        cout<<"\t3. calculate the future value of an annuity"<<endl;
        cout<<"\t4. calculate the present value of an annuity"<<endl;
        cout<<"\t5. calculate the annuity for your long term investment"<<endl;
        cout<<"\t6. calculate the the EMI for your loan"<<endl;
        cout<<"\t7. exit the program\n"<<endl;
        cout<<"\t choose an option (1-7) : ";
        int choice;
        cin>>choice;
        if(choice < 1 || choice > 7)
        {
            return main(); // Exit the loop and terminate the program
        }
        else if(choice == 1)
        {  
            cout << "\tCalculating the future value of an investment..." << endl;
            Sleep(2000);
            calculator.calculateFutureValue(); // Call the method to calculate future value
        }
        else if(choice == 2)
        {
            cout << "\tCalculating the present value of an investment..." << endl;
            Sleep(2000);
            calculator.calculatePresentValue(); // Call the method to calculate present value
        }
        else if(choice == 3)
        {
            cout << "\tCalculating the future value of an annuity..." << endl;
            Sleep(2000);
            calculator.calculateFutureValueOfAnnuity(); // Call the method to calculate future value of annuity
        }
        else if(choice == 4)
        {
            cout << "\tCalculating the present value of an annuity..." << endl;
            Sleep(2000);
            calculator.calculatePresentValueOfAnnuity(); // Call the method to calculate present value of annuity
        }
        else if(choice == 5)
        {
            cout << "\tCalculating the annuity for your long term investment..." << endl;
            Sleep(2000);
            calculator.calculateAnnuityForLongTermInvestment(); // Call the method to calculate annuity for long term investment    
        }
        else if(choice == 6)
        {
            cout << "\tCalculating the EMI for your loan..." << endl;
            Sleep(2000);
            calculator.calculateEMIForLoan(); // Call the method to calculate EMI for loan
        }
        if(choice ==7)
        {  
            cout << "\tExiting the program." << endl;
            cout << "\tThank you for using the Value for Money Calculator!" << endl;
            Sleep(500);
            break; // Exit the loop and terminate the program
        }
        Sleep(2000);
    }
    // Clear the console screen
    
}
