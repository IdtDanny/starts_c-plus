#include<iostream>
using namespace std;

main () {
	int num, rev, ldigit, temp;
	
	rev = 0;
	ldigit = 0;
	
	cout << "Enter the number to check: " << endl;
	cin  >> num;
	
	temp = num;
	
	while (temp != 0) {
		ldigit = temp % 10;
		rev = (rev * 10) + ldigit;
		temp = temp / 10;
	}
	
	cout << "The reverse is " << rev << endl;
	cout << "The number is " << num << endl;
	
	if (rev != num) 
		cout << num << " The number is not palindrome. Since, reverse is " << rev << endl;
	
	if (rev == num) 
		cout << num << " is the palindrome" << endl;
	
	return 0;	
}