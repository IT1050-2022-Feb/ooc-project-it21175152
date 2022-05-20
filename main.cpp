#include <iostream>
#include <string>
#include "company.cpp"
#include "backup.cpp"
#include "selection.cpp"
#include "membership.cpp"
#include "question.cpp"
using namespace std;

int main(){
	
	// Backup Class	
	Backup b1;
	int bid;
	string bDate, bTime, bFormat, bStorage, bLocation;
	
	cout << "1. Enter Backup ID: ";
	cin >> bid;
	cout << "2. Enter Backup Date: ";
	cin >> bDate;
	cout << "3. Enter Backup Time: ";
	cin >> bTime;
	cout << "4. Backup Format (xlsx, docs, pdf): ";
	cin >> bFormat;
	cout << "5. Backup Storage (MB,KB,GB): ";
	cin >> bStorage;
	cout << "6. Backup Location (Cloud, Computer): ";
	cin >> bLocation;
	
	cout << endl;
	
	b1.setBackupDetails(bid, bDate, bTime, bFormat, bStorage, bLocation);
	b1.getBackupDetails();
	
	cout << endl;/
	
	// Selection Class
	Selection s1;
	int sId, appId;
	float qMark, eMark, finalMark;
	string sStatus;
	
	cout << "1. Enter Selection ID: ";
	cin >> sId;
	cout << "2. Enter Applicant ID: ";
	cin >> appId;
	cout << "3. Enter Qualification Mark: ";
	cin >> qMark;
	cout << "4. Enter Exam Mark: ";
	cin >> eMark;
	
	cout << endl;
	
	finalMark = s1.calculateFinalMark(qMark, eMark);
	
	sStatus = s1.getSelectStatus(finalMark);
	
	s1.setSelectionDetails(sId, appId, qMark, eMark, sStatus);
	
	s1.getSelectionDetails(); 
	
	cout << endl;
	
	// Membership Class
	Membership m1;
	string become, memType, payMeth;
	int memId;

	cout << "Enter member ID: ";
	cin >> memId;
			
	cout << endl;
			
	memType = m1.selectMembershipType(memType);
	payMeth = m1.selectPaymentMethod(payMeth);
	m1.setMembershipDetails(memId, memType, payMeth);
	m1.getMembershipDetails(); 
	
	cout << endl; 
	
	// Question Class
	Question quiz1, quiz2;
	
	quiz1.addQuestion();
	quiz1.getQuestionDetails(); 
	
	cout << endl;
	
	quiz2.addQuestion();
	quiz2.getQuestionDetails();*/
	
	// Company Class
	Company c1;
	int cid;
	string cName, cType, cMob, cMail, cAddress, cUserName, cPassword;
	
	cout << "1. Enter Company ID: ";
	cin >> cid;
	cout << "2. Company Name: ";
	cin >> cName;
	cout << "3. Enter Company Type: ";
	cin >> cType;
	cout << "4. Enter Company Mobile: ";
	cin >> cMob;
	cout << "5. Enter Company Email: ";
	cin >> cMail;
	cout << "6. Enter Company Address: ";
	cin >> cAddress;
	cout << "7. Enter Company Username: ";
	cin >> cUserName;
	cout << "8. Enter Company Password: ";
	cin >> cPassword;
	
	cout << endl;
	
	c1.addCompany(cid, cName, cType, cMob, cMail, cAddress, cUserName, cPassword);
	c1.displayCompanyDetails();

	return 0;
}
