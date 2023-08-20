#include <iostream>

using namespace std;

int* loan_amount = new int;
int* months = new int;
int* interest_rate = new int;
int* down_payment = new int;

int* amount_to_pay = new int;
int* profit = new int;

int main()
{
    cout << "Loan calculator" << endl;
    cout << "Loan amount: ";
    cin >> *loan_amount;
    cout << "Months to pay over: ";
    cin >> *months;
    cout << "Interest rate (%): ";
    cin >> *interest_rate;
    cout << "Down payment (%): ";
    cin >> *down_payment;

    *amount_to_pay = (*loan_amount - *down_payment) + (*loan_amount / *interest_rate);
    *profit = *amount_to_pay - *loan_amount;

    cout << endl;

    cout << "The person would pay " << *loan_amount / *down_payment << " pounds as a down payment." << endl;
    cout << "The person would then pay " << *amount_to_pay / *months << " pounds every month for the next " << *months << " months." << endl;
    cout << "Since they would be paying you " << *amount_to_pay << " pounds you would make a " << *profit << " pounds profit." << endl;
    cout << "In total you would make a " << *amount_to_pay - *loan_amount << " pounds profit." << endl;

    delete loan_amount;
    delete months;
    delete interest_rate;
    delete down_payment;
    delete amount_to_pay;
}