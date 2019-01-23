#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

struct BadLengthException : public exception {
	public:
		BadLengthException(int n) { this->b = n; }

		const char * what() const throw () {
			if (this->b < 1) {
				return "0";
			} else if (this->b < 2){
				return "1";
			} else if (this->b < 3){
				return "2";
			} else if (this->b < 4){
				return "3";
			} else if (this->b < 5){
				return "4";
			}
			return "5";		
		}

	private:
		int b;
};



bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
