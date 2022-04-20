/*
 *
 * To change the behaviour as the question asks, the insertion operator of 
 * ostream object has to be overloaded. This is done as follows. So the operator
 * takes a stream object reference and an Account object to format it and return
 * it to another stream
 */

std::ostream& operator << (std::ostream& out, Account acc)
{
	return (out << acc.account_no << ": " << acc.name << " - " << acc.balance);
}