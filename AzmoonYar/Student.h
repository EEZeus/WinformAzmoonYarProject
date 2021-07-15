#pragma once

#include "PersonInfo.h"
#include <msclr\marshal_cppstd.h>
#include <vector>


namespace AzmoonYar {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{

	private: int first_submition = 1;
	private: int exam_index ;
	public: int current_question_index = 0;
	public: int user_student_index;
	public: int exam_student_index;
	public:System::String^ username;
	private: bool dragging;
	private: System::Windows::Forms::Panel^ PanelStudentSignUp;
	private: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Button^ button5;
	private:
	private: System::Windows::Forms::Panel^ panel6;
	public:
	
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ TextBoxStudentLastName;
	private:

	private:
	private: System::Windows::Forms::Panel^ panel5;
	public:
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ TextBoxStudentName;
	private:

	private:
	private: System::Windows::Forms::Panel^ panel4;
	public:
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ TextBoxStudentSignUpPassword;
	private:

	private:
	private: System::Windows::Forms::Panel^ panel7;
	public:
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ TextBoxStudentSignUpUsername;
	private:

	private: System::Windows::Forms::Panel^ panel3;
	public:
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ TextBoxStudentId;
	private: System::Windows::Forms::Panel^ PanelStudentDashboard;
	public:

	public:


	private:

	private:
	public:


	private:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ ButtonStudentExams;
	public:


	private: System::Windows::Forms::Button^ ButtonStudentExamMarks;
	public: System::Windows::Forms::Panel^ PanelStudentExams;
	private:

	public:
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ textBoxShowExams;
	private: System::Windows::Forms::Button^ ButtonExamIDGetter;
	private: System::Windows::Forms::TextBox^ TextBoxExamIDGetter;
	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Panel^ PanelExamParticipation;
	private:
	public: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ TextBoxExamParticipationExamID;
	public:
	private: System::Windows::Forms::Timer^ TimerExamDuration;
	private: System::Windows::Forms::Button^ ButtonNextQuestion;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ TextBoxShowExamID;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TextBoxExpalainAnswer;

	private: System::Windows::Forms::TextBox^ TextBoxQuestionText;
	private: System::Windows::Forms::TextBox^ TextBoxQuestionNumber;




	public: System::Windows::Forms::Panel^ PanelTestiAnswers;
	private:


	public: System::Windows::Forms::RadioButton^ RadioAnswerOption2Truth;

	public: System::Windows::Forms::RadioButton^ RadioAnswerOption1Truth;


	public:


	private: System::Windows::Forms::Label^ label15;

	private:


public: System::Windows::Forms::TextBox^ TextBoxAnswerOption1;

private: System::Windows::Forms::Label^ label18;
public:
private: System::Windows::Forms::Label^ label17;
public: System::Windows::Forms::TextBox^ TextBoxAnswerOption4;
private:
private: System::Windows::Forms::Label^ label13;
public:
public: System::Windows::Forms::RadioButton^ RadioAnswerOption4Truth;
private:
public: System::Windows::Forms::TextBox^ TextBoxAnswerOption3;
private: System::Windows::Forms::Label^ label12;
public:
public: System::Windows::Forms::RadioButton^ RadioAnswerOption3Truth;
private:
public: System::Windows::Forms::TextBox^ TextBoxAnswerOption2;
private: System::Windows::Forms::Button^ ButtonEndExam;
public:

private: System::Windows::Forms::Button^ ButtonPrivious;
private: System::Windows::Forms::Button^ ButtonSubmitAnswer;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::DateTimePicker^ DateTimeNow;
private: System::Windows::Forms::DateTimePicker^ DateTimeEndExam;
private: System::Windows::Forms::Panel^ panelTrueFalseAnswer;
private: System::Windows::Forms::RadioButton^ RadioButtonTrueFalseAnswerTrue;
private: System::Windows::Forms::RadioButton^ RadioButtonTrueFalseAnswerFalse;
private: System::Windows::Forms::Button^ ButtonHide;
private: System::Windows::Forms::TextBox^ TextBoxShowQuestionNumber;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Panel^ PanelStudentScores;

private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ TextBoxStudentScorePaneMarks;
private: System::Windows::Forms::TextBox^ TextBoxStudentScorePanelExams;
private: System::Windows::Forms::Button^ button2;


public:














	private:

	public:

	private:

	public:


	private:

	public:


	private:

	public:


	private:

	public:


	private:

	public:



	public:
	private:

	private:
	private:

	private: Point offset;

