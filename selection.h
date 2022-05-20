#include <iostream>
#include <string>
using namespace std;

class Selection{
	private:
		int selectId;
		int applicantId;
		float qualificationMark;
		float examMark;
		string selectStatus;
	//	float finalMark;
		
	public:
		void setSelectionDetails(int sId, int appId, float qMark, float eMark, string sStatus);
		void getSelectionDetails();
		float calculateFinalMark(float qMark, float eMark);
		string getSelectStatus(float finalMark);
};
