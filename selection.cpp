#include <iostream>
#include "selection.h"
using namespace std;

void Selection::setSelectionDetails(int sId, int appId, float qMark, float eMark, string sStatus){
	
	selectId = sId;
	applicantId = appId;
	qualificationMark = qMark;
	examMark = eMark;
	selectStatus = sStatus;
}

void Selection::getSelectionDetails(){
	
	cout << "Selection Details:" << endl << endl;
	
	cout << "- Selection ID: " << selectId << endl
	<< "- Applicant ID: " << applicantId << endl
	<< "- Qualification Mark: " << qualificationMark << endl
	<< "- Exam Mark: " << examMark << endl
	<< "- Select Status: " << selectStatus << endl << endl;
}

float Selection::calculateFinalMark(float qMark, float eMark){
	
	float finalMark = (qMark + eMark) / 2.0;
	return finalMark;
}

string Selection::getSelectStatus(float finalMark){
	
	string sStatus;
	
	if(finalMark >= 75){
		
		sStatus = "Selected";
	}
	else{
		
		sStatus = "Not Selected";
	}
	
	return sStatus;
}
