#include "company.h"
using namespace std;

void Company::displayCompanyDetails(){
	
	cout << "Company Details:" << endl << endl;
	
	cout << "- Company ID: " << comId << endl
	<< "- Company Name: " << name << endl
	<< "- Company Type: " << comType << endl
	<< "- Company Mobile: " << mob << endl
	<< "- Company Email: " << mail << endl
	<< "- Company Address: " << address << endl
	<< "- Username: " << comUserName << endl
	<< "- Password: " << comPassword << endl << endl;
}
