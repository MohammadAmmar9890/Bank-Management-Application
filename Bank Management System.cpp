// Bank Management System

#include <iostream>
using namespace std;

class bank
{
    // Store user account details
    char name[100], address[100], account_type;
    int balance;

public:
    void open_account();
    void deposite();
    void withdraw();
    void display_account();
};
void bank::open_account()
{
    // Taking name from user
    cout << "Enter your full name: ";
    cin.ignore();
    cin.getline(name, 100);
    // Taking address from user
    cout << "Enter your address: ";
    cin.ignore();
    cin.getline(address, 100);
    // Taking account type (Saving or Current)
    cout << "What type of account you want to open Saving(s) or Current(c): ";
    cin >> account_type;
    // First Deposite after open account
    cout << "Enter amount for deposite: ";
    cin >> balance;
    cout << "\n\tYour account has successfully created\n";
}
void bank::deposite()
{
    // Taking deposite amount from user
    int deposite_amount;
    cout << "Enter deposite amount: ";
    cin >> deposite_amount;
    // Add deposite amount into your current balance
    balance += deposite_amount;
    cout << "Your total balance: " << balance << "\n";
}
void bank::withdraw()
{
    // Taking withdraw amount from user
    float withdraw_amount;
    cout << "Enter withdraw amount: ";
    cin >> withdraw_amount;
    // Subtract withdraw amount into your current balance
    balance -= withdraw_amount;
    cout << "Total balance: " << balance << "\n";
}
void bank::display_account()
{
    // Display account details
    cout << "Your full name: " << name << "\n";
    cout << "Your address: " << address << "\n";
    cout << "Your account type: " << account_type << "\n";
    cout << "Your balance: " << balance << "\n";
}

int main()
{
    int option;
    // class object
    bank obj;

    do
    {
        cout << "\n\t\tBank Account\n\n";
        cout << "1. Open account\n2. Deposite\n3. Withdraw\n4. Display account\n5. Exit\nSelect the option from above: ";
        cin >> option;

        switch (option)
        {
        case 1:
            // Call open_account() function from bank class for account opening
            cout << "\n1. Open account\n";
            obj.open_account();
            break;
        case 2:
            // Call deposite() function from bank class for deposite
            cout << "\n2. Deposite\n";
            obj.deposite();
            break;
        case 3:
            // Call withdraw() function from bank class for withdraw
            cout << "\n3. Withdraw\n";
            obj.withdraw();
            break;
        case 4:
            // Call display_account() function from bank class for display account details
            cout << "\n4. Display details\n";
            obj.display_account();
            break;
        case 5:
            // Terminate the program
            exit(1);
        default:
            // When user enterd wrong key
            cout << "\nThis is not exist try again! \n";
        }
    } while (option != 5); // When option == 5 means it will terminate

    return 0;
}