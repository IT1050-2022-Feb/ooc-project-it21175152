#include "question.h"

void Question::addQuestion(){
	
	cout << "1. Enter Question ID: ";
	cin >> questionId;
	cout << "2. Enter Exam ID: ";
	cin >> examId;
	cout << "3. Question: ";
	cin >> question;
	cout << "4. Answer: ";
	cin >> answer;
}

void Question::getQuestionDetails(){
	
	cout << endl;
	
	cout << "Question Details:" << endl << endl;
	
	cout << "1. Question ID: " << questionId << endl
	<< "2. Exam ID: " << examId << endl
	<< "3. Question: " << question << endl
	<< "4. Answer: " << answer << endl;
}
