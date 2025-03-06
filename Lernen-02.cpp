#include<iostream>
#include<math.h>

using namespace std;

main () {
	
	int num, result;
	
	try {
		cout << "Enter any number to give sqrt: ";
		cin >> num;
		
		if (num < 0) {
			throw runtime_error("Square root of negative is undefined");
		}
		else {
			result = sqrt(num);
		}
		
		cout << "The sqrt is " << result << endl;
	}
	
	catch (runtime_error& e) {
		cout << "Exception thrown: " << e.what() << endl;
	}
	
	return 0;
}