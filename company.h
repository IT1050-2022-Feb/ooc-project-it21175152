#include <iostream>
#include "user.h"
using namespace std;

class Company : public User{
	private:
		int comId;
		string comCategory;
		string comUserName;
		string comPassword;
	public:
		void addCompany(int cid, string cName, string cType, string cMob,
		string cMail, string cAddress, string cUserName, string cPassword)
			: addUser(string name, string mob, string mail, string address){
				comId = cid;
				comName = cName;
				comType = cType;
				comMobile = cMob;
				comEmail = cMail;
				comAddress = cAddress;
				comUserName = cUserName;
				comPassword = cPassword;
			}
		void displayCompanyDetails();
		void deleteCompany();
};
