# include <iostream>
using namespace std;

class user{	
	protected:
		string userName;
		string userMobile;
		string userEmail;
		string userAddress;
	public:
		void addUser(string usrName, string usrMob, string usrMail, string usrAddress){
			userName = usrName;
			userMobile = usrMob;
			userEmail = usrMail;
			userAddress = usrAddress;
		}
		void displayUserDetails(){
			cout << "User Name: " << userName << endl 
			<< "User Mobile: " << userMobile << endl
			<< "User Email: " << userEmail << endl
			<< "User Address" << userAddress << endl << endl;
		}
};
