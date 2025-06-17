#include <iostream> // Required to use input/output like cout and cin
using namespace std;

int main() {
    char repeatATM; // Used to ask if the user wants to repeat the ATM session

    // DO-WHILE LOOP: Run the ATM at least once, then ask if user wants to repeat
    do {
        int balance = 5000; // User’s starting balance
        int choice;         // Menu choice input by user
        int amount;         // Amount to withdraw or deposit

        // FOR LOOP: Display the last 5 fake transactions (static values for demo)
        cout << "\n----- Last 5 Transactions -----\n";
        for (int i = 5; i >= 1; i--) {
            // Pretend each transaction was Rs.(i * 300)
            cout << "Transaction " << i << ": Rs." << (i * 300) << endl;
        }

        // WHILE LOOP: Keep showing the ATM menu until user chooses to exit (option 4)
        while (true) {
            // Displaying the ATM options
            cout << "\n====== ATM Menu ======\n";
            cout << "1. Withdraw Money\n";
            cout << "2. Deposit Money\n";
            cout << "3. View Balance\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice; // User enters their menu choice

            // User chooses to withdraw money
            if (choice == 1) {
                cout << "Enter amount to withdraw: ";
                cin >> amount; // Get withdrawal amount

                // Check if user has enough balance and amount is valid
                if (amount <= balance && amount > 0) {
                    balance -= amount; // Subtract from balance
                    cout << "Withdrawn Rs." << amount << ". New Balance: Rs." << balance << endl;
                } else {
                    // If amount is more than balance or invalid
                    cout << "Insufficient balance or invalid amount.\n";
                }

            // User chooses to deposit money
            } else if (choice == 2) {
                cout << "Enter amount to deposit: ";
                cin >> amount; // Get deposit amount

                if (amount > 0) {
                    balance += amount; // Add to balance
                    cout << "Deposited Rs." << amount << ". New Balance: Rs." << balance << endl;
                } else {
                    // If amount is zero or negative
                    cout << "Invalid deposit amount.\n";
                }

            // User chooses to view balance
            } else if (choice == 3) {
                cout << "Current Balance: Rs." << balance << endl;

            // User chooses to exit the ATM session
            } else if (choice == 4) {
                cout << "Exiting ATM...\n";
                break; // Exit the while loop and go to do-while repeat check

            // User enters a number outside 1-4
            } else {
                cout << "Invalid choice. Please select from 1-4.\n";
            }
        }

        // Ask the user if they want to use the ATM again
        cout << "\nDo you want to use the ATM again? (y/n): ";
        cin >> repeatATM;

    } while (repeatATM == 'y' || repeatATM == 'Y'); // Repeat if user types 'y' or 'Y'

    // Final goodbye message after user decides not to repeat
    cout << "\nThank you for using the ATM. Goodbye!\n";
    return 0; // End of program
}