	public:
		Student(void)
		{
			
			InitializeComponent();
			PanelStudentScores->Hide();
			PanelStudentDashboard->Hide();
			PanelStudentSignUp->Hide();
			PanelStudentExams->Hide();
			PanelExamParticipation->Hide();
			TextBoxExpalainAnswer->Hide();
			PanelTestiAnswers->Hide();
			panelTrueFalseAnswer->Hide();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextBoxStudentUsername;

	private: System::Windows::Forms::Label^ label;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TextBoxStudentPassword;
	private: System::Windows::Forms::Button^ ButtonStudentSignIn;
	private: System::Windows::Forms::Button^ ButtonStudentSignUp;
	private: System::Windows::Forms::Button^ ButtonStudentMainFormExit;
private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentUsername = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentPassword = (gcnew System::Windows::Forms::TextBox());
			this->ButtonStudentSignIn = (gcnew System::Windows::Forms::Button());
			this->ButtonStudentSignUp = (gcnew System::Windows::Forms::Button());
			this->ButtonStudentMainFormExit = (gcnew System::Windows::Forms::Button());
			this->PanelStudentSignUp = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentId = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentLastName = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentName = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentSignUpPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentSignUpUsername = (gcnew System::Windows::Forms::TextBox());
			this->PanelStudentDashboard = (gcnew System::Windows::Forms::Panel());
			this->PanelStudentScores = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStudentScorePaneMarks = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxStudentScorePanelExams = (gcnew System::Windows::Forms::TextBox());
			this->PanelStudentExams = (gcnew System::Windows::Forms::Panel());
			this->PanelExamParticipation = (gcnew System::Windows::Forms::Panel());
			this->panelTrueFalseAnswer = (gcnew System::Windows::Forms::Panel());
			this->RadioButtonTrueFalseAnswerTrue = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButtonTrueFalseAnswerFalse = (gcnew System::Windows::Forms::RadioButton());
			this->ButtonSubmitAnswer = (gcnew System::Windows::Forms::Button());
			this->ButtonPrivious = (gcnew System::Windows::Forms::Button());
			this->ButtonEndExam = (gcnew System::Windows::Forms::Button());
			this->PanelTestiAnswers = (gcnew System::Windows::Forms::Panel());
			this->TextBoxAnswerOption4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->RadioAnswerOption4Truth = (gcnew System::Windows::Forms::RadioButton());
			this->TextBoxAnswerOption3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->RadioAnswerOption3Truth = (gcnew System::Windows::Forms::RadioButton());
			this->TextBoxAnswerOption2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->RadioAnswerOption2Truth = (gcnew System::Windows::Forms::RadioButton());
			this->RadioAnswerOption1Truth = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->TextBoxAnswerOption1 = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxExpalainAnswer = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxQuestionText = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxQuestionNumber = (gcnew System::Windows::Forms::TextBox());
			this->ButtonNextQuestion = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->TextBoxShowQuestionNumber = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->DateTimeNow = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TextBoxShowExamID = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->DateTimeEndExam = (gcnew System::Windows::Forms::DateTimePicker());
			this->TextBoxExamParticipationExamID = (gcnew System::Windows::Forms::Label());
			this->ButtonExamIDGetter = (gcnew System::Windows::Forms::Button());
			this->TextBoxExamIDGetter = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxShowExams = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ButtonHide = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ButtonStudentExams = (gcnew System::Windows::Forms::Button());
			this->ButtonStudentExamMarks = (gcnew System::Windows::Forms::Button());
			this->TimerExamDuration = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->PanelStudentSignUp->SuspendLayout();
			this->PanelStudentDashboard->SuspendLayout();
			this->PanelStudentScores->SuspendLayout();
			this->PanelStudentExams->SuspendLayout();
			this->PanelExamParticipation->SuspendLayout();
			this->panelTrueFalseAnswer->SuspendLayout();
			this->PanelTestiAnswers->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(359, 9);
			this->label1->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"دانشجو";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxStudentUsername
			// 
			this->TextBoxStudentUsername->BackColor = System::Drawing::Color::Black;
			this->TextBoxStudentUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxStudentUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxStudentUsername->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxStudentUsername->Location = System::Drawing::Point(251, 123);
			this->TextBoxStudentUsername->Name = L"TextBoxStudentUsername";
			this->TextBoxStudentUsername->Size = System::Drawing::Size(306, 31);
			this->TextBoxStudentUsername->TabIndex = 1;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::Transparent;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label->Location = System::Drawing::Point(445, 74);
			this->label->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label->Name = L"label";
			this->label->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label->Size = System::Drawing::Size(111, 29);
			this->label->TabIndex = 2;
			this->label->Text = L"نام کاربری :";
			this->label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(251, 164);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(306, 2);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(251, 261);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(306, 2);
			this->panel2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Location = System::Drawing::Point(460, 182);
			this->label3->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label3->Size = System::Drawing::Size(105, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"رمز عبور :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxStudentPassword
			// 
			this->TextBoxStudentPassword->BackColor = System::Drawing::Color::Black;
			this->TextBoxStudentPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxStudentPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->TextBoxStudentPassword->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxStudentPassword->Location = System::Drawing::Point(251, 231);
			this->TextBoxStudentPassword->Name = L"TextBoxStudentPassword";
			this->TextBoxStudentPassword->Size = System::Drawing::Size(306, 25);
			this->TextBoxStudentPassword->TabIndex = 4;
			this->TextBoxStudentPassword->UseSystemPasswordChar = true;
			// 
			// ButtonStudentSignIn
			// 
			this->ButtonStudentSignIn->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ButtonStudentSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonStudentSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->ButtonStudentSignIn->ForeColor = System::Drawing::Color::RoyalBlue;
			this->ButtonStudentSignIn->Location = System::Drawing::Point(340, 290);
			this->ButtonStudentSignIn->Name = L"ButtonStudentSignIn";
			this->ButtonStudentSignIn->Size = System::Drawing::Size(118, 52);
			this->ButtonStudentSignIn->TabIndex = 7;
			this->ButtonStudentSignIn->Text = L"ورود";
			this->ButtonStudentSignIn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ButtonStudentSignIn->UseVisualStyleBackColor = false;
			this->ButtonStudentSignIn->Click += gcnew System::EventHandler(this, &Student::ButtonStudentSignIn_Click);
			// 
			// ButtonStudentSignUp
			// 
			this->ButtonStudentSignUp->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonStudentSignUp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonStudentSignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->ButtonStudentSignUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ButtonStudentSignUp->Location = System::Drawing::Point(296, 387);
			this->ButtonStudentSignUp->Name = L"ButtonStudentSignUp";
			this->ButtonStudentSignUp->Size = System::Drawing::Size(211, 50);
			this->ButtonStudentSignUp->TabIndex = 8;
			this->ButtonStudentSignUp->Text = L"ثبت نام";
			this->ButtonStudentSignUp->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ButtonStudentSignUp->UseVisualStyleBackColor = false;
			this->ButtonStudentSignUp->Click += gcnew System::EventHandler(this, &Student::ButtonStudentSignUp_Click);
			// 
			// ButtonStudentMainFormExit
			// 
			this->ButtonStudentMainFormExit->BackColor = System::Drawing::Color::Transparent;
			this->ButtonStudentMainFormExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ButtonStudentMainFormExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonStudentMainFormExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->ButtonStudentMainFormExit->Location = System::Drawing::Point(625, 436);
			this->ButtonStudentMainFormExit->Name = L"ButtonStudentMainFormExit";
			this->ButtonStudentMainFormExit->Size = System::Drawing::Size(163, 52);
			this->ButtonStudentMainFormExit->TabIndex = 9;
			this->ButtonStudentMainFormExit->Text = L"بازگشت به صفحه اصلی";
			this->ButtonStudentMainFormExit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ButtonStudentMainFormExit->UseVisualStyleBackColor = false;
			this->ButtonStudentMainFormExit->Click += gcnew System::EventHandler(this, &Student::button3_Click);
			// 
			// PanelStudentSignUp
			// 
			this->PanelStudentSignUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelStudentSignUp.BackgroundImage")));
			this->PanelStudentSignUp->Controls->Add(this->panel3);
			this->PanelStudentSignUp->Controls->Add(this->label7);
			this->PanelStudentSignUp->Controls->Add(this->TextBoxStudentId);
			this->PanelStudentSignUp->Controls->Add(this->button6);
			this->PanelStudentSignUp->Controls->Add(this->button5);
			this->PanelStudentSignUp->Controls->Add(this->panel6);
			this->PanelStudentSignUp->Controls->Add(this->label6);
			this->PanelStudentSignUp->Controls->Add(this->TextBoxStudentLastName);
			this->PanelStudentSignUp->Controls->Add(this->panel5);
			this->PanelStudentSignUp->Controls->Add(this->label5);
			this->PanelStudentSignUp->Controls->Add(this->TextBoxStudentName);
			this->PanelStudentSignUp->Controls->Add(this->panel4);
			this->PanelStudentSignUp->Controls->Add(this->label2);
			this->PanelStudentSignUp->Controls->Add(this->TextBoxStudentSignUpPassword);
			this->PanelStudentSignUp->Controls->Add(this->panel7);
			this->PanelStudentSignUp->Controls->Add(this->label4);
			this->PanelStudentSignUp->Controls->Add(this->TextBoxStudentSignUpUsername);
			this->PanelStudentSignUp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelStudentSignUp->Location = System::Drawing::Point(0, 0);
			this->PanelStudentSignUp->Name = L"PanelStudentSignUp";
			this->PanelStudentSignUp->Size = System::Drawing::Size(800, 500);
			this->PanelStudentSignUp->TabIndex = 10;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(65, 215);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(306, 2);
			this->panel3->TabIndex = 47;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label7->Location = System::Drawing::Point(266, 134);
			this->label7->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label7->Size = System::Drawing::Size(153, 29);
			this->label7->TabIndex = 46;
			this->label7->Text = L"شماره دانشجویی :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxStudentId
			// 
			this->TextBoxStudentId->BackColor = System::Drawing::Color::Black;
			this->TextBoxStudentId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxStudentId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxStudentId->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxStudentId->Location = System::Drawing::Point(65, 186);
			this->TextBoxStudentId->Name = L"TextBoxStudentId";
			this->TextBoxStudentId->Size = System::Drawing::Size(306, 31);
			this->TextBoxStudentId->TabIndex = 45;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(658, 429);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(78, 52);
			this->button6->TabIndex = 44;
			this->button6->Text = L"بازگشت";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Student::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(65, 317);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 63);
			this->button5->TabIndex = 43;
			this->button5->Text = L"ثبت نام";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Student::button5_Click);
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(65, 98);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(306, 2);
			this->panel6->TabIndex = 42;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label6->Location = System::Drawing::Point(258, 20);
			this->label6->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label6->Size = System::Drawing::Size(122, 29);
			this->label6->TabIndex = 41;
			this->label6->Text = L"نام خانوادگی :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxStudentLastName
			// 
			this->TextBoxStudentLastName->BackColor = System::Drawing::Color::Black;
			this->TextBoxStudentLastName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxStudentLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxStudentLastName->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxStudentLastName->Location = System::Drawing::Point(65, 70);
			this->TextBoxStudentLastName->Name = L"TextBoxStudentLastName";
			this->TextBoxStudentLastName->Size = System::Drawing::Size(306, 31);
			this->TextBoxStudentLastName->TabIndex = 40;
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(411, 99);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(306, 2);
			this->panel5->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Location = System::Drawing::Point(667, 20);
			this->label5->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label5->Size = System::Drawing::Size(45, 29);
			this->label5->TabIndex = 38;
			this->label5->Text = L"نام :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxStudentName
			// 
			this->TextBoxStudentName->AcceptsReturn = true;
			this->TextBoxStudentName->BackColor = System::Drawing::Color::Black;
			this->TextBoxStudentName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxStudentName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxStudentName->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxStudentName->Location = System::Drawing::Point(411, 69);
			this->TextBoxStudentName->Name = L"TextBoxStudentName";
			this->TextBoxStudentName->Size = System::Drawing::Size(306, 31);
			this->TextBoxStudentName->TabIndex = 37;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(409, 317);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(306, 2);
			this->panel4->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(613, 240);
			this->label2->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(105, 29);
			this->label2->TabIndex = 35;
			this->label2->Text = L"رمز عبور :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxStudentSignUpPassword
			// 
			this->TextBoxStudentSignUpPassword->BackColor = System::Drawing::Color::Black;
			this->TextBoxStudentSignUpPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxStudentSignUpPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->TextBoxStudentSignUpPassword->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxStudentSignUpPassword->Location = System::Drawing::Point(408, 294);
			this->TextBoxStudentSignUpPassword->Name = L"TextBoxStudentSignUpPassword";
			this->TextBoxStudentSignUpPassword->Size = System::Drawing::Size(306, 25);
			this->TextBoxStudentSignUpPassword->TabIndex = 34;
			this->TextBoxStudentSignUpPassword->UseSystemPasswordChar = true;
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(407, 215);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(306, 2);
			this->panel7->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Location = System::Drawing::Point(609, 133);
			this->label4->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(111, 29);
			this->label4->TabIndex = 32;
			this->label4->Text = L"نام کاربری :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxStudentSignUpUsername
			// 
			this->TextBoxStudentSignUpUsername->BackColor = System::Drawing::Color::Black;
			this->TextBoxStudentSignUpUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxStudentSignUpUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxStudentSignUpUsername->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxStudentSignUpUsername->Location = System::Drawing::Point(408, 185);
			this->TextBoxStudentSignUpUsername->Name = L"TextBoxStudentSignUpUsername";
			this->TextBoxStudentSignUpUsername->Size = System::Drawing::Size(306, 31);
			this->TextBoxStudentSignUpUsername->TabIndex = 31;
			// 
			// PanelStudentDashboard
			// 
			this->PanelStudentDashboard->AutoScroll = true;
			this->PanelStudentDashboard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelStudentDashboard.BackgroundImage")));
			this->PanelStudentDashboard->Controls->Add(this->PanelStudentScores);
			this->PanelStudentDashboard->Controls->Add(this->PanelStudentExams);
			this->PanelStudentDashboard->Controls->Add(this->button1);
			this->PanelStudentDashboard->Controls->Add(this->ButtonStudentExams);
			this->PanelStudentDashboard->Controls->Add(this->ButtonStudentExamMarks);
			this->PanelStudentDashboard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelStudentDashboard->Location = System::Drawing::Point(0, 0);
			this->PanelStudentDashboard->Name = L"PanelStudentDashboard";
			this->PanelStudentDashboard->Size = System::Drawing::Size(800, 500);
			this->PanelStudentDashboard->TabIndex = 48;
			// 
			// PanelStudentScores
			// 
			this->PanelStudentScores->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelStudentScores.BackgroundImage")));
			this->PanelStudentScores->Controls->Add(this->button2);
			this->PanelStudentScores->Controls->Add(this->label20);
			this->PanelStudentScores->Controls->Add(this->label19);
			this->PanelStudentScores->Controls->Add(this->TextBoxStudentScorePaneMarks);
			this->PanelStudentScores->Controls->Add(this->TextBoxStudentScorePanelExams);
			this->PanelStudentScores->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelStudentScores->Location = System::Drawing::Point(0, 0);
			this->PanelStudentScores->Name = L"PanelStudentScores";
			this->PanelStudentScores->Size = System::Drawing::Size(800, 500);
			this->PanelStudentScores->TabIndex = 10;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label20->Location = System::Drawing::Point(375, 15);
			this->label20->Name = L"label20";
			this->label20->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label20->Size = System::Drawing::Size(91, 33);
			this->label20->TabIndex = 3;
			this->label20->Text = L"نمرات :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label19->Location = System::Drawing::Point(658, 15);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label19->Size = System::Drawing::Size(118, 33);
			this->label19->TabIndex = 2;
			this->label19->Text = L"آزمون ها :";
			// 
			// TextBoxStudentScorePaneMarks
			// 
			this->TextBoxStudentScorePaneMarks->BackColor = System::Drawing::Color::LightCyan;
			this->TextBoxStudentScorePaneMarks->Location = System::Drawing::Point(155, 62);
			this->TextBoxStudentScorePaneMarks->Multiline = true;
			this->TextBoxStudentScorePaneMarks->Name = L"TextBoxStudentScorePaneMarks";
			this->TextBoxStudentScorePaneMarks->ReadOnly = true;
			this->TextBoxStudentScorePaneMarks->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxStudentScorePaneMarks->Size = System::Drawing::Size(305, 389);
			this->TextBoxStudentScorePaneMarks->TabIndex = 1;
			this->TextBoxStudentScorePaneMarks->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxStudentScorePanelExams
			// 
			this->TextBoxStudentScorePanelExams->BackColor = System::Drawing::Color::LightCyan;
			this->TextBoxStudentScorePanelExams->Location = System::Drawing::Point(474, 62);
			this->TextBoxStudentScorePanelExams->Multiline = true;
			this->TextBoxStudentScorePanelExams->Name = L"TextBoxStudentScorePanelExams";
			this->TextBoxStudentScorePanelExams->ReadOnly = true;
			this->TextBoxStudentScorePanelExams->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxStudentScorePanelExams->Size = System::Drawing::Size(305, 389);
			this->TextBoxStudentScorePanelExams->TabIndex = 0;
			this->TextBoxStudentScorePanelExams->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// PanelStudentExams
			// 
			this->PanelStudentExams->BackColor = System::Drawing::Color::Transparent;
			this->PanelStudentExams->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelStudentExams.BackgroundImage")));
			this->PanelStudentExams->Controls->Add(this->PanelExamParticipation);
			this->PanelStudentExams->Controls->Add(this->ButtonExamIDGetter);
			this->PanelStudentExams->Controls->Add(this->TextBoxExamIDGetter);
			this->PanelStudentExams->Controls->Add(this->label9);
			this->PanelStudentExams->Controls->Add(this->textBoxShowExams);
			this->PanelStudentExams->Controls->Add(this->label8);
			this->PanelStudentExams->Controls->Add(this->ButtonHide);
			this->PanelStudentExams->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelStudentExams->Location = System::Drawing::Point(0, 0);
			this->PanelStudentExams->Name = L"PanelStudentExams";
			this->PanelStudentExams->Size = System::Drawing::Size(800, 500);
			this->PanelStudentExams->TabIndex = 9;
			// 
			// PanelExamParticipation
			// 
			this->PanelExamParticipation->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelExamParticipation.BackgroundImage")));
			this->PanelExamParticipation->Controls->Add(this->panelTrueFalseAnswer);
			this->PanelExamParticipation->Controls->Add(this->ButtonSubmitAnswer);
			this->PanelExamParticipation->Controls->Add(this->ButtonPrivious);
			this->PanelExamParticipation->Controls->Add(this->ButtonEndExam);
			this->PanelExamParticipation->Controls->Add(this->PanelTestiAnswers);
			this->PanelExamParticipation->Controls->Add(this->TextBoxExpalainAnswer);
			this->PanelExamParticipation->Controls->Add(this->TextBoxQuestionText);
			this->PanelExamParticipation->Controls->Add(this->TextBoxQuestionNumber);
			this->PanelExamParticipation->Controls->Add(this->ButtonNextQuestion);
			this->PanelExamParticipation->Controls->Add(this->panel8);
			this->PanelExamParticipation->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelExamParticipation->Location = System::Drawing::Point(0, 0);
			this->PanelExamParticipation->Name = L"PanelExamParticipation";
			this->PanelExamParticipation->Size = System::Drawing::Size(800, 500);
			this->PanelExamParticipation->TabIndex = 7;
			// 
			// panelTrueFalseAnswer
			// 
			this->panelTrueFalseAnswer->BackColor = System::Drawing::Color::Silver;
			this->panelTrueFalseAnswer->Controls->Add(this->RadioButtonTrueFalseAnswerTrue);
			this->panelTrueFalseAnswer->Controls->Add(this->RadioButtonTrueFalseAnswerFalse);
			this->panelTrueFalseAnswer->Location = System::Drawing::Point(494, 333);
			this->panelTrueFalseAnswer->Name = L"panelTrueFalseAnswer";
			this->panelTrueFalseAnswer->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panelTrueFalseAnswer->Size = System::Drawing::Size(244, 104);
			this->panelTrueFalseAnswer->TabIndex = 31;
			// 
			// RadioButtonTrueFalseAnswerTrue
			// 
			this->RadioButtonTrueFalseAnswerTrue->AutoSize = true;
			this->RadioButtonTrueFalseAnswerTrue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioButtonTrueFalseAnswerTrue->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->RadioButtonTrueFalseAnswerTrue->Location = System::Drawing::Point(120, 3);
			this->RadioButtonTrueFalseAnswerTrue->Name = L"RadioButtonTrueFalseAnswerTrue";
			this->RadioButtonTrueFalseAnswerTrue->Size = System::Drawing::Size(83, 33);
			this->RadioButtonTrueFalseAnswerTrue->TabIndex = 1;
			this->RadioButtonTrueFalseAnswerTrue->TabStop = true;
			this->RadioButtonTrueFalseAnswerTrue->Text = L"صحیح";
			this->RadioButtonTrueFalseAnswerTrue->UseVisualStyleBackColor = true;
			// 
			// RadioButtonTrueFalseAnswerFalse
			// 
			this->RadioButtonTrueFalseAnswerFalse->AutoSize = true;
			this->RadioButtonTrueFalseAnswerFalse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioButtonTrueFalseAnswerFalse->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->RadioButtonTrueFalseAnswerFalse->Location = System::Drawing::Point(140, 62);
			this->RadioButtonTrueFalseAnswerFalse->Name = L"RadioButtonTrueFalseAnswerFalse";
			this->RadioButtonTrueFalseAnswerFalse->Size = System::Drawing::Size(63, 33);
			this->RadioButtonTrueFalseAnswerFalse->TabIndex = 0;
			this->RadioButtonTrueFalseAnswerFalse->TabStop = true;
			this->RadioButtonTrueFalseAnswerFalse->Text = L"غلط";
			this->RadioButtonTrueFalseAnswerFalse->UseVisualStyleBackColor = true;
			// 
			// ButtonSubmitAnswer
			// 
			this->ButtonSubmitAnswer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ButtonSubmitAnswer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonSubmitAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->ButtonSubmitAnswer->ForeColor = System::Drawing::Color::Black;
			this->ButtonSubmitAnswer->Location = System::Drawing::Point(340, 370);
			this->ButtonSubmitAnswer->Name = L"ButtonSubmitAnswer";
			this->ButtonSubmitAnswer->Size = System::Drawing::Size(106, 32);
			this->ButtonSubmitAnswer->TabIndex = 30;
			this->ButtonSubmitAnswer->Text = L"ثبت پاسخ";
			this->ButtonSubmitAnswer->UseVisualStyleBackColor = false;
			this->ButtonSubmitAnswer->Click += gcnew System::EventHandler(this, &Student::ButtonSubmitAnswer_Click);
			// 
			// ButtonPrivious
			// 
			this->ButtonPrivious->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ButtonPrivious->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonPrivious->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ButtonPrivious->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->ButtonPrivious->Location = System::Drawing::Point(632, 456);
			this->ButtonPrivious->Name = L"ButtonPrivious";
			this->ButtonPrivious->Size = System::Drawing::Size(106, 32);
			this->ButtonPrivious->TabIndex = 29;
			this->ButtonPrivious->Text = L"سوال قبلی";
			this->ButtonPrivious->UseVisualStyleBackColor = false;
			this->ButtonPrivious->Click += gcnew System::EventHandler(this, &Student::ButtonPrivious_Click);
			// 
			// ButtonEndExam
			// 
			this->ButtonEndExam->BackColor = System::Drawing::Color::MistyRose;
			this->ButtonEndExam->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonEndExam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ButtonEndExam->ForeColor = System::Drawing::Color::Red;
			this->ButtonEndExam->Location = System::Drawing::Point(296, 446);
			this->ButtonEndExam->Name = L"ButtonEndExam";
			this->ButtonEndExam->Size = System::Drawing::Size(192, 42);
			this->ButtonEndExam->TabIndex = 28;
			this->ButtonEndExam->Text = L"اتمام آزمون";
			this->ButtonEndExam->UseVisualStyleBackColor = false;
			this->ButtonEndExam->Click += gcnew System::EventHandler(this, &Student::ButtonEndExam_Click);
			// 
			// PanelTestiAnswers
			// 
			this->PanelTestiAnswers->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->PanelTestiAnswers->Controls->Add(this->TextBoxAnswerOption4);
			this->PanelTestiAnswers->Controls->Add(this->label13);
			this->PanelTestiAnswers->Controls->Add(this->RadioAnswerOption4Truth);
			this->PanelTestiAnswers->Controls->Add(this->TextBoxAnswerOption3);
			this->PanelTestiAnswers->Controls->Add(this->label12);
			this->PanelTestiAnswers->Controls->Add(this->RadioAnswerOption3Truth);
			this->PanelTestiAnswers->Controls->Add(this->TextBoxAnswerOption2);
			this->PanelTestiAnswers->Controls->Add(this->label18);
			this->PanelTestiAnswers->Controls->Add(this->label17);
			this->PanelTestiAnswers->Controls->Add(this->RadioAnswerOption2Truth);
			this->PanelTestiAnswers->Controls->Add(this->RadioAnswerOption1Truth);
			this->PanelTestiAnswers->Controls->Add(this->label15);
			this->PanelTestiAnswers->Controls->Add(this->TextBoxAnswerOption1);
			this->PanelTestiAnswers->Location = System::Drawing::Point(14, 195);
			this->PanelTestiAnswers->Name = L"PanelTestiAnswers";
			this->PanelTestiAnswers->Size = System::Drawing::Size(724, 124);
			this->PanelTestiAnswers->TabIndex = 26;
			// 
			// TextBoxAnswerOption4
			// 
			this->TextBoxAnswerOption4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TextBoxAnswerOption4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxAnswerOption4->Location = System::Drawing::Point(93, 66);
			this->TextBoxAnswerOption4->Name = L"TextBoxAnswerOption4";
			this->TextBoxAnswerOption4->ReadOnly = true;
			this->TextBoxAnswerOption4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TextBoxAnswerOption4->Size = System::Drawing::Size(243, 40);
			this->TextBoxAnswerOption4->TabIndex = 22;
			this->TextBoxAnswerOption4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label13->ForeColor = System::Drawing::Color::Navy;
			this->label13->Location = System::Drawing::Point(337, 68);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 29);
			this->label13->TabIndex = 21;
			this->label13->Text = L" 4";
			// 
			// RadioAnswerOption4Truth
			// 
			this->RadioAnswerOption4Truth->AutoSize = true;
			this->RadioAnswerOption4Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioAnswerOption4Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioAnswerOption4Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioAnswerOption4Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioAnswerOption4Truth->Location = System::Drawing::Point(72, 80);
			this->RadioAnswerOption4Truth->Name = L"RadioAnswerOption4Truth";
			this->RadioAnswerOption4Truth->Size = System::Drawing::Size(14, 13);
			this->RadioAnswerOption4Truth->TabIndex = 20;
			this->RadioAnswerOption4Truth->TabStop = true;
			this->RadioAnswerOption4Truth->UseVisualStyleBackColor = false;
			// 
			// TextBoxAnswerOption3
			// 
			this->TextBoxAnswerOption3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TextBoxAnswerOption3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxAnswerOption3->Location = System::Drawing::Point(405, 66);
			this->TextBoxAnswerOption3->Name = L"TextBoxAnswerOption3";
			this->TextBoxAnswerOption3->ReadOnly = true;
			this->TextBoxAnswerOption3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TextBoxAnswerOption3->Size = System::Drawing::Size(230, 40);
			this->TextBoxAnswerOption3->TabIndex = 19;
			this->TextBoxAnswerOption3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label12->ForeColor = System::Drawing::Color::Navy;
			this->label12->Location = System::Drawing::Point(636, 68);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 29);
			this->label12->TabIndex = 18;
			this->label12->Text = L" 3";
			// 
			// RadioAnswerOption3Truth
			// 
			this->RadioAnswerOption3Truth->AutoSize = true;
			this->RadioAnswerOption3Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioAnswerOption3Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioAnswerOption3Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioAnswerOption3Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioAnswerOption3Truth->Location = System::Drawing::Point(378, 80);
			this->RadioAnswerOption3Truth->Name = L"RadioAnswerOption3Truth";
			this->RadioAnswerOption3Truth->Size = System::Drawing::Size(14, 13);
			this->RadioAnswerOption3Truth->TabIndex = 17;
			this->RadioAnswerOption3Truth->TabStop = true;
			this->RadioAnswerOption3Truth->UseVisualStyleBackColor = false;
			// 
			// TextBoxAnswerOption2
			// 
			this->TextBoxAnswerOption2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TextBoxAnswerOption2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxAnswerOption2->Location = System::Drawing::Point(93, 3);
			this->TextBoxAnswerOption2->Name = L"TextBoxAnswerOption2";
			this->TextBoxAnswerOption2->ReadOnly = true;
			this->TextBoxAnswerOption2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TextBoxAnswerOption2->Size = System::Drawing::Size(243, 40);
			this->TextBoxAnswerOption2->TabIndex = 16;
			this->TextBoxAnswerOption2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label18->ForeColor = System::Drawing::Color::Navy;
			this->label18->Location = System::Drawing::Point(335, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(32, 29);
			this->label18->TabIndex = 15;
			this->label18->Text = L" 2";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label17->ForeColor = System::Drawing::Color::Navy;
			this->label17->Location = System::Drawing::Point(240, 110);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 29);
			this->label17->TabIndex = 14;
			// 
			// RadioAnswerOption2Truth
			// 
			this->RadioAnswerOption2Truth->AutoSize = true;
			this->RadioAnswerOption2Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioAnswerOption2Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioAnswerOption2Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioAnswerOption2Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioAnswerOption2Truth->Location = System::Drawing::Point(72, 15);
			this->RadioAnswerOption2Truth->Name = L"RadioAnswerOption2Truth";
			this->RadioAnswerOption2Truth->Size = System::Drawing::Size(14, 13);
			this->RadioAnswerOption2Truth->TabIndex = 10;
			this->RadioAnswerOption2Truth->TabStop = true;
			this->RadioAnswerOption2Truth->UseVisualStyleBackColor = false;
			// 
			// RadioAnswerOption1Truth
			// 
			this->RadioAnswerOption1Truth->AutoSize = true;
			this->RadioAnswerOption1Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioAnswerOption1Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioAnswerOption1Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioAnswerOption1Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioAnswerOption1Truth->Location = System::Drawing::Point(381, 15);
			this->RadioAnswerOption1Truth->Name = L"RadioAnswerOption1Truth";
			this->RadioAnswerOption1Truth->Size = System::Drawing::Size(14, 13);
			this->RadioAnswerOption1Truth->TabIndex = 9;
			this->RadioAnswerOption1Truth->TabStop = true;
			this->RadioAnswerOption1Truth->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label15->ForeColor = System::Drawing::Color::Navy;
			this->label15->Location = System::Drawing::Point(636, 8);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 29);
			this->label15->TabIndex = 5;
			this->label15->Text = L" 1";
			// 
			// TextBoxAnswerOption1
			// 
			this->TextBoxAnswerOption1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TextBoxAnswerOption1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxAnswerOption1->Location = System::Drawing::Point(405, 3);
			this->TextBoxAnswerOption1->Name = L"TextBoxAnswerOption1";
			this->TextBoxAnswerOption1->ReadOnly = true;
			this->TextBoxAnswerOption1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TextBoxAnswerOption1->Size = System::Drawing::Size(230, 40);
			this->TextBoxAnswerOption1->TabIndex = 0;
			this->TextBoxAnswerOption1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxExpalainAnswer
			// 
			this->TextBoxExpalainAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExpalainAnswer->Location = System::Drawing::Point(14, 195);
			this->TextBoxExpalainAnswer->Multiline = true;
			this->TextBoxExpalainAnswer->Name = L"TextBoxExpalainAnswer";
			this->TextBoxExpalainAnswer->Size = System::Drawing::Size(724, 122);
			this->TextBoxExpalainAnswer->TabIndex = 4;
			// 
			// TextBoxQuestionText
			// 
			this->TextBoxQuestionText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->TextBoxQuestionText->Location = System::Drawing::Point(12, 86);
			this->TextBoxQuestionText->Multiline = true;
			this->TextBoxQuestionText->Name = L"TextBoxQuestionText";
			this->TextBoxQuestionText->ReadOnly = true;
			this->TextBoxQuestionText->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TextBoxQuestionText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxQuestionText->Size = System::Drawing::Size(725, 89);
			this->TextBoxQuestionText->TabIndex = 3;
			// 
			// TextBoxQuestionNumber
			// 
			this->TextBoxQuestionNumber->ForeColor = System::Drawing::Color::Navy;
			this->TextBoxQuestionNumber->Location = System::Drawing::Point(743, 86);
			this->TextBoxQuestionNumber->Name = L"TextBoxQuestionNumber";
			this->TextBoxQuestionNumber->ReadOnly = true;
			this->TextBoxQuestionNumber->Size = System::Drawing::Size(45, 47);
			this->TextBoxQuestionNumber->TabIndex = 2;
			// 
			// ButtonNextQuestion
			// 
			this->ButtonNextQuestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ButtonNextQuestion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonNextQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->ButtonNextQuestion->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->ButtonNextQuestion->Location = System::Drawing::Point(14, 456);
			this->ButtonNextQuestion->Name = L"ButtonNextQuestion";
			this->ButtonNextQuestion->Size = System::Drawing::Size(106, 32);
			this->ButtonNextQuestion->TabIndex = 1;
			this->ButtonNextQuestion->Text = L"سوال بعدی";
			this->ButtonNextQuestion->UseVisualStyleBackColor = false;
			this->ButtonNextQuestion->Click += gcnew System::EventHandler(this, &Student::ButtonNextQuestion_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel8->Controls->Add(this->TextBoxShowQuestionNumber);
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->label14);
			this->panel8->Controls->Add(this->DateTimeNow);
			this->panel8->Controls->Add(this->label11);
			this->panel8->Controls->Add(this->TextBoxShowExamID);
			this->panel8->Controls->Add(this->label10);
			this->panel8->Controls->Add(this->DateTimeEndExam);
			this->panel8->Controls->Add(this->TextBoxExamParticipationExamID);
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(800, 66);
			this->panel8->TabIndex = 0;
			// 
			// TextBoxShowQuestionNumber
			// 
			this->TextBoxShowQuestionNumber->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->TextBoxShowQuestionNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxShowQuestionNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxShowQuestionNumber->ForeColor = System::Drawing::Color::Blue;
			this->TextBoxShowQuestionNumber->Location = System::Drawing::Point(474, 27);
			this->TextBoxShowQuestionNumber->Name = L"TextBoxShowQuestionNumber";
			this->TextBoxShowQuestionNumber->ReadOnly = true;
			this->TextBoxShowQuestionNumber->Size = System::Drawing::Size(50, 24);
			this->TextBoxShowQuestionNumber->TabIndex = 7;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label16->Location = System::Drawing::Point(524, 25);
			this->label16->Name = L"label16";
			this->label16->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label16->Size = System::Drawing::Size(115, 25);
			this->label16->TabIndex = 6;
			this->label16->Text = L"تعداد سوالات :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label14->Location = System::Drawing::Point(379, 27);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label14->Size = System::Drawing::Size(76, 20);
			this->label14->TabIndex = 5;
			this->label14->Text = L"زمان کنونی :";
			// 
			// DateTimeNow
			// 
			this->DateTimeNow->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->DateTimeNow->Enabled = false;
			this->DateTimeNow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->DateTimeNow->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->DateTimeNow->Location = System::Drawing::Point(257, 14);
			this->DateTimeNow->Name = L"DateTimeNow";
			this->DateTimeNow->Size = System::Drawing::Size(114, 35);
			this->DateTimeNow->TabIndex = 4;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Location = System::Drawing::Point(145, 26);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label11->Size = System::Drawing::Size(113, 20);
			this->label11->TabIndex = 3;
			this->label11->Text = L"ساعت پایان آزمون :";
			// 
			// TextBoxShowExamID
			// 
			this->TextBoxShowExamID->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->TextBoxShowExamID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxShowExamID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxShowExamID->ForeColor = System::Drawing::Color::Blue;
			this->TextBoxShowExamID->Location = System::Drawing::Point(645, 25);
			this->TextBoxShowExamID->Name = L"TextBoxShowExamID";
			this->TextBoxShowExamID->ReadOnly = true;
			this->TextBoxShowExamID->Size = System::Drawing::Size(69, 24);
			this->TextBoxShowExamID->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Location = System::Drawing::Point(714, 23);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label10->Size = System::Drawing::Size(61, 25);
			this->label10->TabIndex = 2;
			this->label10->Text = L"آزمون:";
			// 
			// DateTimeEndExam
			// 
			this->DateTimeEndExam->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->DateTimeEndExam->Enabled = false;
			this->DateTimeEndExam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->DateTimeEndExam->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->DateTimeEndExam->Location = System::Drawing::Point(27, 14);
			this->DateTimeEndExam->Name = L"DateTimeEndExam";
			this->DateTimeEndExam->Size = System::Drawing::Size(114, 35);
			this->DateTimeEndExam->TabIndex = 1;
			// 
			// TextBoxExamParticipationExamID
			// 
			this->TextBoxExamParticipationExamID->AutoSize = true;
			this->TextBoxExamParticipationExamID->Location = System::Drawing::Point(651, 11);
			this->TextBoxExamParticipationExamID->Name = L"TextBoxExamParticipationExamID";
			this->TextBoxExamParticipationExamID->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TextBoxExamParticipationExamID->Size = System::Drawing::Size(0, 39);
			this->TextBoxExamParticipationExamID->TabIndex = 0;
			this->TextBoxExamParticipationExamID->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ButtonExamIDGetter
			// 
			this->ButtonExamIDGetter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ButtonExamIDGetter->ForeColor = System::Drawing::Color::Purple;
			this->ButtonExamIDGetter->Location = System::Drawing::Point(167, 290);
			this->ButtonExamIDGetter->Name = L"ButtonExamIDGetter";
			this->ButtonExamIDGetter->Size = System::Drawing::Size(140, 55);
			this->ButtonExamIDGetter->TabIndex = 6;
			this->ButtonExamIDGetter->Text = L"شرکت در آزمون";
			this->ButtonExamIDGetter->UseVisualStyleBackColor = true;
			this->ButtonExamIDGetter->Click += gcnew System::EventHandler(this, &Student::ButtonExamIDGetter_Click);
			// 
			// TextBoxExamIDGetter
			// 
			this->TextBoxExamIDGetter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamIDGetter->Location = System::Drawing::Point(167, 215);
			this->TextBoxExamIDGetter->Name = L"TextBoxExamIDGetter";
			this->TextBoxExamIDGetter->Size = System::Drawing::Size(140, 38);
			this->TextBoxExamIDGetter->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->Location = System::Drawing::Point(201, 169);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label9->Size = System::Drawing::Size(111, 25);
			this->label9->TabIndex = 4;
			this->label9->Text = L"شناسه آزمون:";
			// 
			// textBoxShowExams
			// 
			this->textBoxShowExams->BackColor = System::Drawing::Color::LightCyan;
			this->textBoxShowExams->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->textBoxShowExams->Location = System::Drawing::Point(494, 98);
			this->textBoxShowExams->Multiline = true;
			this->textBoxShowExams->Name = L"textBoxShowExams";
			this->textBoxShowExams->ReadOnly = true;
			this->textBoxShowExams->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxShowExams->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxShowExams->Size = System::Drawing::Size(276, 363);
			this->textBoxShowExams->TabIndex = 3;
			this->textBoxShowExams->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(554, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(197, 39);
			this->label8->TabIndex = 0;
			this->label8->Text = L"آزمون های شما";
			// 
			// ButtonHide
			// 
			this->ButtonHide->BackColor = System::Drawing::Color::Transparent;
			this->ButtonHide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonHide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ButtonHide->ForeColor = System::Drawing::Color::LightCyan;
			this->ButtonHide->Location = System::Drawing::Point(14, 429);
			this->ButtonHide->Name = L"ButtonHide";
			this->ButtonHide->Size = System::Drawing::Size(168, 55);
			this->ButtonHide->TabIndex = 8;
			this->ButtonHide->Text = L"بازگشت به د اشبورد";
			this->ButtonHide->UseVisualStyleBackColor = false;
			this->ButtonHide->Click += gcnew System::EventHandler(this, &Student::ButtonHide_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(681, 445);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(107, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"خروج از داشبورد";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Student::button1_Click);
			// 
			// ButtonStudentExams
			// 
			this->ButtonStudentExams->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ButtonStudentExams->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonStudentExams->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->ButtonStudentExams->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonStudentExams->Location = System::Drawing::Point(194, 144);
			this->ButtonStudentExams->Name = L"ButtonStudentExams";
			this->ButtonStudentExams->Size = System::Drawing::Size(418, 73);
			this->ButtonStudentExams->TabIndex = 8;
			this->ButtonStudentExams->Text = L"آزمون های شما";
			this->ButtonStudentExams->UseVisualStyleBackColor = false;
			this->ButtonStudentExams->Click += gcnew System::EventHandler(this, &Student::ButtonStudentExams_Click);
			// 
			// ButtonStudentExamMarks
			// 
			this->ButtonStudentExamMarks->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ButtonStudentExamMarks->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonStudentExamMarks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->ButtonStudentExamMarks->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonStudentExamMarks->Location = System::Drawing::Point(194, 290);
			this->ButtonStudentExamMarks->Name = L"ButtonStudentExamMarks";
			this->ButtonStudentExamMarks->Size = System::Drawing::Size(418, 74);
			this->ButtonStudentExamMarks->TabIndex = 7;
			this->ButtonStudentExamMarks->Text = L"نمرات آزمون";
			this->ButtonStudentExamMarks->UseVisualStyleBackColor = false;
			this->ButtonStudentExamMarks->Click += gcnew System::EventHandler(this, &Student::ButtonStudentExamMarks_Click);
			// 
			// TimerExamDuration
			// 
			this->TimerExamDuration->Enabled = true;
			this->TimerExamDuration->Interval = 1000;
			this->TimerExamDuration->Tick += gcnew System::EventHandler(this, &Student::Student_Load);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->Location = System::Drawing::Point(14, 428);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 53);
			this->button2->TabIndex = 4;
			this->button2->Text = L"بازگشت";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Student::button2_Click);
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(20, 39);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->PanelStudentDashboard);
			this->Controls->Add(this->PanelStudentSignUp);
			this->Controls->Add(this->ButtonStudentMainFormExit);
			this->Controls->Add(this->ButtonStudentSignUp);
			this->Controls->Add(this->ButtonStudentSignIn);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TextBoxStudentPassword);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->TextBoxStudentUsername);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(11, 12, 11, 12);
			this->Name = L"Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"a";
			this->Load += gcnew System::EventHandler(this, &Student::Student_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Student::Student_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Student::Student_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Student::Student_MouseUp);
			this->PanelStudentSignUp->ResumeLayout(false);
			this->PanelStudentSignUp->PerformLayout();
			this->PanelStudentDashboard->ResumeLayout(false);
			this->PanelStudentScores->ResumeLayout(false);
			this->PanelStudentScores->PerformLayout();
			this->PanelStudentExams->ResumeLayout(false);
			this->PanelStudentExams->PerformLayout();
			this->PanelExamParticipation->ResumeLayout(false);
			this->PanelExamParticipation->PerformLayout();
			this->panelTrueFalseAnswer->ResumeLayout(false);
			this->panelTrueFalseAnswer->PerformLayout();
			this->PanelTestiAnswers->ResumeLayout(false);
			this->PanelTestiAnswers->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Hide();
	}
	private: System::Void Student_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dragging = false;
		DateTimeNow->Value = System::DateTime::Now;
		PanelExamParticipation->Update();
	
	}

	private: System::Void Student_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}

	private: System::Void Student_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}

	private: System::Void Student_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false; //this bool is awesome
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		bool TekrariUNExists = false;
		bool TekrariIDExists = false;
		if (TextBoxStudentName->Text->Length != 0) {
			if (TextBoxStudentLastName->Text->Length != 0) {
				if (TextBoxStudentSignUpUsername->Text->Length != 0) {
					if (TextBoxStudentSignUpPassword->Text->Length != 0) {
						System::String^ name = (TextBoxStudentLastName->Text);
						System::String^ lastname = (TextBoxStudentName->Text);
						System::String^ username = (TextBoxStudentSignUpUsername->Text);
						System::String^ password = (TextBoxStudentSignUpPassword->Text);
						System::String^ studentId = (TextBoxStudentId->Text);
						for (int i = 0; i < PersonList::StudentList.Count; i++) {// count is for size
							if (PersonList::StudentList[i]->UserName == username) {
								TekrariUNExists = true;
							}
							if (PersonList::StudentList[i]->StudentId == studentId) {
								TekrariIDExists = true;
							}
						}
						if (!TekrariUNExists && !TekrariIDExists) {
							PanelStudentSignUp->Hide();
							PersonList::StudentList.Add(gcnew student(name, lastname, username, studentId, password));
						}
						else if (TekrariUNExists) {
							MessageBox::Show("Username has been submited before.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else {
							MessageBox::Show("StudentId has been submited before.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}

					else {
						MessageBox::Show("Empty password field !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Empty username field !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Empty lastname field !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Empty name field !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		TextBoxStudentLastName->ResetText();
		TextBoxStudentName->ResetText();
		TextBoxStudentSignUpUsername->ResetText();
		TextBoxStudentSignUpPassword->ResetText();
		TextBoxStudentId->ResetText();
		PanelStudentSignUp->Hide();
		if (PersonList::StudentList.Count != 0) {
			ButtonStudentSignIn->Enabled = true;
		}

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PanelStudentDashboard->Hide();
	}
private: System::Void ButtonStudentSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
		PanelStudentSignUp->Show();

	}		   
private: System::Void ButtonStudentSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PersonList::StudentList.Count == 0) {
			MessageBox::Show("There is no students !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {

			System::String^ username = TextBoxStudentUsername->Text;
			System::String^ password = TextBoxStudentPassword->Text;
			this->username = username;
			bool found = false;
			for (int i = 0; i < PersonList::StudentList.Count; i++) {
				if (PersonList::StudentList[i]->UserName == username) {
					found = true;
					user_student_index = i;
					if (PersonList::StudentList[i]->Password == password) {
						PanelStudentDashboard->Show();
						break;
					}
					else {
						MessageBox::Show("Wrong Password !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
				}
			}
			if (!found) {
				MessageBox::Show("Username not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}

		}
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		PanelStudentSignUp->Hide();

	}
private: System::Void ButtonStudentExams_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTimeEndExam->Value = Exams::ExamList[exam_index]->EndTime;
		bool Exist_Exam=false;
		for (int i = 0; i < Exams::ExamList.Count; i++) {
			for (int j = 0; j < Exams::ExamList[i]->AccessedStudentsList.Count; j++) {
				if (PersonList::StudentList[user_student_index]->StudentId == Exams::ExamList[i]->AccessedStudentsList[j]->StudentId) {
					textBoxShowExams->AppendText("آزمون " + Exams::ExamList[i]->ExamID+ "\r\n");
					Exist_Exam = true;
				}
			}
		}
		if (!Exist_Exam) {
			MessageBox::Show("You don't have any exams !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		PanelStudentExams->Show();
	}
private: System::Void ButtonExamIDGetter_Click(System::Object^ sender, System::EventArgs^ e) {
	current_question_index = 0;
	bool isinbanlist = false;
	for (int i = 0; i < Exams::ExamList[exam_index]->DeniedStudentsList.Count; i++) {
		if (PersonList::StudentList[user_student_index]->StudentId == Exams::ExamList[exam_index]->DeniedStudentsList[i]->StudentId) {
			isinbanlist = true;
			break;
		}
	}
	if (!isinbanlist) {
		bool IdExist = false;
		for (int i = 0; i < Exams::ExamList.Count; i++) {
			if (Exams::ExamList[i]->ExamID == TextBoxExamIDGetter->Text) {
				exam_index = i;
				IdExist = true;
				break;
			}
		}
		for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++) {
			if (Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId == PersonList::StudentList[user_student_index]->StudentId) {
				exam_student_index = i;
				break;
			}
		}
		if (IdExist) {
			if (System::DateTime::Now < Exams::ExamList[exam_index]->StartTime) {
				MessageBox::Show("Exam has not started yet !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else if (System::DateTime::Now > Exams::ExamList[exam_index]->EndTime) {
				MessageBox::Show("Exam finished !", "Out of Time", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else {

				PanelExamParticipation->Show();
				TextBoxShowQuestionNumber->Text = Exams::ExamList[exam_index]->QuestionList.Count.ToString();
				TextBoxQuestionNumber->Text = (current_question_index + 1).ToString();
				TextBoxShowExamID->Text = TextBoxExamIDGetter->Text;

				TextBoxQuestionText->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->QuestionText;

				if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->ExpalainType)
				{
					TextBoxExpalainAnswer->Show();
					panelTrueFalseAnswer->Hide();
					PanelTestiAnswers->Hide();
				}
				else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestType) {
					TextBoxExpalainAnswer->Hide();
					panelTrueFalseAnswer->Hide();
					PanelTestiAnswers->Show();
					TextBoxAnswerOption1->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption1;
					TextBoxAnswerOption2->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption2;
					TextBoxAnswerOption3->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption3;
					TextBoxAnswerOption4->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption4;

				}
				else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TrueFalseType) {
					TextBoxExpalainAnswer->Hide();
					panelTrueFalseAnswer->Show();
					PanelTestiAnswers->Hide();
				}

				if (current_question_index == Exams::ExamList[exam_index]->QuestionList.Count - 1)
					ButtonNextQuestion->Hide();
				else
					ButtonNextQuestion->Show();

				if (current_question_index == 0)
					ButtonPrivious->Hide();
				else
					ButtonPrivious->Show();
			}
		}
		else {
			MessageBox::Show("Exam does not exist ! ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Student is not alowed to participate in this exam ! ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void ButtonSubmitAnswer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::DateTime::Now > Exams::ExamList[exam_index]->EndTime) {
		PanelExamParticipation->Hide();
		MessageBox::Show("Time is over !", "Time Out", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
	else {
		if (first_submition == 1) {
			if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->ExpalainType)
			{
				Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxExpalainAnswer->Text));
				first_submition = 0;
			}
			else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestType) {
				if (RadioAnswerOption1Truth->Checked) {
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption1->Text));
					first_submition = 0;

				}
				if (RadioAnswerOption2Truth->Checked) {
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption2->Text));
					first_submition = 0;

				}
				if (RadioAnswerOption3Truth->Checked) {
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption3->Text));
					first_submition = 0;

				}
				if (RadioAnswerOption4Truth->Checked) {
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption4->Text));
					first_submition = 0;
				}
			}
			else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TrueFalseType) {
				if (RadioButtonTrueFalseAnswerTrue->Checked) {
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, true));
					first_submition = 0;

				}
				else {
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, false));
					first_submition = 0;
				}
			}
		}
		else {
			if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->ExpalainType)
			{
				for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++) {
					if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId)
						Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.RemoveAt(i);
				}
				Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxExpalainAnswer->Text));
				first_submition = 0;
			}
			else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestType) {
				if (RadioAnswerOption1Truth->Checked) {
					for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++) {
						if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId)
							Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.RemoveAt(i);
					}
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption1->Text));
					first_submition = 0;

				}
				if (RadioAnswerOption2Truth->Checked) {
					for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++) {
						if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId)
							Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.RemoveAt(i);
					}
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption2->Text));
					first_submition = 0;

				}
				if (RadioAnswerOption3Truth->Checked) {
					for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++) {
						if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId)
							Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.RemoveAt(i);
					}
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption3->Text));
					first_submition = 0;

				}
				if (RadioAnswerOption4Truth->Checked) {
					for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++) {
						if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId)
							Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.RemoveAt(i);
					}
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, TextBoxAnswerOption4->Text));
					first_submition = 0;
				}
			}
			else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TrueFalseType) {
				if (RadioButtonTrueFalseAnswerTrue->Checked) {
					for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++) {
						if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId)
							Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.RemoveAt(i);
					}
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, true));
					first_submition = 0;

				}
				else {
					for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++) {
						if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId)
							Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.RemoveAt(i);
					}
					Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Add(gcnew Answers(Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId, false));
					first_submition = 0;
				}
			}
		}
	}
}
private: System::Void ButtonNextQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	
	TextBoxExpalainAnswer->ResetText();
	RadioAnswerOption1Truth->Checked = false;
	RadioAnswerOption2Truth->Checked = false;
	RadioAnswerOption3Truth->Checked = false;
	RadioAnswerOption4Truth->Checked = false;
	RadioButtonTrueFalseAnswerFalse->Checked = false;
	RadioButtonTrueFalseAnswerTrue->Checked = false;

	bool isAnswerValid = false;
	current_question_index++;

	for(int i = 0;i<Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count;i++)
		if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId) {
			isAnswerValid = true;
		}
	if (!isAnswerValid)
		first_submition = 1;
	
	TextBoxExpalainAnswer->Hide();
	PanelTestiAnswers->Hide();
	panelTrueFalseAnswer->Hide();

	TextBoxQuestionNumber->Text = (current_question_index + 1).ToString();
	TextBoxQuestionText->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->QuestionText;

	
	if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->ExpalainType)
	{
		TextBoxExpalainAnswer->Show();
	}
	else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestType) {
		PanelTestiAnswers->Show();
		TextBoxAnswerOption1->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption1;
		TextBoxAnswerOption2->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption2;
		TextBoxAnswerOption3->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption3;
		TextBoxAnswerOption4->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption4;

	}
	else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TrueFalseType) {
		panelTrueFalseAnswer->Show();
	}

	if (current_question_index == Exams::ExamList[exam_index]->QuestionList.Count - 1)
		ButtonNextQuestion->Hide();
	else
		ButtonNextQuestion->Show();

	ButtonPrivious->Show();
	PanelExamParticipation->Update();
}
private: System::Void ButtonPrivious_Click(System::Object^ sender, System::EventArgs^ e) {
	
	TextBoxExpalainAnswer->ResetText();
	RadioAnswerOption1Truth->Checked = false;
	RadioAnswerOption2Truth->Checked = false;
	RadioAnswerOption3Truth->Checked = false;
	RadioAnswerOption4Truth->Checked = false;
	RadioButtonTrueFalseAnswerFalse->Checked = false;
	RadioButtonTrueFalseAnswerTrue->Checked = false;
	
	bool isAnswerValid = false;
	current_question_index--;
	for (int i = 0; i < Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count; i++)
		if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList[i]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[exam_student_index]->StudentId) {
			isAnswerValid = true;
		}
	if (!isAnswerValid)
		first_submition = 1;

	TextBoxExpalainAnswer->Hide();
	PanelTestiAnswers->Hide();
	panelTrueFalseAnswer->Hide();

	TextBoxQuestionNumber->Text = (current_question_index + 1).ToString();
	TextBoxQuestionText->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->QuestionText;


	if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->ExpalainType)
	{
		TextBoxExpalainAnswer->Show();
	}
	else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestType) {
		PanelTestiAnswers->Show();
		TextBoxAnswerOption1->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption1;
		TextBoxAnswerOption2->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption2;
		TextBoxAnswerOption3->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption3;
		TextBoxAnswerOption4->Text = Exams::ExamList[exam_index]->QuestionList[current_question_index]->TestTypeOption4;

	}
	else if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->TrueFalseType) {
		panelTrueFalseAnswer->Show();
	}

	if (current_question_index == 0)
		ButtonPrivious->Hide();
	else
		ButtonPrivious->Show();

	ButtonNextQuestion->Show();
	PanelExamParticipation->Update();
}
private: System::Void ButtonEndExam_Click(System::Object^ sender, System::EventArgs^ e) {
	
	TextBoxExamIDGetter->ResetText();
	TextBoxExpalainAnswer->ResetText();
	TextBoxAnswerOption1->ResetText();
	TextBoxAnswerOption2->ResetText();
	TextBoxAnswerOption3->ResetText();
	TextBoxAnswerOption4->ResetText();

	RadioAnswerOption1Truth->Checked = false;
	RadioAnswerOption2Truth->Checked = false;
	RadioAnswerOption3Truth->Checked = false;
	RadioAnswerOption4Truth->Checked = false;
	RadioButtonTrueFalseAnswerFalse->Checked = false;
	RadioButtonTrueFalseAnswerTrue->Checked = false;
	PanelExamParticipation->Hide();
	}
