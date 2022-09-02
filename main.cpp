#include <iostream>
using namespace std;

int main() {

	string username, password, usernamePassword;		
	/*Declaring the username, passwordand username password variables combined
	with the string data type*/

	int lengthUname, lengthPasswrd;			
	///A useful variable for storing the character length of usernames and passwords

	cout << "Sign in" << endl << endl;						
	// Print input user data 
	
	cout << "Username : ";
	//A place for users to enter data 

	cin >> username;
	// Displays the data that has been entered by the user

	cout << "Password : ";
	//A place for users to enter data 
	cin >> password;
	// Displays the data that has been entered by the user

	//Counting the character length of the user name and password that has been entered
	lengthUname = username.length();
	lengthPasswrd = password.length();
	usernamePassword = username + password;		// this variable will store username and password data into one package

	system("cls"); // functions to clean the screen on the program to be run

	cout << lengthUname << username << lengthPasswrd << password << endl << endl;

	//function to print username
	// this for loop will count the number of characters for the username then print it for the number of characters < lengthUser.
	cout << "\n Username : ";
	for (int i = 0; i < (lengthUname); i++) {
		cout << usernamePassword[i];

		//if the number of usernames is met then the function will print the password
		if (i == lengthUname - 1) {
			cout << "\n Password : ";
			/* in order for the for loop to stop, the number of characters for this password must be less than the number of characters
			from the username and password because the string starts at 0*/
			for (int j = i; j < (lengthUname + lengthPasswrd); j++) {
				/* because the characters for the username have already been printed, to print the password must be given + 1 so that it doesn't happen
				repeating characters in front of the password
				*/
				cout << usernamePassword[j + 1];
			}
		}
	}

	// so that the data is not saved then the variable will be declared to be 0 again or empty.
	usernamePassword = password = "";
	lengthUname = lengthPasswrd = 0;

	cout << endl << endl;

	system("Pause");
	return 0;
}
