#pragma once
#include <string>
#include <ctime>

public ref class Person {
public:
	int ExamNumber;
	System::String^ Name;
	System::String^ LastName;
	System::String^ UserName;
	System::String^ Password;

	Person() {};
	~Person() {

	}
};
public ref  class manager : public Person {
public:
	manager(System::String^ name, System::String^ lastName, System::String^ username, System::String^ password) {
		Name = name;
		LastName = lastName;
		UserName = username;
		Password = password;
	}
	~manager() {

	}
};
public  ref class student : public Person {
public:
	double Score = 0;
	System::String^ StudentId;
	student(System::String^ name, System::String^ lastName, System::String^ username, System::String^ studentId , System::String^ password) {
		
		Name = name;
		LastName = lastName;
		UserName = username;
		Password = password;
		StudentId = studentId;
	}

	~student() {

	}
};
public ref class Answers {
public:
	System::String^ StudentId;
	System::String^ ExplainTypeGivenAnswer;
	System::String^ TestTypeGivenAnwser;
	bool TrueFalseGivenAnswer;
	Answers(System::String^ StudentId, System::String^ ExplainOrTest) {
		ExplainTypeGivenAnswer = ExplainOrTest;
		TestTypeGivenAnwser = ExplainOrTest;
		this->StudentId = StudentId;
	}
	Answers(System::String^ StudentId, bool TrueFalseGivenAnswer) {
		this->TrueFalseGivenAnswer = TrueFalseGivenAnswer;
		this->StudentId = StudentId;
	}
	};

public ref class Question {
public:
	double QuestionScore;
	bool TestType = false;
	bool TrueFalseType = false;
	bool ExpalainType = false;
	System::String^ TestTypeOption1;
	System::String^ TestTypeOption2;
	System::String^ TestTypeOption3;
	System::String^ TestTypeOption4;
	System::String^ QuestionText;
	bool TrueFalseAnswer;
	System::String^ TestAnswer;
	System::Collections::Generic::List<Answers^> AnswerList;
	Question(bool test_type, bool true_false_type, bool explain_type, System::String^ question_text,double Question_Score) {
		TestType = test_type;
		TrueFalseType = true_false_type;
		ExpalainType = explain_type;
		QuestionText = question_text;
		QuestionScore = Question_Score;
	}
	Question(bool test_type, bool true_false_type, bool explain_type, System::String^ question_text, bool true_false_answer, double Question_Score) {
		TestType = test_type;
		TrueFalseType = true_false_type;
		ExpalainType = explain_type;
		QuestionText = question_text;
		TrueFalseAnswer = true_false_answer;
		QuestionScore = Question_Score;

	}
	Question(bool test_type, bool true_false_type, bool explain_type, System::String^ question_text, System::String^ test_answer, System::String^ TestTypeOption1, System::String^ TestTypeOption2, System::String^ TestTypeOption3, System::String^ TestTypeOption4, double Question_Score) {
		TestType = test_type;
		TrueFalseType = true_false_type;
		ExpalainType = explain_type;
		QuestionText = question_text;
		TestAnswer = test_answer;
		this->TestTypeOption1 = TestTypeOption1;
		this->TestTypeOption2 = TestTypeOption2;
		this->TestTypeOption3 = TestTypeOption3;
		this->TestTypeOption4 = TestTypeOption4;
		QuestionScore = Question_Score;
	}
};
public ref class Exam {
public:
	bool isExamined = false;
	System::String^ ExamID;
	System::String^ indexManager;
	int QuestionsNumber = 0;
	System::DateTime StartTime;
	System::DateTime EndTime;
	System::Collections::Generic::List<student^> AccessedStudentsList;
	System::Collections::Generic::List<student^> DeniedStudentsList;
	System::Collections::Generic::List<Question^> QuestionList;

	Exam(System::String^ exam_id, System::String^ index_manager) {
		ExamID = exam_id;
		indexManager = index_manager;
		QuestionsNumber++;
	}

};


public ref class Exams {
public:
	static System::Collections::Generic::List<Exam^> ExamList;
};
public ref class PersonList {
public:
	static System::Collections::Generic::List<manager^> ManagerList; //vector 
	static System::Collections::Generic::List<student^> StudentList;
};



