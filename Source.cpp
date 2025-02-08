


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//declare variables
		string month;
		int year;
		double total, sales, taxCounty, taxState, taxTotal;

			//declare values
		const double State_Tax = 0.04;
		const double County_Tax = .02;
		const double Total_Tax = .06;

	//Input from user
		cout << "Enter the month: ";
		cin >> month;
		cout << "Enter the year: ";
		cin >> year;
		cout << "Enter the total amount of money collected : $";
		cin >> total;

	//Calculate tax and sales
		sales = total / (1 + Total_Tax);
		taxTotal = total - sales;
		taxState = sales * State_Tax;
		taxCounty = sales * County_Tax;

	//Output monthly report
		cout << "\nMonthly Sales Report\n";
		cout << "Month: " << month << " " << year << "\n";
		cout << fixed << setprecision(2);
		cout << "Total Collected: $" << total << "\n";
		cout << "Sales: $" << sales << "\n";
		cout << "County sales tax: $" << taxCounty << "\n";
		cout << "State sales tax: $" << taxState << "\n";
		cout << "Total sales tax: $" << taxTotal << "\n";

		return 0;




































}