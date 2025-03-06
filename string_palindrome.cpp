#include<iostream>
#include<string.h>
using namespace std;

main () {
	string word;
	
	cout << "Enter the string to check: "  << endl;
	cin >> word;
	
	int beg, len, end, mid, flag;
	
	len = word.length();
	
	beg = 0;
	
	flag = 0;
	
	end = len - 1;
	
	mid = (end - beg) / 2;
	
	while (len >= 0) {
		if (word[beg] == word[end]) {
			beg =+ 1;
			end =- 1;
			mid = (end - beg) / 2;
			len = mid;
			flag = 1;
		}
		else {
			len = -1;
			flag = 0;
		}
	}
	
	if (flag == 1) {
		cout << word << " Is Palindrome." << endl;
	}
	
	else {
		cout << word << " Is not Palindrome." << endl;
	}

	return 0;
}