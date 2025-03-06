// Exempting negative number
#include<iostream>
using namespace std;

main () {
	int num;
	
	try{
		cout << "Enter any number between 0 and 100: ";
		cin >> num;
		
		if (num < 0) {
			throw 20;
		}
		
		else if (num > 100) {
			throw range_error("You have gone out of the range!");
		}
		
		else {
			cout << "Correct choice number: " << num << endl;
		}
	}
	catch (int error_num) {
		cout << "Exception thrown: " << error_num << endl;
	}
	
	catch(range_error& e) {
		cout << "Exception thrown: " << e.what() << endl;
	}
	
	return 0;
}