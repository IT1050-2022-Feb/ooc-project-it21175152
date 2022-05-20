#include "membership.h"

void Membership::setMembershipDetails(int memId, string memType, string payMeth){
	
	memberId = memId;
	memberType = memType;
	paymemtMethod = payMeth;
}

void Membership::getMembershipDetails(){
	
	cout << "Membership Details:" << endl << endl;
	
	cout << "1. Member ID: " << memberId << endl
	<< "2. Member Type: " << memberType << endl
	<< "3. Payment Method: " << paymemtMethod << endl;
}

string Membership::selectMembershipType(string memType){
	
	cout << "MEMBERSHIP PLANS: BASIC | STANDARD | PREMIUM" << endl << endl;
	
	cout << "Please select your Membership Plan (B | S | P): ";
	cin >> memType;
	cout << endl;
	
	return memType;
}

string Membership::selectPaymentMethod(string payMeth){
	
	cout << "PAYMENT METHODS: CREDIT CARD | DIPOSIT | PAYPAL" << endl << endl;
	
	cout << "Please select your Payment Method (C | D | P): ";
	cin >> payMeth;
	cout << endl;
	
	return payMeth;
}
