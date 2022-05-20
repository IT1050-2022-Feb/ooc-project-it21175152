#include <iostream>
#include <string>
using namespace std;

class Question{
	private:
		int questionId;
		int examId;
		string question;
		string answer;
	public:
		void addQuestion();
		void getQuestionDetails();
		void deleteQuestion();
};
