#include<iostream>
using namespace std;

int main () {
	int num[5] = {4, 5, 3, 9, 2};
	int del_num, i;
	
	cout << "Enter Number to Delete: " << endl;
	cin  >> del_num;
	
	for(i = 0; i < 5; i++) {
//		cout << num[i] << " ";
		if (num[i] == del_num) {
			cout << endl << "Found at Index " << i;
			break;
			return 1;
		}
	}
	
	if (i >= 5) {
		cout << endl << "Cannot Found!";
	}
	
	
//	i = i - 1;
//	 
//	for(int j = i; j < 5-1; j++) {
//		cin >> num[i+1];
//	}
//	
//	for(int k = 0; k < 5; k++) {
//		cout << num[k] << " ";
//	}
//	for(int i = 0; i < 5; i++) {
//		cin >> num[i];
//	}
//	
//	for(int j = 0; j < 5; j++) {
//		cout << num[j] << " ";
//	}
	
	return 0;
}