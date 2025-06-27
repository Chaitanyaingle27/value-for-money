#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
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
        cout<<"\t choose an option (1-7) ";
        int choice;
        cin>>choice;
        if(choice < 1 || choice > 7)
    {
            cout << "Exiting the program." << endl;
            return main(); // Exit the loop and terminate the program
        }
    else if(choice == 1)
        {
            cout << "Calculating the future value of an investment..." << endl;
            // Future value calculation logic here
        }
        else if(choice == 2)
        {
            cout << "Calculating the present value of an investment..." << endl;
            // Present value calculation logic here
        }
        else if(choice == 3)
        {
            cout << "Calculating the future value of an annuity..." << endl;
            // Future value of annuity calculation logic here
        }
        else if(choice == 4)
        {
            cout << "Calculating the present value of an annuity..." << endl;
            // Present value of annuity calculation logic here
        }
        else if(choice == 5)
        {
            cout << "Calculating the annuity for your long term investment..." << endl;
            // Annuity calculation logic here
        }
        else if(choice == 6)
        {
            cout << "Calculating the EMI for your loan..." << endl;
            // EMI calculation logic here
        }
        if(choice ==7)
        {  Sleep(5000);
            cout << "Exiting the program." << endl;
            cout << "Thank you for using the Value for Money Calculator!" << endl;
            break; // Exit the loop and terminate the program
        }
        Sleep(2000);
    }
    // Clear the console screen
    
}
