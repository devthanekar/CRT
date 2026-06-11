#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== BANK HEIST ADVENTURE =====\n";
    cout << "You are standing outside a bank.\n";
    cout << "1. Enter through front door\n";
    cout << "2. Enter through back door\n";
    cout << "Choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "\nA guard spots you!\n";
        cout << "1. Fight\n";
        cout << "2. Run\n";
        cin >> choice;

        if(choice == 1)
        {
            cout << "\nYou defeat the guard.\n";
            cout << "You reach the vault.\n";

            cout << "Guess the vault code (1234): ";
            int code;
            cin >> code;

            if(code == 1234)
            {
                cout << "\nVault Opened!\n";
                cout << "You escaped with the money.\n";
                cout << "YOU WIN!\n";
            }
            else
            {
                cout << "\nWrong code!\n";
                cout << "Police arrive.\n";
                cout << "GAME OVER!\n";
            }
        }
        else
        {
            cout << "\nYou escaped but got no money.\n";
            cout << "GAME OVER!\n";
        }
    }
    else if(choice == 2)
    {
        cout << "\nYou sneak in successfully.\n";
        cout << "You find the vault.\n";

        cout << "1. Open Vault\n";
        cout << "2. Search Office\n";
        cin >> choice;

        if(choice == 1)
        {
            cout << "\nThe alarm goes off!\n";
            cout << "Police catch you.\n";
            cout << "GAME OVER!\n";
        }
        else
        {
            cout << "\nYou find the vault password.\n";
            cout << "You open the vault and escape.\n";
            cout << "YOU WIN!\n";
        }
    }
    else
    {
        cout << "Invalid Choice!\n";
    }

    return 0;
}