private: System::Void ButtonHide_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelStudentExams->Hide();
	textBoxShowExams->ResetText();
}

private: System::Void ButtonStudentExamMarks_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < Exams::ExamList.Count; i++)
		for (int j = 0; j < Exams::ExamList[i]->AccessedStudentsList.Count; j++)
			if (Exams::ExamList[i]->AccessedStudentsList[j]->StudentId == PersonList::StudentList[user_student_index]->StudentId)
			{
				TextBoxStudentScorePanelExams->AppendText("آزمون " + Exams::ExamList[i]->ExamID + "\r\n");
			}
	for (int i = 0; i < Exams::ExamList.Count; i++)
		for (int j = 0; j < Exams::ExamList[i]->AccessedStudentsList.Count; j++)
			if (Exams::ExamList[exam_index]->isExamined) {
				if (Exams::ExamList[i]->AccessedStudentsList[j]->StudentId == PersonList::StudentList[user_student_index]->StudentId)
				{
					TextBoxStudentScorePaneMarks->AppendText(Exams::ExamList[i]->AccessedStudentsList[j]->Score + "\r\n");
				}
			}
			else {
				TextBoxStudentScorePaneMarks->AppendText("تصحیح نشده" + "\r\n");
			}
	PanelStudentScores->Show();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelStudentScores->Hide();
	TextBoxStudentScorePanelExams->ResetText();
	TextBoxStudentScorePaneMarks->ResetText();
}
};
}
