
# include <iostream>
# include <cmath>
# include <string>
using namespace std;

// Function to perform addition

void sum() {
	int a,b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "a + " << "b = " << (a+b) << endl;
}
// Function to generate a valid web link 
// input: Name of the website want to create the link
// output Link to the website
void linkGenerator() {
	string Userinput;
	cout << "Enter your webbase: ";
	cin >> Userinput;
	if (Userinput.substr(0,10) != "http://www.") {
		Userinput = "http://www."+Userinput;
	}
	if (Userinput.substr(Userinput.length() - 4,4) != ".com") {
		Userinput += ".com";
	}
	cout << "Link has created: "<<Userinput << endl;
}

int main() {
	int choice;
	do {
		cout << "Menu:" << endl;
		cout << "1.Problem 1" << endl;
		cout << "2.Problem 2" << endl;
		cout << "0.Exiting"<< endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			sum();
			break;
		case 2:
			linkGenerator();
			break;
		case 0:
			cout <<"Exiting.";
			break;
		default:
			cout <<"Invalid choice. Try again";
	} 
		cout << endl ;
	}	while (choice != 0);

	return 0;
}

