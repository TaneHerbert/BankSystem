#include <iostream>

using namespace std;

void intro();
void getAccountNumber(int *);

int main()
{
    system("cls");
    intro();

    int userOption = {};
    int accountNumber = 0;
    int *accountNumberPointer = &accountNumber;

    do
    {
        system("cls");
        cout << "\tMAIN MENU";
        cout << "\n\n\t01. NEW ACCOUNT";
        cout << "\n\n\t02. DEPOSIT AMOUNT";
        cout << "\n\n\t03. WITHDRAW AMOUNT";
        cout << "\n\n\t04. BALANCE ENQUIRY";
        cout << "\n\n\t05. ALL ACCOUNT HOLDER LIST";
        cout << "\n\n\t06. CLOSE AN ACCOUNT";
        cout << "\n\n\t07. MODIFY AN ACCOUNT";
        cout << "\n\n\t08. EXIT";
        cout << "\n\n\tSelect Your Option Then Press Enter (1-8) ";
        cin >> userOption;
        system("cls");

        switch (userOption)
        {
        case 1:
            // write_account();
            break;
        case 2:
            getAccountNumber(accountNumberPointer);
            break;
        case 3:
            getAccountNumber(accountNumberPointer);
            break;
        case 4:
            getAccountNumber(accountNumberPointer);
            break;
        case 5:
            getAccountNumber(accountNumberPointer);
            break;
        case 6:
            getAccountNumber(accountNumberPointer);
            break;
        case 7:
            getAccountNumber(accountNumberPointer);
            break;
        case 8:
            cout << "\tThanks for using bank managemnt system" << endl;
            break;
        default:
            break;
        }
    } while (userOption != 8);
    return 0;
}

void intro()
{
    cout << "--------------------------" << endl;
    cout << "\n\t  BANK";
    cout << "\n\n\tMANAGEMENT";
    cout << "\n\n\t SYSTEM";
    cout << "\n\n--------------------------" << endl;
    cout << "\nMADE BY : Tane Herbert";
    cout << "\n\nPress ENTER To Continue";
    cin.get();
}

void getAccountNumber(int *accountNumber)
{
    cout << "\tEnter your account No. : ";
    cin >> *accountNumber;
    while (std::cin.fail() || *accountNumber <= 0)
    {
        system("cls");
        cout << "\tPlease enter a valid account No. : ";
        cin.clear();
        cin.ignore(256, '\n');
        std::cin >> *accountNumber;
    }
}