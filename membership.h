#include <iostream>
#include <string>
using namespace std;

class Membership{
	private:
		int memberId;
		string memberType;
		string paymemtMethod;
		
	public:
		void setMembershipDetails(int memId, string memType, string payMeth);
		void getMembershipDetails();
		string selectMembershipType(string memType);
		string selectPaymentMethod(string payMeth);
};
