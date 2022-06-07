#include <iostream>

//Lets say that you have a struct as follows:
struct Account
{
    double balance;
    int account_no;
    std::string name;
};

/* 
 * Can you change the behaviour of ostream to format the Account struct as the following output: 
 * <account_no>: <name> - <balance>
 * 
 * For example:
 * {
 *      Account acc{102.5, 10, "xubeyb aydin"};
 *      std::cout << acc << "\n";
 * }
 * Must give the output "10: xubeyb aydin - 102.5"
*/

int main()
{
    std::cout << Account{102.5, 10, "xubeyb aydin"};
}