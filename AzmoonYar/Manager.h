#pragma once
#include "PersonInfo.h"
#include <msclr\marshal_cppstd.h>
namespace AzmoonYar {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for Manager
	/// </summary>
	public ref class Manager : public System::Windows::Forms::Form
	{
	public:
		int question_index = 0;
		int answer_index = 0;
		int current_question_index = 0;
		String^ manager_index;
		String^ exam_id;
		int accessed_student_index;
		int exam_index;
		bool true_false_answer;
		String^ test_true_answer;
	bool firstCreation = true;
	private: bool dragging;
	public:String^ username;
	public: System::Windows::Forms::Panel^ PanelManagerDashboard;
	public: System::Windows::Forms::Panel^ PanelManagerSideBarDashboard;


	private: System::Windows::Forms::Button^ buttonExamine;
	

	private:


	private: System::Windows::Forms::Button^ ButtonManageExams;

	private: System::Windows::Forms::Button^ ButtonExamHistory;


	private: System::Windows::Forms::Button^ ButtonCreateExam;

	public: System::Windows::Forms::Panel^ PanelManagerSignUp;
	private:

	private:

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ TextBoxManageraLastName;
	private:


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ TextBoxManagerName;
	private:



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ TextBoxManagerSignUpPassword;
	private:



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ TextBoxManagerSignUpUsername;
	private:

	private:
	public: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Panel^ PanelCreateExam;
	private:
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ TextBoxQuestionText;
	private:


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::RadioButton^ RadioExplainType;
	private:
	public: System::Windows::Forms::RadioButton^ RadioTrueFalse;
	public: System::Windows::Forms::RadioButton^ RadioTesti;

	public:
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Panel^ PanrlTrueFalseAnswer;
	private:

	private:
	public: System::Windows::Forms::Panel^ PanelTestiAnswers;
	private: System::Windows::Forms::Label^ label10;
	public:
	public: System::Windows::Forms::TextBox^ TextBoxOption4;
	private:
	public: System::Windows::Forms::TextBox^ TextBoxOption3;
	public: System::Windows::Forms::TextBox^ TextBoxOption2;
	public: System::Windows::Forms::TextBox^ TextBoxOption1;
	public: System::Windows::Forms::RadioButton^ RadioTrueFalseFalse;
	public: System::Windows::Forms::RadioButton^ RadioTrueFalseTrue;
	private: System::Windows::Forms::Label^ label15;
	public:
	public: System::Windows::Forms::RadioButton^ RadioOption4Truth;
	private:
	public: System::Windows::Forms::RadioButton^ RadioOption3Truth;
	public: System::Windows::Forms::RadioButton^ RadioOption2Truth;
	public: System::Windows::Forms::RadioButton^ RadioOption1Truth;
	private: System::Windows::Forms::Label^ label14;
	public:
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Button^ ButtonCreateQuestion;
	private:

	private: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::TextBox^ TextBoxExamId;
	private:
	public: System::Windows::Forms::Button^ ButtonFinishCreateExam;
private: System::Windows::Forms::Button^ button2;
public: System::Windows::Forms::Panel^ panelManageExam;
private:

private: System::Windows::Forms::Button^ buttonManageExamExit;
public: System::Windows::Forms::TextBox^ TextBoxExamManageID;
private:

private: System::Windows::Forms::Label^ label17;
public: System::Windows::Forms::Button^ ButtonExamIDgetter;
private: System::Windows::Forms::Panel^ PanelInfo;
public:
private: System::Windows::Forms::Label^ label22;
public: System::Windows::Forms::TextBox^ TextBoxAddedStudentsNumber;
private:
public: System::Windows::Forms::Button^ ButtonAddStudent;




private: System::Windows::Forms::Label^ label19;
public: System::Windows::Forms::TextBox^ TextBoxAddStudentID;
private:


private: System::Windows::Forms::Label^ label20;

private:




private: System::Windows::Forms::Label^ label21;
public: System::Windows::Forms::TextBox^ TextBoxBannedStudentsNumber;
private:

private:

private: System::Windows::Forms::Label^ label23;
public:
public: System::Windows::Forms::TextBox^ TextBoxBanStudentID;
private:
private: System::Windows::Forms::Label^ label24;

private:











private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::DateTimePicker^ DateTimePickerStartExamDate;




private:

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::DateTimePicker^ DateTimePickerStartExamTime;

public: System::Windows::Forms::Button^ ButtonBanStudent;
public: System::Windows::Forms::Button^ ButtonStartExamTime;
private: System::Windows::Forms::DateTimePicker^ DateTimePickerEndExamTime;
public:
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::DateTimePicker^ DateTimePickerEndExamDate;
private: System::Windows::Forms::Panel^ PanelExamine;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ ButtonExamineExamIDGetter;
private: System::Windows::Forms::TextBox^ TextBoxExamineExamIDGetter;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ TextBoxExamineShowExams;

private: System::Windows::Forms::Panel^ PanelExamineExam;





private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;


private: System::Windows::Forms::Button^ ButtonExamineSubmit;
private: System::Windows::Forms::TextBox^ TextBoxExplainScore;








private: System::Windows::Forms::TextBox^ TextBoxExamineTrueFalseScore;



private: System::Windows::Forms::TextBox^ TextBoxExamineTestAnswer;
private: System::Windows::Forms::TextBox^ TextBoxExamineTestScore;




private: System::Windows::Forms::TextBox^ TextBoxExamineExplainAnswer;

private: System::Windows::Forms::TextBox^ TextBoxExamineQuestionText;



private: System::Windows::Forms::TextBox^ TextBoxExamineQuestionNumber;
public: System::Windows::Forms::TextBox^ TextBoxScoreGetter;
private:
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ ExamineExit;

private: System::Windows::Forms::Button^ ButtonExamineNextQuestion;
private: System::Windows::Forms::RadioButton^ radioButtonExamineTrueFalseFalseAnswer;
private: System::Windows::Forms::RadioButton^ radioButtonExamineTrueFalseTrueAnswer;
private: System::Windows::Forms::Panel^ PanelExamHistory;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ ButtonHistoryExamIdGetter;
private: System::Windows::Forms::TextBox^ TextBoxHistoryExamId;
private: System::Windows::Forms::TextBox^ TextBoxHistoryExams;
private: System::Windows::Forms::Panel^ PanelExamHistoryDetails;

private: System::Windows::Forms::TextBox^ TextBoxStudentScoresList;

private: System::Windows::Forms::TextBox^ TextBoxStudentIdList;
private: System::Windows::Forms::DateTimePicker^ DateTimeHistoryStartDate;

private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ TextBoxHistoryNumberOfQuestions;

private: System::Windows::Forms::DateTimePicker^ DateTimeHistoryEndTime;

private: System::Windows::Forms::DateTimePicker^ DateTimeHistoryStartTime;

private: System::Windows::Forms::DateTimePicker^ DateTimeHistoryEndDate;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Button^ button4;













public:



private:
public:
public:
private:
public:

private:






public:


	public:

	private:
	public:


	public:

	public:







	private: Point offset;

	public:
		Manager(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			PanelExamHistoryDetails->Hide();
			PanelExamHistory->Hide();
			PanelExamineExam->Hide();
			PanelManagerDashboard->Hide();
			PanelExamine->Hide();
			PanelManagerSideBarDashboard->Hide();
			PanelManagerSignUp->Hide();
			if(PersonList::ManagerList.Count==0)
			ButtonManagerSignIn->Enabled = false;
			PanelCreateExam->Hide();
			panelManageExam->Hide();
			PanelInfo->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Manager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonManagerMainFormExit;
	protected:

	private: System::Windows::Forms::Button^ ButtonManagerSignUp;
	protected:

	private: System::Windows::Forms::Button^ ButtonManagerSignIn;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TextBoxManagerPassword;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::TextBox^ TextBoxManagerUsername;

	private: System::Windows::Forms::Label^ label1;
private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Manager::typeid));
			this->ButtonManagerMainFormExit = (gcnew System::Windows::Forms::Button());
			this->ButtonManagerSignUp = (gcnew System::Windows::Forms::Button());
			this->ButtonManagerSignIn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TextBoxManagerPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label = (gcnew System::Windows::Forms::Label());
			this->TextBoxManagerUsername = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PanelManagerDashboard = (gcnew System::Windows::Forms::Panel());
			this->PanelExamHistory = (gcnew System::Windows::Forms::Panel());
			this->PanelExamHistoryDetails = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->TextBoxHistoryNumberOfQuestions = (gcnew System::Windows::Forms::TextBox());
			this->DateTimeHistoryEndTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->DateTimeHistoryStartTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->DateTimeHistoryEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->DateTimeHistoryStartDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->TextBoxStudentScoresList = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxStudentIdList = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->ButtonHistoryExamIdGetter = (gcnew System::Windows::Forms::Button());
			this->TextBoxHistoryExamId = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxHistoryExams = (gcnew System::Windows::Forms::TextBox());
			this->PanelExamine = (gcnew System::Windows::Forms::Panel());
			this->PanelExamineExam = (gcnew System::Windows::Forms::Panel());
			this->ExamineExit = (gcnew System::Windows::Forms::Button());
			this->ButtonExamineNextQuestion = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->ButtonExamineSubmit = (gcnew System::Windows::Forms::Button());
			this->TextBoxExplainScore = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonExamineTrueFalseFalseAnswer = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonExamineTrueFalseTrueAnswer = (gcnew System::Windows::Forms::RadioButton());
			this->TextBoxExamineTrueFalseScore = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxExamineTestAnswer = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxExamineTestScore = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxExamineExplainAnswer = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxExamineQuestionText = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxExamineQuestionNumber = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->ButtonExamineExamIDGetter = (gcnew System::Windows::Forms::Button());
			this->TextBoxExamineExamIDGetter = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->TextBoxExamineShowExams = (gcnew System::Windows::Forms::TextBox());
			this->panelManageExam = (gcnew System::Windows::Forms::Panel());
			this->PanelInfo = (gcnew System::Windows::Forms::Panel());
			this->DateTimePickerEndExamTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->DateTimePickerEndExamDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->ButtonStartExamTime = (gcnew System::Windows::Forms::Button());
			this->DateTimePickerStartExamTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->DateTimePickerStartExamDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->TextBoxBannedStudentsNumber = (gcnew System::Windows::Forms::TextBox());
			this->ButtonBanStudent = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->TextBoxBanStudentID = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->TextBoxAddedStudentsNumber = (gcnew System::Windows::Forms::TextBox());
			this->ButtonAddStudent = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->TextBoxAddStudentID = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->ButtonExamIDgetter = (gcnew System::Windows::Forms::Button());
			this->TextBoxExamManageID = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->buttonManageExamExit = (gcnew System::Windows::Forms::Button());
			this->PanelCreateExam = (gcnew System::Windows::Forms::Panel());
			this->TextBoxScoreGetter = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ButtonFinishCreateExam = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->TextBoxExamId = (gcnew System::Windows::Forms::TextBox());
			this->ButtonCreateQuestion = (gcnew System::Windows::Forms::Button());
			this->PanrlTrueFalseAnswer = (gcnew System::Windows::Forms::Panel());
			this->RadioTrueFalseFalse = (gcnew System::Windows::Forms::RadioButton());
			this->RadioTrueFalseTrue = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->PanelTestiAnswers = (gcnew System::Windows::Forms::Panel());
			this->RadioOption4Truth = (gcnew System::Windows::Forms::RadioButton());
			this->RadioOption3Truth = (gcnew System::Windows::Forms::RadioButton());
			this->RadioOption2Truth = (gcnew System::Windows::Forms::RadioButton());
			this->RadioOption1Truth = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TextBoxOption4 = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxOption3 = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxOption2 = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxOption1 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TextBoxQuestionText = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->RadioExplainType = (gcnew System::Windows::Forms::RadioButton());
			this->RadioTrueFalse = (gcnew System::Windows::Forms::RadioButton());
			this->RadioTesti = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonExamine = (gcnew System::Windows::Forms::Button());
			this->ButtonManageExams = (gcnew System::Windows::Forms::Button());
			this->ButtonExamHistory = (gcnew System::Windows::Forms::Button());
			this->ButtonCreateExam = (gcnew System::Windows::Forms::Button());
			this->PanelManagerSideBarDashboard = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PanelManagerSignUp = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TextBoxManageraLastName = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TextBoxManagerName = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxManagerSignUpPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TextBoxManagerSignUpUsername = (gcnew System::Windows::Forms::TextBox());
			this->PanelManagerDashboard->SuspendLayout();
			this->PanelExamHistory->SuspendLayout();
			this->PanelExamHistoryDetails->SuspendLayout();
			this->PanelExamine->SuspendLayout();
			this->PanelExamineExam->SuspendLayout();
			this->panelManageExam->SuspendLayout();
			this->PanelInfo->SuspendLayout();
			this->PanelCreateExam->SuspendLayout();
			this->PanrlTrueFalseAnswer->SuspendLayout();
			this->PanelTestiAnswers->SuspendLayout();
			this->PanelManagerSideBarDashboard->SuspendLayout();
			this->PanelManagerSignUp->SuspendLayout();
			this->SuspendLayout();
			// 
			// ButtonManagerMainFormExit
			// 
			this->ButtonManagerMainFormExit->BackColor = System::Drawing::Color::Transparent;
			this->ButtonManagerMainFormExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ButtonManagerMainFormExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonManagerMainFormExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->ButtonManagerMainFormExit->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonManagerMainFormExit->Location = System::Drawing::Point(625, 436);
			this->ButtonManagerMainFormExit->Name = L"ButtonManagerMainFormExit";
			this->ButtonManagerMainFormExit->Size = System::Drawing::Size(163, 52);
			this->ButtonManagerMainFormExit->TabIndex = 19;
			this->ButtonManagerMainFormExit->Text = L"بازگشت به صفحه اصلی";
			this->ButtonManagerMainFormExit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ButtonManagerMainFormExit->UseVisualStyleBackColor = false;
			this->ButtonManagerMainFormExit->Click += gcnew System::EventHandler(this, &Manager::ButtonStudentMainFormExit_Click);
			// 
			// ButtonManagerSignUp
			// 
			this->ButtonManagerSignUp->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonManagerSignUp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonManagerSignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->ButtonManagerSignUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ButtonManagerSignUp->Location = System::Drawing::Point(296, 387);
			this->ButtonManagerSignUp->Name = L"ButtonManagerSignUp";
			this->ButtonManagerSignUp->Size = System::Drawing::Size(211, 50);
			this->ButtonManagerSignUp->TabIndex = 18;
			this->ButtonManagerSignUp->Text = L"ثبت نام";
			this->ButtonManagerSignUp->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ButtonManagerSignUp->UseVisualStyleBackColor = false;
			this->ButtonManagerSignUp->Click += gcnew System::EventHandler(this, &Manager::ButtonManagerSignUp_Click);
			// 
			// ButtonManagerSignIn
			// 
			this->ButtonManagerSignIn->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ButtonManagerSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonManagerSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->ButtonManagerSignIn->ForeColor = System::Drawing::Color::RoyalBlue;
			this->ButtonManagerSignIn->Location = System::Drawing::Point(340, 290);
			this->ButtonManagerSignIn->Name = L"ButtonManagerSignIn";
			this->ButtonManagerSignIn->Size = System::Drawing::Size(118, 52);
			this->ButtonManagerSignIn->TabIndex = 17;
			this->ButtonManagerSignIn->Text = L"ورود";
			this->ButtonManagerSignIn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ButtonManagerSignIn->UseVisualStyleBackColor = false;
			this->ButtonManagerSignIn->Click += gcnew System::EventHandler(this, &Manager::ButtonManagerSignIn_Click);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(251, 261);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(306, 2);
			this->panel2->TabIndex = 16;
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
			this->label3->TabIndex = 15;
			this->label3->Text = L"رمز عبور :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxManagerPassword
			// 
			this->TextBoxManagerPassword->BackColor = System::Drawing::Color::Black;
			this->TextBoxManagerPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxManagerPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->TextBoxManagerPassword->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxManagerPassword->Location = System::Drawing::Point(251, 231);
			this->TextBoxManagerPassword->Name = L"TextBoxManagerPassword";
			this->TextBoxManagerPassword->Size = System::Drawing::Size(306, 25);
			this->TextBoxManagerPassword->TabIndex = 14;
			this->TextBoxManagerPassword->UseSystemPasswordChar = true;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(251, 164);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(306, 2);
			this->panel1->TabIndex = 13;
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
			this->label->TabIndex = 12;
			this->label->Text = L"نام کاربری :";
			this->label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxManagerUsername
			// 
			this->TextBoxManagerUsername->BackColor = System::Drawing::Color::Black;
			this->TextBoxManagerUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxManagerUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxManagerUsername->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxManagerUsername->Location = System::Drawing::Point(254, 137);
			this->TextBoxManagerUsername->Name = L"TextBoxManagerUsername";
			this->TextBoxManagerUsername->Size = System::Drawing::Size(306, 31);
			this->TextBoxManagerUsername->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.5F));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(368, 9);
			this->label1->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(69, 40);
			this->label1->TabIndex = 10;
			this->label1->Text = L"مدیر";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// PanelManagerDashboard
			// 
			this->PanelManagerDashboard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelManagerDashboard.BackgroundImage")));
			this->PanelManagerDashboard->Controls->Add(this->PanelExamHistory);
			this->PanelManagerDashboard->Controls->Add(this->PanelExamine);
			this->PanelManagerDashboard->Controls->Add(this->panelManageExam);
			this->PanelManagerDashboard->Controls->Add(this->PanelCreateExam);
			this->PanelManagerDashboard->Controls->Add(this->buttonExamine);
			this->PanelManagerDashboard->Controls->Add(this->ButtonManageExams);
			this->PanelManagerDashboard->Controls->Add(this->ButtonExamHistory);
			this->PanelManagerDashboard->Controls->Add(this->ButtonCreateExam);
			this->PanelManagerDashboard->Controls->Add(this->PanelManagerSideBarDashboard);
			this->PanelManagerDashboard->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->PanelManagerDashboard->Location = System::Drawing::Point(0, 0);
			this->PanelManagerDashboard->Name = L"PanelManagerDashboard";
			this->PanelManagerDashboard->Size = System::Drawing::Size(800, 500);
			this->PanelManagerDashboard->TabIndex = 5;
			this->PanelManagerDashboard->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseDown);
			this->PanelManagerDashboard->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseMove);
			this->PanelManagerDashboard->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseUp);
			// 
			// PanelExamHistory
			// 
			this->PanelExamHistory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelExamHistory.BackgroundImage")));
			this->PanelExamHistory->Controls->Add(this->PanelExamHistoryDetails);
			this->PanelExamHistory->Controls->Add(this->label33);
			this->PanelExamHistory->Controls->Add(this->button7);
			this->PanelExamHistory->Controls->Add(this->ButtonHistoryExamIdGetter);
			this->PanelExamHistory->Controls->Add(this->TextBoxHistoryExamId);
			this->PanelExamHistory->Controls->Add(this->TextBoxHistoryExams);
			this->PanelExamHistory->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelExamHistory->Location = System::Drawing::Point(0, 0);
			this->PanelExamHistory->Name = L"PanelExamHistory";
			this->PanelExamHistory->Size = System::Drawing::Size(800, 500);
			this->PanelExamHistory->TabIndex = 9;
			// 
			// PanelExamHistoryDetails
			// 
			this->PanelExamHistoryDetails->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelExamHistoryDetails.BackgroundImage")));
			this->PanelExamHistoryDetails->Controls->Add(this->button4);
			this->PanelExamHistoryDetails->Controls->Add(this->label39);
			this->PanelExamHistoryDetails->Controls->Add(this->label38);
			this->PanelExamHistoryDetails->Controls->Add(this->label37);
			this->PanelExamHistoryDetails->Controls->Add(this->label36);
			this->PanelExamHistoryDetails->Controls->Add(this->label35);
			this->PanelExamHistoryDetails->Controls->Add(this->TextBoxHistoryNumberOfQuestions);
			this->PanelExamHistoryDetails->Controls->Add(this->DateTimeHistoryEndTime);
			this->PanelExamHistoryDetails->Controls->Add(this->DateTimeHistoryStartTime);
			this->PanelExamHistoryDetails->Controls->Add(this->DateTimeHistoryEndDate);
			this->PanelExamHistoryDetails->Controls->Add(this->DateTimeHistoryStartDate);
			this->PanelExamHistoryDetails->Controls->Add(this->TextBoxStudentScoresList);
			this->PanelExamHistoryDetails->Controls->Add(this->TextBoxStudentIdList);
			this->PanelExamHistoryDetails->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelExamHistoryDetails->Location = System::Drawing::Point(0, 0);
			this->PanelExamHistoryDetails->Name = L"PanelExamHistoryDetails";
			this->PanelExamHistoryDetails->Size = System::Drawing::Size(800, 500);
			this->PanelExamHistoryDetails->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Location = System::Drawing::Point(12, 443);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button4->Size = System::Drawing::Size(119, 41);
			this->button4->TabIndex = 12;
			this->button4->Text = L"بازگشت";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Manager::button4_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label39->ForeColor = System::Drawing::Color::IndianRed;
			this->label39->Location = System::Drawing::Point(269, 100);
			this->label39->Name = L"label39";
			this->label39->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label39->Size = System::Drawing::Size(182, 25);
			this->label39->TabIndex = 11;
			this->label39->Text = L"نمره دانشجو در آزمون :";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label38->ForeColor = System::Drawing::Color::IndianRed;
			this->label38->Location = System::Drawing::Point(609, 100);
			this->label38->Name = L"label38";
			this->label38->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label38->Size = System::Drawing::Size(140, 25);
			this->label38->TabIndex = 10;
			this->label38->Text = L"شماره دانشجویی :";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label37->Location = System::Drawing::Point(167, 36);
			this->label37->Name = L"label37";
			this->label37->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label37->Size = System::Drawing::Size(100, 25);
			this->label37->TabIndex = 9;
			this->label37->Text = L"تعداد سوال :";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label36->Location = System::Drawing::Point(667, 54);
			this->label36->Name = L"label36";
			this->label36->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label36->Size = System::Drawing::Size(95, 25);
			this->label36->TabIndex = 8;
			this->label36->Text = L"زمان پایان :";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label35->Location = System::Drawing::Point(665, 18);
			this->label35->Name = L"label35";
			this->label35->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label35->Size = System::Drawing::Size(107, 25);
			this->label35->TabIndex = 7;
			this->label35->Text = L"زمان شروع :";
			// 
			// TextBoxHistoryNumberOfQuestions
			// 
			this->TextBoxHistoryNumberOfQuestions->Location = System::Drawing::Point(103, 40);
			this->TextBoxHistoryNumberOfQuestions->Name = L"TextBoxHistoryNumberOfQuestions";
			this->TextBoxHistoryNumberOfQuestions->ReadOnly = true;
			this->TextBoxHistoryNumberOfQuestions->Size = System::Drawing::Size(46, 20);
			this->TextBoxHistoryNumberOfQuestions->TabIndex = 6;
			// 
			// DateTimeHistoryEndTime
			// 
			this->DateTimeHistoryEndTime->Enabled = false;
			this->DateTimeHistoryEndTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->DateTimeHistoryEndTime->Location = System::Drawing::Point(301, 56);
			this->DateTimeHistoryEndTime->Name = L"DateTimeHistoryEndTime";
			this->DateTimeHistoryEndTime->Size = System::Drawing::Size(95, 20);
			this->DateTimeHistoryEndTime->TabIndex = 5;
			// 
			// DateTimeHistoryStartTime
			// 
			this->DateTimeHistoryStartTime->Enabled = false;
			this->DateTimeHistoryStartTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->DateTimeHistoryStartTime->Location = System::Drawing::Point(301, 21);
			this->DateTimeHistoryStartTime->Name = L"DateTimeHistoryStartTime";
			this->DateTimeHistoryStartTime->Size = System::Drawing::Size(95, 20);
			this->DateTimeHistoryStartTime->TabIndex = 4;
			// 
			// DateTimeHistoryEndDate
			// 
			this->DateTimeHistoryEndDate->Enabled = false;
			this->DateTimeHistoryEndDate->Location = System::Drawing::Point(424, 56);
			this->DateTimeHistoryEndDate->Name = L"DateTimeHistoryEndDate";
			this->DateTimeHistoryEndDate->Size = System::Drawing::Size(200, 20);
			this->DateTimeHistoryEndDate->TabIndex = 3;
			// 
			// DateTimeHistoryStartDate
			// 
			this->DateTimeHistoryStartDate->Enabled = false;
			this->DateTimeHistoryStartDate->Location = System::Drawing::Point(424, 21);
			this->DateTimeHistoryStartDate->Name = L"DateTimeHistoryStartDate";
			this->DateTimeHistoryStartDate->Size = System::Drawing::Size(200, 20);
			this->DateTimeHistoryStartDate->TabIndex = 2;
			// 
			// TextBoxStudentScoresList
			// 
			this->TextBoxStudentScoresList->BackColor = System::Drawing::Color::LightCyan;
			this->TextBoxStudentScoresList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxStudentScoresList->Location = System::Drawing::Point(184, 134);
			this->TextBoxStudentScoresList->Multiline = true;
			this->TextBoxStudentScoresList->Name = L"TextBoxStudentScoresList";
			this->TextBoxStudentScoresList->ReadOnly = true;
			this->TextBoxStudentScoresList->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxStudentScoresList->Size = System::Drawing::Size(266, 340);
			this->TextBoxStudentScoresList->TabIndex = 1;
			this->TextBoxStudentScoresList->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxStudentIdList
			// 
			this->TextBoxStudentIdList->BackColor = System::Drawing::Color::LightCyan;
			this->TextBoxStudentIdList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxStudentIdList->Location = System::Drawing::Point(478, 134);
			this->TextBoxStudentIdList->Multiline = true;
			this->TextBoxStudentIdList->Name = L"TextBoxStudentIdList";
			this->TextBoxStudentIdList->ReadOnly = true;
			this->TextBoxStudentIdList->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxStudentIdList->Size = System::Drawing::Size(266, 340);
			this->TextBoxStudentIdList->TabIndex = 0;
			this->TextBoxStudentIdList->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label33->Location = System::Drawing::Point(685, 24);
			this->label33->Name = L"label33";
			this->label33->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label33->Size = System::Drawing::Size(98, 29);
			this->label33->TabIndex = 18;
			this->label33->Text = L"آزمون ها :";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button7->Location = System::Drawing::Point(18, 423);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(131, 53);
			this->button7->TabIndex = 17;
			this->button7->Text = L"بازگشت";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Manager::button7_Click);
			// 
			// ButtonHistoryExamIdGetter
			// 
			this->ButtonHistoryExamIdGetter->BackColor = System::Drawing::Color::PaleGreen;
			this->ButtonHistoryExamIdGetter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonHistoryExamIdGetter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->ButtonHistoryExamIdGetter->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ButtonHistoryExamIdGetter->Location = System::Drawing::Point(167, 261);
			this->ButtonHistoryExamIdGetter->Name = L"ButtonHistoryExamIdGetter";
			this->ButtonHistoryExamIdGetter->Size = System::Drawing::Size(177, 53);
			this->ButtonHistoryExamIdGetter->TabIndex = 16;
			this->ButtonHistoryExamIdGetter->Text = L"مشاهده نمرات ";
			this->ButtonHistoryExamIdGetter->UseVisualStyleBackColor = false;
			this->ButtonHistoryExamIdGetter->Click += gcnew System::EventHandler(this, &Manager::ButtonHistoryExamIdGetter_Click);
			// 
			// TextBoxHistoryExamId
			// 
			this->TextBoxHistoryExamId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxHistoryExamId->Location = System::Drawing::Point(167, 196);
			this->TextBoxHistoryExamId->Name = L"TextBoxHistoryExamId";
			this->TextBoxHistoryExamId->Size = System::Drawing::Size(177, 38);
			this->TextBoxHistoryExamId->TabIndex = 15;
			// 
			// TextBoxHistoryExams
			// 
			this->TextBoxHistoryExams->BackColor = System::Drawing::Color::LightCyan;
			this->TextBoxHistoryExams->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->TextBoxHistoryExams->Location = System::Drawing::Point(519, 67);
			this->TextBoxHistoryExams->Multiline = true;
			this->TextBoxHistoryExams->Name = L"TextBoxHistoryExams";
			this->TextBoxHistoryExams->ReadOnly = true;
			this->TextBoxHistoryExams->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TextBoxHistoryExams->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxHistoryExams->Size = System::Drawing::Size(263, 391);
			this->TextBoxHistoryExams->TabIndex = 14;
			this->TextBoxHistoryExams->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// PanelExamine
			// 
			this->PanelExamine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelExamine.BackgroundImage")));
			this->PanelExamine->Controls->Add(this->PanelExamineExam);
			this->PanelExamine->Controls->Add(this->button3);
			this->PanelExamine->Controls->Add(this->ButtonExamineExamIDGetter);
			this->PanelExamine->Controls->Add(this->TextBoxExamineExamIDGetter);
			this->PanelExamine->Controls->Add(this->label29);
			this->PanelExamine->Controls->Add(this->label28);
			this->PanelExamine->Controls->Add(this->TextBoxExamineShowExams);
			this->PanelExamine->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelExamine->Location = System::Drawing::Point(0, 0);
			this->PanelExamine->Name = L"PanelExamine";
			this->PanelExamine->Size = System::Drawing::Size(800, 500);
			this->PanelExamine->TabIndex = 1;
			// 
			// PanelExamineExam
			// 
			this->PanelExamineExam->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelExamineExam.BackgroundImage")));
			this->PanelExamineExam->Controls->Add(this->ExamineExit);
			this->PanelExamineExam->Controls->Add(this->ButtonExamineNextQuestion);
			this->PanelExamineExam->Controls->Add(this->label32);
			this->PanelExamineExam->Controls->Add(this->label31);
			this->PanelExamineExam->Controls->Add(this->label30);
			this->PanelExamineExam->Controls->Add(this->ButtonExamineSubmit);
			this->PanelExamineExam->Controls->Add(this->TextBoxExplainScore);
			this->PanelExamineExam->Controls->Add(this->radioButtonExamineTrueFalseFalseAnswer);
			this->PanelExamineExam->Controls->Add(this->radioButtonExamineTrueFalseTrueAnswer);
			this->PanelExamineExam->Controls->Add(this->TextBoxExamineTrueFalseScore);
			this->PanelExamineExam->Controls->Add(this->TextBoxExamineTestAnswer);
			this->PanelExamineExam->Controls->Add(this->TextBoxExamineTestScore);
			this->PanelExamineExam->Controls->Add(this->TextBoxExamineExplainAnswer);
			this->PanelExamineExam->Controls->Add(this->TextBoxExamineQuestionText);
			this->PanelExamineExam->Controls->Add(this->TextBoxExamineQuestionNumber);
			this->PanelExamineExam->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelExamineExam->Location = System::Drawing::Point(0, 0);
			this->PanelExamineExam->Name = L"PanelExamineExam";
			this->PanelExamineExam->Size = System::Drawing::Size(800, 500);
			this->PanelExamineExam->TabIndex = 6;
			// 
			// ExamineExit
			// 
			this->ExamineExit->BackColor = System::Drawing::Color::PeachPuff;
			this->ExamineExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExamineExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ExamineExit->ForeColor = System::Drawing::Color::Red;
			this->ExamineExit->Location = System::Drawing::Point(29, 437);
			this->ExamineExit->Name = L"ExamineExit";
			this->ExamineExit->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ExamineExit->Size = System::Drawing::Size(161, 49);
			this->ExamineExit->TabIndex = 17;
			this->ExamineExit->Text = L"خروج";
			this->ExamineExit->UseVisualStyleBackColor = false;
			this->ExamineExit->Click += gcnew System::EventHandler(this, &Manager::ExamineExit_Click);
			// 
			// ButtonExamineNextQuestion
			// 
			this->ButtonExamineNextQuestion->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonExamineNextQuestion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonExamineNextQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->ButtonExamineNextQuestion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ButtonExamineNextQuestion->Location = System::Drawing::Point(29, 382);
			this->ButtonExamineNextQuestion->Name = L"ButtonExamineNextQuestion";
			this->ButtonExamineNextQuestion->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ButtonExamineNextQuestion->Size = System::Drawing::Size(161, 49);
			this->ButtonExamineNextQuestion->TabIndex = 16;
			this->ButtonExamineNextQuestion->Text = L"سوال بعدی";
			this->ButtonExamineNextQuestion->UseVisualStyleBackColor = false;
			this->ButtonExamineNextQuestion->Click += gcnew System::EventHandler(this, &Manager::ButtonExamineNextQuestion_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label32->Location = System::Drawing::Point(610, 434);
			this->label32->Name = L"label32";
			this->label32->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label32->Size = System::Drawing::Size(127, 25);
			this->label32->TabIndex = 13;
			this->label32->Text = L"نمره صحیح/غلط";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label31->Location = System::Drawing::Point(654, 386);
			this->label31->Name = L"label31";
			this->label31->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label31->Size = System::Drawing::Size(83, 25);
			this->label31->TabIndex = 12;
			this->label31->Text = L"نمره تستی";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label30->Location = System::Drawing::Point(633, 335);
			this->label30->Name = L"label30";
			this->label30->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label30->Size = System::Drawing::Size(104, 25);
			this->label30->TabIndex = 11;
			this->label30->Text = L"نمره تشریحی";
			// 
			// ButtonExamineSubmit
			// 
			this->ButtonExamineSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ButtonExamineSubmit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonExamineSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->ButtonExamineSubmit->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ButtonExamineSubmit->Location = System::Drawing::Point(29, 327);
			this->ButtonExamineSubmit->Name = L"ButtonExamineSubmit";
			this->ButtonExamineSubmit->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ButtonExamineSubmit->Size = System::Drawing::Size(161, 49);
			this->ButtonExamineSubmit->TabIndex = 9;
			this->ButtonExamineSubmit->Text = L"ثبت و دانشجوی بعدی";
			this->ButtonExamineSubmit->UseVisualStyleBackColor = false;
			this->ButtonExamineSubmit->Click += gcnew System::EventHandler(this, &Manager::ButtonExamineSubmit_Click);
			// 
			// TextBoxExplainScore
			// 
			this->TextBoxExplainScore->BackColor = System::Drawing::SystemColors::Menu;
			this->TextBoxExplainScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExplainScore->Location = System::Drawing::Point(548, 332);
			this->TextBoxExplainScore->Name = L"TextBoxExplainScore";
			this->TextBoxExplainScore->Size = System::Drawing::Size(46, 31);
			this->TextBoxExplainScore->TabIndex = 8;
			// 
			// radioButtonExamineTrueFalseFalseAnswer
			// 
			this->radioButtonExamineTrueFalseFalseAnswer->AutoSize = true;
			this->radioButtonExamineTrueFalseFalseAnswer->BackColor = System::Drawing::Color::Transparent;
			this->radioButtonExamineTrueFalseFalseAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->radioButtonExamineTrueFalseFalseAnswer->Location = System::Drawing::Point(471, 252);
			this->radioButtonExamineTrueFalseFalseAnswer->Name = L"radioButtonExamineTrueFalseFalseAnswer";
			this->radioButtonExamineTrueFalseFalseAnswer->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->radioButtonExamineTrueFalseFalseAnswer->Size = System::Drawing::Size(63, 33);
			this->radioButtonExamineTrueFalseFalseAnswer->TabIndex = 7;
			this->radioButtonExamineTrueFalseFalseAnswer->TabStop = true;
			this->radioButtonExamineTrueFalseFalseAnswer->Text = L"غلط";
			this->radioButtonExamineTrueFalseFalseAnswer->UseVisualStyleBackColor = false;
			// 
			// radioButtonExamineTrueFalseTrueAnswer
			// 
			this->radioButtonExamineTrueFalseTrueAnswer->AutoSize = true;
			this->radioButtonExamineTrueFalseTrueAnswer->BackColor = System::Drawing::Color::Transparent;
			this->radioButtonExamineTrueFalseTrueAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->radioButtonExamineTrueFalseTrueAnswer->Location = System::Drawing::Point(644, 252);
			this->radioButtonExamineTrueFalseTrueAnswer->Name = L"radioButtonExamineTrueFalseTrueAnswer";
			this->radioButtonExamineTrueFalseTrueAnswer->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->radioButtonExamineTrueFalseTrueAnswer->Size = System::Drawing::Size(83, 33);
			this->radioButtonExamineTrueFalseTrueAnswer->TabIndex = 6;
			this->radioButtonExamineTrueFalseTrueAnswer->TabStop = true;
			this->radioButtonExamineTrueFalseTrueAnswer->Text = L"صحیح";
			this->radioButtonExamineTrueFalseTrueAnswer->UseVisualStyleBackColor = false;
			// 
			// TextBoxExamineTrueFalseScore
			// 
			this->TextBoxExamineTrueFalseScore->BackColor = System::Drawing::SystemColors::Menu;
			this->TextBoxExamineTrueFalseScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineTrueFalseScore->Location = System::Drawing::Point(548, 434);
			this->TextBoxExamineTrueFalseScore->Name = L"TextBoxExamineTrueFalseScore";
			this->TextBoxExamineTrueFalseScore->ReadOnly = true;
			this->TextBoxExamineTrueFalseScore->Size = System::Drawing::Size(46, 31);
			this->TextBoxExamineTrueFalseScore->TabIndex = 5;
			// 
			// TextBoxExamineTestAnswer
			// 
			this->TextBoxExamineTestAnswer->BackColor = System::Drawing::SystemColors::Menu;
			this->TextBoxExamineTestAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineTestAnswer->Location = System::Drawing::Point(252, 190);
			this->TextBoxExamineTestAnswer->Name = L"TextBoxExamineTestAnswer";
			this->TextBoxExamineTestAnswer->ReadOnly = true;
			this->TextBoxExamineTestAnswer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxExamineTestAnswer->Size = System::Drawing::Size(473, 31);
			this->TextBoxExamineTestAnswer->TabIndex = 4;
			this->TextBoxExamineTestAnswer->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxExamineTestScore
			// 
			this->TextBoxExamineTestScore->BackColor = System::Drawing::SystemColors::Menu;
			this->TextBoxExamineTestScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineTestScore->Location = System::Drawing::Point(548, 386);
			this->TextBoxExamineTestScore->Name = L"TextBoxExamineTestScore";
			this->TextBoxExamineTestScore->ReadOnly = true;
			this->TextBoxExamineTestScore->Size = System::Drawing::Size(46, 31);
			this->TextBoxExamineTestScore->TabIndex = 3;
			// 
			// TextBoxExamineExplainAnswer
			// 
			this->TextBoxExamineExplainAnswer->BackColor = System::Drawing::SystemColors::Menu;
			this->TextBoxExamineExplainAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineExplainAnswer->Location = System::Drawing::Point(103, 111);
			this->TextBoxExamineExplainAnswer->Multiline = true;
			this->TextBoxExamineExplainAnswer->Name = L"TextBoxExamineExplainAnswer";
			this->TextBoxExamineExplainAnswer->ReadOnly = true;
			this->TextBoxExamineExplainAnswer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxExamineExplainAnswer->Size = System::Drawing::Size(623, 63);
			this->TextBoxExamineExplainAnswer->TabIndex = 2;
			this->TextBoxExamineExplainAnswer->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxExamineQuestionText
			// 
			this->TextBoxExamineQuestionText->BackColor = System::Drawing::SystemColors::Menu;
			this->TextBoxExamineQuestionText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineQuestionText->Location = System::Drawing::Point(21, 34);
			this->TextBoxExamineQuestionText->Multiline = true;
			this->TextBoxExamineQuestionText->Name = L"TextBoxExamineQuestionText";
			this->TextBoxExamineQuestionText->ReadOnly = true;
			this->TextBoxExamineQuestionText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxExamineQuestionText->Size = System::Drawing::Size(705, 63);
			this->TextBoxExamineQuestionText->TabIndex = 1;
			this->TextBoxExamineQuestionText->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxExamineQuestionNumber
			// 
			this->TextBoxExamineQuestionNumber->BackColor = System::Drawing::SystemColors::Menu;
			this->TextBoxExamineQuestionNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineQuestionNumber->Location = System::Drawing::Point(750, 35);
			this->TextBoxExamineQuestionNumber->Name = L"TextBoxExamineQuestionNumber";
			this->TextBoxExamineQuestionNumber->ReadOnly = true;
			this->TextBoxExamineQuestionNumber->Size = System::Drawing::Size(30, 26);
			this->TextBoxExamineQuestionNumber->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Location = System::Drawing::Point(21, 436);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 48);
			this->button3->TabIndex = 5;
			this->button3->Text = L"بازگشت";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Manager::button3_Click);
			// 
			// ButtonExamineExamIDGetter
			// 
			this->ButtonExamineExamIDGetter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->ButtonExamineExamIDGetter->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ButtonExamineExamIDGetter->Location = System::Drawing::Point(163, 200);
			this->ButtonExamineExamIDGetter->Name = L"ButtonExamineExamIDGetter";
			this->ButtonExamineExamIDGetter->Size = System::Drawing::Size(102, 42);
			this->ButtonExamineExamIDGetter->TabIndex = 4;
			this->ButtonExamineExamIDGetter->Text = L"تصحیح";
			this->ButtonExamineExamIDGetter->UseVisualStyleBackColor = true;
			this->ButtonExamineExamIDGetter->Click += gcnew System::EventHandler(this, &Manager::ButtonExamineExamIDGetter_Click);
			// 
			// TextBoxExamineExamIDGetter
			// 
			this->TextBoxExamineExamIDGetter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineExamIDGetter->Location = System::Drawing::Point(103, 138);
			this->TextBoxExamineExamIDGetter->Name = L"TextBoxExamineExamIDGetter";
			this->TextBoxExamineExamIDGetter->Size = System::Drawing::Size(233, 38);
			this->TextBoxExamineExamIDGetter->TabIndex = 3;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label29->Location = System::Drawing::Point(175, 80);
			this->label29->Name = L"label29";
			this->label29->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label29->Size = System::Drawing::Size(167, 33);
			this->label29->TabIndex = 2;
			this->label29->Text = L"شناسه آزمون  :";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label28->Location = System::Drawing::Point(636, 9);
			this->label28->Name = L"label28";
			this->label28->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label28->Size = System::Drawing::Size(133, 37);
			this->label28->TabIndex = 1;
			this->label28->Text = L"آزمون ها :";
			// 
			// TextBoxExamineShowExams
			// 
			this->TextBoxExamineShowExams->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->TextBoxExamineShowExams->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxExamineShowExams->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxExamineShowExams->Location = System::Drawing::Point(454, 51);
			this->TextBoxExamineShowExams->Multiline = true;
			this->TextBoxExamineShowExams->Name = L"TextBoxExamineShowExams";
			this->TextBoxExamineShowExams->ReadOnly = true;
			this->TextBoxExamineShowExams->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TextBoxExamineShowExams->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBoxExamineShowExams->Size = System::Drawing::Size(315, 434);
			this->TextBoxExamineShowExams->TabIndex = 0;
			this->TextBoxExamineShowExams->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// panelManageExam
			// 
			this->panelManageExam->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelManageExam.BackgroundImage")));
			this->panelManageExam->Controls->Add(this->PanelInfo);
			this->panelManageExam->Controls->Add(this->ButtonExamIDgetter);
			this->panelManageExam->Controls->Add(this->TextBoxExamManageID);
			this->panelManageExam->Controls->Add(this->label17);
			this->panelManageExam->Controls->Add(this->buttonManageExamExit);
			this->panelManageExam->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelManageExam->Location = System::Drawing::Point(0, 0);
			this->panelManageExam->Name = L"panelManageExam";
			this->panelManageExam->Size = System::Drawing::Size(800, 500);
			this->panelManageExam->TabIndex = 8;
			// 
			// PanelInfo
			// 
			this->PanelInfo->BackColor = System::Drawing::Color::LightCyan;
			this->PanelInfo->Controls->Add(this->DateTimePickerEndExamTime);
			this->PanelInfo->Controls->Add(this->label18);
			this->PanelInfo->Controls->Add(this->label25);
			this->PanelInfo->Controls->Add(this->DateTimePickerEndExamDate);
			this->PanelInfo->Controls->Add(this->ButtonStartExamTime);
			this->PanelInfo->Controls->Add(this->DateTimePickerStartExamTime);
			this->PanelInfo->Controls->Add(this->label27);
			this->PanelInfo->Controls->Add(this->label26);
			this->PanelInfo->Controls->Add(this->DateTimePickerStartExamDate);
			this->PanelInfo->Controls->Add(this->label21);
			this->PanelInfo->Controls->Add(this->TextBoxBannedStudentsNumber);
			this->PanelInfo->Controls->Add(this->ButtonBanStudent);
			this->PanelInfo->Controls->Add(this->label23);
			this->PanelInfo->Controls->Add(this->TextBoxBanStudentID);
			this->PanelInfo->Controls->Add(this->label24);
			this->PanelInfo->Controls->Add(this->label22);
			this->PanelInfo->Controls->Add(this->TextBoxAddedStudentsNumber);
			this->PanelInfo->Controls->Add(this->ButtonAddStudent);
			this->PanelInfo->Controls->Add(this->label19);
			this->PanelInfo->Controls->Add(this->TextBoxAddStudentID);
			this->PanelInfo->Controls->Add(this->label20);
			this->PanelInfo->Location = System::Drawing::Point(12, 95);
			this->PanelInfo->Name = L"PanelInfo";
			this->PanelInfo->Size = System::Drawing::Size(776, 322);
			this->PanelInfo->TabIndex = 36;
			// 
			// DateTimePickerEndExamTime
			// 
			this->DateTimePickerEndExamTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->DateTimePickerEndExamTime->Location = System::Drawing::Point(228, 126);
			this->DateTimePickerEndExamTime->Name = L"DateTimePickerEndExamTime";
			this->DateTimePickerEndExamTime->Size = System::Drawing::Size(80, 20);
			this->DateTimePickerEndExamTime->TabIndex = 33;
			this->DateTimePickerEndExamTime->Value = System::DateTime(1991, 6, 7, 21, 10, 0, 0);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label18->Location = System::Drawing::Point(316, 126);
			this->label18->Name = L"label18";
			this->label18->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label18->Size = System::Drawing::Size(112, 18);
			this->label18->TabIndex = 32;
			this->label18->Text = L"   زمان پایان آزمون:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label25->Location = System::Drawing::Point(652, 126);
			this->label25->Name = L"label25";
			this->label25->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label25->Size = System::Drawing::Size(114, 18);
			this->label25->TabIndex = 31;
			this->label25->Text = L"   تاریخ پایان آزمون:";
			// 
			// DateTimePickerEndExamDate
			// 
			this->DateTimePickerEndExamDate->Location = System::Drawing::Point(439, 126);
			this->DateTimePickerEndExamDate->Name = L"DateTimePickerEndExamDate";
			this->DateTimePickerEndExamDate->Size = System::Drawing::Size(199, 20);
			this->DateTimePickerEndExamDate->TabIndex = 30;
			// 
			// ButtonStartExamTime
			// 
			this->ButtonStartExamTime->BackColor = System::Drawing::Color::LightBlue;
			this->ButtonStartExamTime->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonStartExamTime->ForeColor = System::Drawing::Color::Red;
			this->ButtonStartExamTime->Location = System::Drawing::Point(79, 99);
			this->ButtonStartExamTime->Name = L"ButtonStartExamTime";
			this->ButtonStartExamTime->Size = System::Drawing::Size(79, 50);
			this->ButtonStartExamTime->TabIndex = 29;
			this->ButtonStartExamTime->Text = L"تنظیم زمان";
			this->ButtonStartExamTime->UseVisualStyleBackColor = false;
			this->ButtonStartExamTime->Click += gcnew System::EventHandler(this, &Manager::ButtonStartExamTime_Click);
			// 
			// DateTimePickerStartExamTime
			// 
			this->DateTimePickerStartExamTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->DateTimePickerStartExamTime->Location = System::Drawing::Point(228, 99);
			this->DateTimePickerStartExamTime->Name = L"DateTimePickerStartExamTime";
			this->DateTimePickerStartExamTime->Size = System::Drawing::Size(80, 20);
			this->DateTimePickerStartExamTime->TabIndex = 28;
			this->DateTimePickerStartExamTime->Value = System::DateTime(1991, 6, 7, 21, 10, 0, 0);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label27->Location = System::Drawing::Point(316, 99);
			this->label27->Name = L"label27";
			this->label27->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label27->Size = System::Drawing::Size(118, 18);
			this->label27->TabIndex = 27;
			this->label27->Text = L"   زمان شروع آزمون:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label26->Location = System::Drawing::Point(652, 99);
			this->label26->Name = L"label26";
			this->label26->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label26->Size = System::Drawing::Size(120, 18);
			this->label26->TabIndex = 26;
			this->label26->Text = L"   تاریخ شروع آزمون:";
			// 
			// DateTimePickerStartExamDate
			// 
			this->DateTimePickerStartExamDate->Location = System::Drawing::Point(439, 99);
			this->DateTimePickerStartExamDate->Name = L"DateTimePickerStartExamDate";
			this->DateTimePickerStartExamDate->Size = System::Drawing::Size(199, 20);
			this->DateTimePickerStartExamDate->TabIndex = 25;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(325, 64);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(70, 15);
			this->label21->TabIndex = 16;
			this->label21->Text = L"تعداد دانشجویان";
			// 
			// TextBoxBannedStudentsNumber
			// 
			this->TextBoxBannedStudentsNumber->Location = System::Drawing::Point(230, 64);
			this->TextBoxBannedStudentsNumber->Name = L"TextBoxBannedStudentsNumber";
			this->TextBoxBannedStudentsNumber->ReadOnly = true;
			this->TextBoxBannedStudentsNumber->Size = System::Drawing::Size(29, 20);
			this->TextBoxBannedStudentsNumber->TabIndex = 15;
			this->TextBoxBannedStudentsNumber->Text = L"0";
			// 
			// ButtonBanStudent
			// 
			this->ButtonBanStudent->BackColor = System::Drawing::Color::Thistle;
			this->ButtonBanStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonBanStudent->ForeColor = System::Drawing::Color::Navy;
			this->ButtonBanStudent->Location = System::Drawing::Point(79, 57);
			this->ButtonBanStudent->Name = L"ButtonBanStudent";
			this->ButtonBanStudent->Size = System::Drawing::Size(99, 23);
			this->ButtonBanStudent->TabIndex = 14;
			this->ButtonBanStudent->Text = L"حذف دانشجو";
			this->ButtonBanStudent->UseVisualStyleBackColor = false;
			this->ButtonBanStudent->Click += gcnew System::EventHandler(this, &Manager::ButtonBanStudent_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->Location = System::Drawing::Point(558, 62);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(74, 15);
			this->label23->TabIndex = 13;
			this->label23->Text = L"شماره دانشجویی";
			// 
			// TextBoxBanStudentID
			// 
			this->TextBoxBanStudentID->Location = System::Drawing::Point(439, 61);
			this->TextBoxBanStudentID->Name = L"TextBoxBanStudentID";
			this->TextBoxBanStudentID->Size = System::Drawing::Size(100, 20);
			this->TextBoxBanStudentID->TabIndex = 12;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label24->Location = System::Drawing::Point(646, 61);
			this->label24->Name = L"label24";
			this->label24->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label24->Size = System::Drawing::Size(122, 18);
			this->label24->TabIndex = 11;
			this->label24->Text = L" : محروم کردن دانشجو";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(323, 22);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(70, 15);
			this->label22->TabIndex = 10;
			this->label22->Text = L"تعداد دانشجویان";
			// 
			// TextBoxAddedStudentsNumber
			// 
			this->TextBoxAddedStudentsNumber->Location = System::Drawing::Point(230, 21);
			this->TextBoxAddedStudentsNumber->Name = L"TextBoxAddedStudentsNumber";
			this->TextBoxAddedStudentsNumber->ReadOnly = true;
			this->TextBoxAddedStudentsNumber->Size = System::Drawing::Size(29, 20);
			this->TextBoxAddedStudentsNumber->TabIndex = 8;
			this->TextBoxAddedStudentsNumber->Text = L"0";
			// 
			// ButtonAddStudent
			// 
			this->ButtonAddStudent->BackColor = System::Drawing::Color::Thistle;
			this->ButtonAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonAddStudent->ForeColor = System::Drawing::Color::Navy;
			this->ButtonAddStudent->Location = System::Drawing::Point(79, 17);
			this->ButtonAddStudent->Name = L"ButtonAddStudent";
			this->ButtonAddStudent->Size = System::Drawing::Size(99, 23);
			this->ButtonAddStudent->TabIndex = 7;
			this->ButtonAddStudent->Text = L"افزودن دانشجو";
			this->ButtonAddStudent->UseVisualStyleBackColor = false;
			this->ButtonAddStudent->Click += gcnew System::EventHandler(this, &Manager::ButtonAddStudent_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->Location = System::Drawing::Point(560, 21);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(74, 15);
			this->label19->TabIndex = 6;
			this->label19->Text = L"شماره دانشجویی";
			// 
			// TextBoxAddStudentID
			// 
			this->TextBoxAddStudentID->Location = System::Drawing::Point(439, 20);
			this->TextBoxAddStudentID->Name = L"TextBoxAddStudentID";
			this->TextBoxAddStudentID->Size = System::Drawing::Size(100, 20);
			this->TextBoxAddStudentID->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label20->Location = System::Drawing::Point(679, 22);
			this->label20->Name = L"label20";
			this->label20->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label20->Size = System::Drawing::Size(90, 18);
			this->label20->TabIndex = 4;
			this->label20->Text = L" :افزودن دانشجو";
			// 
			// ButtonExamIDgetter
			// 
			this->ButtonExamIDgetter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ButtonExamIDgetter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonExamIDgetter->ForeColor = System::Drawing::Color::Red;
			this->ButtonExamIDgetter->Location = System::Drawing::Point(91, 34);
			this->ButtonExamIDgetter->Name = L"ButtonExamIDgetter";
			this->ButtonExamIDgetter->Size = System::Drawing::Size(123, 23);
			this->ButtonExamIDgetter->TabIndex = 35;
			this->ButtonExamIDgetter->Text = L"اعمال تغیرات";
			this->ButtonExamIDgetter->UseVisualStyleBackColor = false;
			this->ButtonExamIDgetter->Click += gcnew System::EventHandler(this, &Manager::ButtonExamIDgetter_Click);
			// 
			// TextBoxExamManageID
			// 
			this->TextBoxExamManageID->Location = System::Drawing::Point(269, 34);
			this->TextBoxExamManageID->Name = L"TextBoxExamManageID";
			this->TextBoxExamManageID->Size = System::Drawing::Size(268, 20);
			this->TextBoxExamManageID->TabIndex = 34;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label17->ForeColor = System::Drawing::Color::Salmon;
			this->label17->Location = System::Drawing::Point(579, 34);
			this->label17->Name = L"label17";
			this->label17->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label17->Size = System::Drawing::Size(149, 20);
			this->label17->TabIndex = 33;
			this->label17->Text = L"شناسه آزمون را وارد کنید:";
			// 
			// buttonManageExamExit
			// 
			this->buttonManageExamExit->BackColor = System::Drawing::Color::Transparent;
			this->buttonManageExamExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonManageExamExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonManageExamExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonManageExamExit->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonManageExamExit->Location = System::Drawing::Point(679, 434);
			this->buttonManageExamExit->Name = L"buttonManageExamExit";
			this->buttonManageExamExit->Size = System::Drawing::Size(78, 43);
			this->buttonManageExamExit->TabIndex = 32;
			this->buttonManageExamExit->Text = L"بازگشت";
			this->buttonManageExamExit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonManageExamExit->UseVisualStyleBackColor = false;
			this->buttonManageExamExit->Click += gcnew System::EventHandler(this, &Manager::buttonManageExamExit_Click_2);
			// 
			// PanelCreateExam
			// 
			this->PanelCreateExam->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelCreateExam.BackgroundImage")));
			this->PanelCreateExam->Controls->Add(this->TextBoxScoreGetter);
			this->PanelCreateExam->Controls->Add(this->label34);
			this->PanelCreateExam->Controls->Add(this->button2);
			this->PanelCreateExam->Controls->Add(this->ButtonFinishCreateExam);
			this->PanelCreateExam->Controls->Add(this->label16);
			this->PanelCreateExam->Controls->Add(this->TextBoxExamId);
			this->PanelCreateExam->Controls->Add(this->ButtonCreateQuestion);
			this->PanelCreateExam->Controls->Add(this->PanrlTrueFalseAnswer);
			this->PanelCreateExam->Controls->Add(this->PanelTestiAnswers);
			this->PanelCreateExam->Controls->Add(this->panel8);
			this->PanelCreateExam->Controls->Add(this->label9);
			this->PanelCreateExam->Controls->Add(this->TextBoxQuestionText);
			this->PanelCreateExam->Controls->Add(this->panel7);
			this->PanelCreateExam->Controls->Add(this->label8);
			this->PanelCreateExam->Controls->Add(this->RadioExplainType);
			this->PanelCreateExam->Controls->Add(this->RadioTrueFalse);
			this->PanelCreateExam->Controls->Add(this->RadioTesti);
			this->PanelCreateExam->Controls->Add(this->label7);
			this->PanelCreateExam->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelCreateExam->Location = System::Drawing::Point(0, 0);
			this->PanelCreateExam->Margin = System::Windows::Forms::Padding(0);
			this->PanelCreateExam->Name = L"PanelCreateExam";
			this->PanelCreateExam->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->PanelCreateExam->Size = System::Drawing::Size(800, 500);
			this->PanelCreateExam->TabIndex = 7;
			// 
			// TextBoxScoreGetter
			// 
			this->TextBoxScoreGetter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->TextBoxScoreGetter->Location = System::Drawing::Point(163, 339);
			this->TextBoxScoreGetter->Name = L"TextBoxScoreGetter";
			this->TextBoxScoreGetter->Size = System::Drawing::Size(72, 30);
			this->TextBoxScoreGetter->TabIndex = 34;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label34->Location = System::Drawing::Point(203, 304);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(92, 25);
			this->label34->TabIndex = 33;
			this->label34->Text = L"نمره سوال:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(21, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 34);
			this->button2->TabIndex = 31;
			this->button2->Text = L"اعمال تغییرات";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Manager::button2_Click);
			// 
			// ButtonFinishCreateExam
			// 
			this->ButtonFinishCreateExam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ButtonFinishCreateExam->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonFinishCreateExam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->ButtonFinishCreateExam->ForeColor = System::Drawing::Color::Teal;
			this->ButtonFinishCreateExam->Location = System::Drawing::Point(21, 404);
			this->ButtonFinishCreateExam->Name = L"ButtonFinishCreateExam";
			this->ButtonFinishCreateExam->Size = System::Drawing::Size(122, 52);
			this->ButtonFinishCreateExam->TabIndex = 30;
			this->ButtonFinishCreateExam->Text = L"اتمام ایجاد آزمون";
			this->ButtonFinishCreateExam->UseVisualStyleBackColor = false;
			this->ButtonFinishCreateExam->Click += gcnew System::EventHandler(this, &Manager::ButtonFinishCreateExam_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Location = System::Drawing::Point(78, 301);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(68, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"شناسه آزمون";
			// 
			// TextBoxExamId
			// 
			this->TextBoxExamId->Location = System::Drawing::Point(21, 322);
			this->TextBoxExamId->Name = L"TextBoxExamId";
			this->TextBoxExamId->Size = System::Drawing::Size(122, 20);
			this->TextBoxExamId->TabIndex = 28;
			// 
			// ButtonCreateQuestion
			// 
			this->ButtonCreateQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->ButtonCreateQuestion->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonCreateQuestion->Location = System::Drawing::Point(21, 353);
			this->ButtonCreateQuestion->Name = L"ButtonCreateQuestion";
			this->ButtonCreateQuestion->Size = System::Drawing::Size(122, 34);
			this->ButtonCreateQuestion->TabIndex = 27;
			this->ButtonCreateQuestion->Text = L"سوال بعدی";
			this->ButtonCreateQuestion->UseVisualStyleBackColor = true;
			this->ButtonCreateQuestion->Click += gcnew System::EventHandler(this, &Manager::ButtonCreateQuestion_Click);
			// 
			// PanrlTrueFalseAnswer
			// 
			this->PanrlTrueFalseAnswer->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->PanrlTrueFalseAnswer->Controls->Add(this->RadioTrueFalseFalse);
			this->PanrlTrueFalseAnswer->Controls->Add(this->RadioTrueFalseTrue);
			this->PanrlTrueFalseAnswer->Controls->Add(this->label15);
			this->PanrlTrueFalseAnswer->Location = System::Drawing::Point(301, 301);
			this->PanrlTrueFalseAnswer->Name = L"PanrlTrueFalseAnswer";
			this->PanrlTrueFalseAnswer->Size = System::Drawing::Size(156, 155);
			this->PanrlTrueFalseAnswer->TabIndex = 26;
			// 
			// RadioTrueFalseFalse
			// 
			this->RadioTrueFalseFalse->AutoSize = true;
			this->RadioTrueFalseFalse->BackColor = System::Drawing::Color::Transparent;
			this->RadioTrueFalseFalse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioTrueFalseFalse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioTrueFalseFalse->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioTrueFalseFalse->Location = System::Drawing::Point(74, 96);
			this->RadioTrueFalseFalse->Name = L"RadioTrueFalseFalse";
			this->RadioTrueFalseFalse->Size = System::Drawing::Size(63, 33);
			this->RadioTrueFalseFalse->TabIndex = 7;
			this->RadioTrueFalseFalse->TabStop = true;
			this->RadioTrueFalseFalse->Text = L"غلط";
			this->RadioTrueFalseFalse->UseVisualStyleBackColor = false;
			// 
			// RadioTrueFalseTrue
			// 
			this->RadioTrueFalseTrue->AutoSize = true;
			this->RadioTrueFalseTrue->BackColor = System::Drawing::Color::Transparent;
			this->RadioTrueFalseTrue->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioTrueFalseTrue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->RadioTrueFalseTrue->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioTrueFalseTrue->Location = System::Drawing::Point(54, 41);
			this->RadioTrueFalseTrue->Name = L"RadioTrueFalseTrue";
			this->RadioTrueFalseTrue->Size = System::Drawing::Size(83, 33);
			this->RadioTrueFalseTrue->TabIndex = 6;
			this->RadioTrueFalseTrue->TabStop = true;
			this->RadioTrueFalseTrue->Text = L"صحیح";
			this->RadioTrueFalseTrue->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Navy;
			this->label15->Location = System::Drawing::Point(43, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 13);
			this->label15->TabIndex = 5;
			this->label15->Text = L"گزینه های صحیح/غلط";
			// 
			// PanelTestiAnswers
			// 
			this->PanelTestiAnswers->AutoScroll = true;
			this->PanelTestiAnswers->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->PanelTestiAnswers->Controls->Add(this->RadioOption4Truth);
			this->PanelTestiAnswers->Controls->Add(this->RadioOption3Truth);
			this->PanelTestiAnswers->Controls->Add(this->RadioOption2Truth);
			this->PanelTestiAnswers->Controls->Add(this->RadioOption1Truth);
			this->PanelTestiAnswers->Controls->Add(this->label14);
			this->PanelTestiAnswers->Controls->Add(this->label13);
			this->PanelTestiAnswers->Controls->Add(this->label12);
			this->PanelTestiAnswers->Controls->Add(this->label11);
			this->PanelTestiAnswers->Controls->Add(this->label10);
			this->PanelTestiAnswers->Controls->Add(this->TextBoxOption4);
			this->PanelTestiAnswers->Controls->Add(this->TextBoxOption3);
			this->PanelTestiAnswers->Controls->Add(this->TextBoxOption2);
			this->PanelTestiAnswers->Controls->Add(this->TextBoxOption1);
			this->PanelTestiAnswers->Location = System::Drawing::Point(463, 301);
			this->PanelTestiAnswers->Name = L"PanelTestiAnswers";
			this->PanelTestiAnswers->Size = System::Drawing::Size(317, 155);
			this->PanelTestiAnswers->TabIndex = 25;
			// 
			// RadioOption4Truth
			// 
			this->RadioOption4Truth->AutoSize = true;
			this->RadioOption4Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioOption4Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioOption4Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioOption4Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioOption4Truth->Location = System::Drawing::Point(15, 133);
			this->RadioOption4Truth->Name = L"RadioOption4Truth";
			this->RadioOption4Truth->Size = System::Drawing::Size(14, 13);
			this->RadioOption4Truth->TabIndex = 12;
			this->RadioOption4Truth->TabStop = true;
			this->RadioOption4Truth->UseVisualStyleBackColor = false;
			// 
			// RadioOption3Truth
			// 
			this->RadioOption3Truth->AutoSize = true;
			this->RadioOption3Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioOption3Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioOption3Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioOption3Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioOption3Truth->Location = System::Drawing::Point(15, 103);
			this->RadioOption3Truth->Name = L"RadioOption3Truth";
			this->RadioOption3Truth->Size = System::Drawing::Size(14, 13);
			this->RadioOption3Truth->TabIndex = 11;
			this->RadioOption3Truth->TabStop = true;
			this->RadioOption3Truth->UseVisualStyleBackColor = false;
			// 
			// RadioOption2Truth
			// 
			this->RadioOption2Truth->AutoSize = true;
			this->RadioOption2Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioOption2Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioOption2Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioOption2Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioOption2Truth->Location = System::Drawing::Point(15, 73);
			this->RadioOption2Truth->Name = L"RadioOption2Truth";
			this->RadioOption2Truth->Size = System::Drawing::Size(14, 13);
			this->RadioOption2Truth->TabIndex = 10;
			this->RadioOption2Truth->TabStop = true;
			this->RadioOption2Truth->UseVisualStyleBackColor = false;
			// 
			// RadioOption1Truth
			// 
			this->RadioOption1Truth->AutoSize = true;
			this->RadioOption1Truth->BackColor = System::Drawing::Color::Transparent;
			this->RadioOption1Truth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioOption1Truth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->RadioOption1Truth->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioOption1Truth->Location = System::Drawing::Point(15, 37);
			this->RadioOption1Truth->Name = L"RadioOption1Truth";
			this->RadioOption1Truth->Size = System::Drawing::Size(14, 13);
			this->RadioOption1Truth->TabIndex = 9;
			this->RadioOption1Truth->TabStop = true;
			this->RadioOption1Truth->UseVisualStyleBackColor = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Navy;
			this->label14->Location = System::Drawing::Point(225, 133);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 8;
			this->label14->Text = L"گزینه 4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Navy;
			this->label13->Location = System::Drawing::Point(225, 103);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"گزینه 3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Navy;
			this->label12->Location = System::Drawing::Point(223, 73);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"گزینه 2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Navy;
			this->label11->Location = System::Drawing::Point(223, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"گزینه 1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Navy;
			this->label10->Location = System::Drawing::Point(223, 8);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"گزینه های تستی";
			// 
			// TextBoxOption4
			// 
			this->TextBoxOption4->Location = System::Drawing::Point(36, 126);
			this->TextBoxOption4->Name = L"TextBoxOption4";
			this->TextBoxOption4->Size = System::Drawing::Size(174, 20);
			this->TextBoxOption4->TabIndex = 3;
			this->TextBoxOption4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxOption3
			// 
			this->TextBoxOption3->Location = System::Drawing::Point(36, 96);
			this->TextBoxOption3->Name = L"TextBoxOption3";
			this->TextBoxOption3->Size = System::Drawing::Size(174, 20);
			this->TextBoxOption3->TabIndex = 2;
			this->TextBoxOption3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxOption2
			// 
			this->TextBoxOption2->Location = System::Drawing::Point(36, 66);
			this->TextBoxOption2->Name = L"TextBoxOption2";
			this->TextBoxOption2->Size = System::Drawing::Size(174, 20);
			this->TextBoxOption2->TabIndex = 1;
			this->TextBoxOption2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBoxOption1
			// 
			this->TextBoxOption1->Location = System::Drawing::Point(36, 34);
			this->TextBoxOption1->Name = L"TextBoxOption1";
			this->TextBoxOption1->Size = System::Drawing::Size(174, 20);
			this->TextBoxOption1->TabIndex = 0;
			this->TextBoxOption1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// panel8
			// 
			this->panel8->AutoScroll = true;
			this->panel8->Location = System::Drawing::Point(1, 283);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(800, 2);
			this->panel8->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(710, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 22);
			this->label9->TabIndex = 23;
			this->label9->Text = L"متن سوال :";
			// 
			// TextBoxQuestionText
			// 
			this->TextBoxQuestionText->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TextBoxQuestionText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxQuestionText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->TextBoxQuestionText->Location = System::Drawing::Point(12, 175);
			this->TextBoxQuestionText->Multiline = true;
			this->TextBoxQuestionText->Name = L"TextBoxQuestionText";
			this->TextBoxQuestionText->Size = System::Drawing::Size(769, 99);
			this->TextBoxQuestionText->TabIndex = 22;
			// 
			// panel7
			// 
			this->panel7->AutoScroll = true;
			this->panel7->Location = System::Drawing::Point(2, 144);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(800, 2);
			this->panel7->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->ForeColor = System::Drawing::Color::Gainsboro;
			this->label8->Location = System::Drawing::Point(689, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 29);
			this->label8->TabIndex = 4;
			this->label8->Text = L"نوع سوال :";
			// 
			// RadioExplainType
			// 
			this->RadioExplainType->AutoSize = true;
			this->RadioExplainType->BackColor = System::Drawing::Color::Transparent;
			this->RadioExplainType->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioExplainType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->RadioExplainType->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioExplainType->Location = System::Drawing::Point(231, 112);
			this->RadioExplainType->Name = L"RadioExplainType";
			this->RadioExplainType->Size = System::Drawing::Size(69, 24);
			this->RadioExplainType->TabIndex = 3;
			this->RadioExplainType->TabStop = true;
			this->RadioExplainType->Text = L"تشریحی";
			this->RadioExplainType->UseVisualStyleBackColor = false;
			// 
			// RadioTrueFalse
			// 
			this->RadioTrueFalse->AutoSize = true;
			this->RadioTrueFalse->BackColor = System::Drawing::Color::Transparent;
			this->RadioTrueFalse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioTrueFalse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->RadioTrueFalse->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioTrueFalse->Location = System::Drawing::Point(411, 112);
			this->RadioTrueFalse->Name = L"RadioTrueFalse";
			this->RadioTrueFalse->Size = System::Drawing::Size(86, 24);
			this->RadioTrueFalse->TabIndex = 2;
			this->RadioTrueFalse->TabStop = true;
			this->RadioTrueFalse->Text = L"صحیح/غلط";
			this->RadioTrueFalse->UseVisualStyleBackColor = false;
			// 
			// RadioTesti
			// 
			this->RadioTesti->AutoSize = true;
			this->RadioTesti->BackColor = System::Drawing::Color::Transparent;
			this->RadioTesti->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RadioTesti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->RadioTesti->ForeColor = System::Drawing::SystemColors::Highlight;
			this->RadioTesti->Location = System::Drawing::Point(602, 112);
			this->RadioTesti->Name = L"RadioTesti";
			this->RadioTesti->Size = System::Drawing::Size(53, 24);
			this->RadioTesti->TabIndex = 1;
			this->RadioTesti->TabStop = true;
			this->RadioTesti->Text = L"تستی";
			this->RadioTesti->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->Location = System::Drawing::Point(319, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 39);
			this->label7->TabIndex = 0;
			this->label7->Text = L"ایجاد آزمون";
			// 
			// buttonExamine
			// 
			this->buttonExamine->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonExamine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExamine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->buttonExamine->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonExamine->Location = System::Drawing::Point(41, 367);
			this->buttonExamine->Name = L"buttonExamine";
			this->buttonExamine->Size = System::Drawing::Size(392, 70);
			this->buttonExamine->TabIndex = 3;
			this->buttonExamine->Text = L"تصحیح";
			this->buttonExamine->UseVisualStyleBackColor = false;
			this->buttonExamine->Click += gcnew System::EventHandler(this, &Manager::buttonExamine_Click);
			// 
			// ButtonManageExams
			// 
			this->ButtonManageExams->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ButtonManageExams->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonManageExams->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->ButtonManageExams->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonManageExams->Location = System::Drawing::Point(41, 261);
			this->ButtonManageExams->Name = L"ButtonManageExams";
			this->ButtonManageExams->Size = System::Drawing::Size(392, 70);
			this->ButtonManageExams->TabIndex = 2;
			this->ButtonManageExams->Text = L"مدیریت آزمون ها";
			this->ButtonManageExams->UseVisualStyleBackColor = false;
			this->ButtonManageExams->Click += gcnew System::EventHandler(this, &Manager::ButtonManageExams_Click);
			// 
			// ButtonExamHistory
			// 
			this->ButtonExamHistory->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ButtonExamHistory->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonExamHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->ButtonExamHistory->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonExamHistory->Location = System::Drawing::Point(41, 155);
			this->ButtonExamHistory->Name = L"ButtonExamHistory";
			this->ButtonExamHistory->Size = System::Drawing::Size(392, 70);
			this->ButtonExamHistory->TabIndex = 1;
			this->ButtonExamHistory->Text = L"تاریخچه آزمون";
			this->ButtonExamHistory->UseVisualStyleBackColor = false;
			this->ButtonExamHistory->Click += gcnew System::EventHandler(this, &Manager::ButtonExamHistory_Click);
			// 
			// ButtonCreateExam
			// 
			this->ButtonCreateExam->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ButtonCreateExam->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonCreateExam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->ButtonCreateExam->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonCreateExam->Location = System::Drawing::Point(39, 47);
			this->ButtonCreateExam->Name = L"ButtonCreateExam";
			this->ButtonCreateExam->Size = System::Drawing::Size(392, 70);
			this->ButtonCreateExam->TabIndex = 0;
			this->ButtonCreateExam->Text = L"ایجاد آزمون";
			this->ButtonCreateExam->UseVisualStyleBackColor = false;
			this->ButtonCreateExam->Click += gcnew System::EventHandler(this, &Manager::ButtonCreateExam_Click);
			// 
			// PanelManagerSideBarDashboard
			// 
			this->PanelManagerSideBarDashboard->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->PanelManagerSideBarDashboard->AutoScroll = true;
			this->PanelManagerSideBarDashboard->AutoSize = true;
			this->PanelManagerSideBarDashboard->Controls->Add(this->button1);
			this->PanelManagerSideBarDashboard->Location = System::Drawing::Point(464, 0);
			this->PanelManagerSideBarDashboard->Name = L"PanelManagerSideBarDashboard";
			this->PanelManagerSideBarDashboard->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->PanelManagerSideBarDashboard->Size = System::Drawing::Size(336, 500);
			this->PanelManagerSideBarDashboard->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(226, 447);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(98, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"خروج از داشبورد";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Manager::button1_Click);
			// 
			// PanelManagerSignUp
			// 
			this->PanelManagerSignUp->AutoScroll = true;
			this->PanelManagerSignUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelManagerSignUp.BackgroundImage")));
			this->PanelManagerSignUp->Controls->Add(this->button6);
			this->PanelManagerSignUp->Controls->Add(this->button5);
			this->PanelManagerSignUp->Controls->Add(this->panel6);
			this->PanelManagerSignUp->Controls->Add(this->label6);
			this->PanelManagerSignUp->Controls->Add(this->TextBoxManageraLastName);
			this->PanelManagerSignUp->Controls->Add(this->panel5);
			this->PanelManagerSignUp->Controls->Add(this->label5);
			this->PanelManagerSignUp->Controls->Add(this->TextBoxManagerName);
			this->PanelManagerSignUp->Controls->Add(this->panel3);
			this->PanelManagerSignUp->Controls->Add(this->label2);
			this->PanelManagerSignUp->Controls->Add(this->TextBoxManagerSignUpPassword);
			this->PanelManagerSignUp->Controls->Add(this->panel4);
			this->PanelManagerSignUp->Controls->Add(this->label4);
			this->PanelManagerSignUp->Controls->Add(this->TextBoxManagerSignUpUsername);
			this->PanelManagerSignUp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelManagerSignUp->Location = System::Drawing::Point(0, 0);
			this->PanelManagerSignUp->Name = L"PanelManagerSignUp";
			this->PanelManagerSignUp->Size = System::Drawing::Size(800, 500);
			this->PanelManagerSignUp->TabIndex = 5;
			this->PanelManagerSignUp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseDown);
			this->PanelManagerSignUp->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseMove);
			this->PanelManagerSignUp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseUp);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(710, 436);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(78, 52);
			this->button6->TabIndex = 30;
			this->button6->Text = L"بازگشت";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Manager::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(117, 279);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 63);
			this->button5->TabIndex = 29;
			this->button5->Text = L"ثبت نام";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Manager::button5_Click);
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(117, 105);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(306, 2);
			this->panel6->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label6->Location = System::Drawing::Point(310, 27);
			this->label6->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label6->Size = System::Drawing::Size(122, 29);
			this->label6->TabIndex = 27;
			this->label6->Text = L"نام خانوادگی :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxManageraLastName
			// 
			this->TextBoxManageraLastName->BackColor = System::Drawing::Color::Black;
			this->TextBoxManageraLastName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxManageraLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxManageraLastName->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxManageraLastName->Location = System::Drawing::Point(117, 77);
			this->TextBoxManageraLastName->Name = L"TextBoxManageraLastName";
			this->TextBoxManageraLastName->Size = System::Drawing::Size(306, 31);
			this->TextBoxManageraLastName->TabIndex = 26;
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(463, 105);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(306, 2);
			this->panel5->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Location = System::Drawing::Point(719, 27);
			this->label5->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label5->Size = System::Drawing::Size(45, 29);
			this->label5->TabIndex = 24;
			this->label5->Text = L"نام :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxManagerName
			// 
			this->TextBoxManagerName->AcceptsReturn = true;
			this->TextBoxManagerName->BackColor = System::Drawing::Color::Black;
			this->TextBoxManagerName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxManagerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxManagerName->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxManagerName->Location = System::Drawing::Point(463, 76);
			this->TextBoxManagerName->Name = L"TextBoxManagerName";
			this->TextBoxManagerName->Size = System::Drawing::Size(306, 31);
			this->TextBoxManagerName->TabIndex = 23;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(463, 324);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(306, 2);
			this->panel3->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(665, 247);
			this->label2->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(105, 29);
			this->label2->TabIndex = 21;
			this->label2->Text = L"رمز عبور :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxManagerSignUpPassword
			// 
			this->TextBoxManagerSignUpPassword->BackColor = System::Drawing::Color::Black;
			this->TextBoxManagerSignUpPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxManagerSignUpPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->TextBoxManagerSignUpPassword->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxManagerSignUpPassword->Location = System::Drawing::Point(460, 301);
			this->TextBoxManagerSignUpPassword->Name = L"TextBoxManagerSignUpPassword";
			this->TextBoxManagerSignUpPassword->Size = System::Drawing::Size(306, 25);
			this->TextBoxManagerSignUpPassword->TabIndex = 20;
			this->TextBoxManagerSignUpPassword->UseSystemPasswordChar = true;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(461, 221);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(306, 2);
			this->panel4->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Location = System::Drawing::Point(661, 140);
			this->label4->Margin = System::Windows::Forms::Padding(11, 0, 11, 0);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(111, 29);
			this->label4->TabIndex = 18;
			this->label4->Text = L"نام کاربری :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TextBoxManagerSignUpUsername
			// 
			this->TextBoxManagerSignUpUsername->BackColor = System::Drawing::Color::Black;
			this->TextBoxManagerSignUpUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxManagerSignUpUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->TextBoxManagerSignUpUsername->ForeColor = System::Drawing::SystemColors::Menu;
			this->TextBoxManagerSignUpUsername->Location = System::Drawing::Point(460, 192);
			this->TextBoxManagerSignUpUsername->Name = L"TextBoxManagerSignUpUsername";
			this->TextBoxManagerSignUpUsername->Size = System::Drawing::Size(306, 31);
			this->TextBoxManagerSignUpUsername->TabIndex = 17;
			// 
			// Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->PanelManagerDashboard);
			this->Controls->Add(this->PanelManagerSignUp);
			this->Controls->Add(this->ButtonManagerMainFormExit);
			this->Controls->Add(this->ButtonManagerSignUp);
			this->Controls->Add(this->ButtonManagerSignIn);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TextBoxManagerPassword);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->TextBoxManagerUsername);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Manager";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Manager";
			this->Load += gcnew System::EventHandler(this, &Manager::Manager_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Manager::Manager_MouseUp);
			this->PanelManagerDashboard->ResumeLayout(false);
			this->PanelManagerDashboard->PerformLayout();
			this->PanelExamHistory->ResumeLayout(false);
			this->PanelExamHistory->PerformLayout();
			this->PanelExamHistoryDetails->ResumeLayout(false);
			this->PanelExamHistoryDetails->PerformLayout();
			this->PanelExamine->ResumeLayout(false);
			this->PanelExamine->PerformLayout();
			this->PanelExamineExam->ResumeLayout(false);
			this->PanelExamineExam->PerformLayout();
			this->panelManageExam->ResumeLayout(false);
			this->panelManageExam->PerformLayout();
			this->PanelInfo->ResumeLayout(false);
			this->PanelInfo->PerformLayout();
			this->PanelCreateExam->ResumeLayout(false);
			this->PanelCreateExam->PerformLayout();
			this->PanrlTrueFalseAnswer->ResumeLayout(false);
			this->PanrlTrueFalseAnswer->PerformLayout();
			this->PanelTestiAnswers->ResumeLayout(false);
			this->PanelTestiAnswers->PerformLayout();
			this->PanelManagerSideBarDashboard->ResumeLayout(false);
			this->PanelManagerSignUp->ResumeLayout(false);
			this->PanelManagerSignUp->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ButtonStudentMainFormExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Hide();
}
private: System::Void Manager_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dragging = false;
}
	   

private: System::Void Manager_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}

private: System::Void Manager_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}

private: System::Void Manager_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false; //this bool is awesome
	}
private: System::Void ButtonManagerSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelManagerSignUp->Show();
	
	

}
	  
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	bool TekrariExists = false;
	if (TextBoxManagerName->Text->Length!=0) {
		if (TextBoxManageraLastName->Text->Length != 0) {
			if (TextBoxManagerSignUpUsername->Text->Length != 0) {
				if (TextBoxManagerSignUpPassword->Text->Length != 0) {
					System::String^ name = (TextBoxManageraLastName->Text);
					System::String^ lastname = (TextBoxManagerName->Text);
					System::String^ username = (TextBoxManagerSignUpUsername->Text);
					System::String^ password = (TextBoxManagerSignUpPassword->Text);
					for (int i = 0; i < PersonList::ManagerList.Count; i++) {
						if (PersonList::ManagerList[i]->UserName == username) {
							TekrariExists = true;
						}
					}
							if (!TekrariExists) {
								PanelManagerSignUp->Hide();
								PersonList::ManagerList.Add(gcnew manager(name, lastname, username, password));
							}
							else {
								MessageBox::Show("Username has been submited before.","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
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
		MessageBox::Show("Empty name field !","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
	
	TextBoxManageraLastName->ResetText();
	TextBoxManagerName->ResetText();
	TextBoxManagerSignUpUsername->ResetText();
	TextBoxManagerSignUpPassword->ResetText();
	if (PersonList::ManagerList.Count != 0) {
		ButtonManagerSignIn->Enabled = true;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelManagerSignUp->Hide();

}
private: System::Void ButtonManagerSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ username =TextBoxManagerUsername->Text;
	System::String^ password=TextBoxManagerPassword->Text;
	this->username = username;
	bool found=false;
	for (int i = 0; i < PersonList::ManagerList.Count; i++) {
		if (PersonList::ManagerList[i]->UserName == username) {
			found = true;
			if (PersonList::ManagerList[i]->Password == password) {
				PanelManagerDashboard->Show();
				PanelManagerSideBarDashboard->Show();
				
				break;
			}
			else {
				MessageBox::Show("Wrong Password !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
	}
	if(!found){
			MessageBox::Show("Username not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		



	
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelManagerDashboard->Hide();
	PanelManagerSideBarDashboard->Hide();
}
private: System::Void ButtonCreateExam_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelCreateExam->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (RadioTesti->Checked) {
			PanelTestiAnswers->Enabled = true;
			PanrlTrueFalseAnswer->Enabled = false;
		}
		else if (RadioTrueFalse->Checked) {
			PanelTestiAnswers->Enabled = false;
			PanrlTrueFalseAnswer->Enabled = true;
		}
		else {
			PanelTestiAnswers->Enabled = false;
			PanrlTrueFalseAnswer->Enabled = false;
		}
		PanelCreateExam->Update();
}
private: System::Void ButtonFinishCreateExam_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelCreateExam->Hide();
	firstCreation = true;
	TextBoxExamId->Enabled = true;
}
private: System::Void ButtonCreateQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	double Score;
	Score = Convert::ToDouble(TextBoxScoreGetter->Text);
	if (firstCreation) {
		
		TextBoxExamId->Enabled = true;
		exam_id = TextBoxExamId->Text;
		
		for (int i = 0; i < PersonList::ManagerList.Count; i++) {
			if (PersonList::ManagerList[i]->UserName == username) {
				manager_index = i.ToString();
				break;
			}
		}
		Exams::ExamList.Add(gcnew Exam(exam_id, manager_index));
		for (int i = 0; i < Exams::ExamList.Count; i++) {
			if (Exams::ExamList[i]->ExamID == exam_id) {
				exam_index = i;
				break;
			}
		}
		

		if (RadioExplainType->Checked) {
			Exams::ExamList[exam_index]->QuestionList.Add(gcnew Question(RadioTesti->Checked, RadioTrueFalse->Checked, RadioExplainType->Checked, TextBoxQuestionText->Text,Score));
			TextBoxExamId->Enabled = false;
		}
		else if (RadioTrueFalse->Checked) {
			if (RadioTrueFalseTrue->Checked)
				true_false_answer = true;
			else
				true_false_answer = false;

			Exams::ExamList[exam_index]->QuestionList.Add(gcnew Question(RadioTesti->Checked, RadioTrueFalse->Checked, RadioExplainType->Checked, TextBoxQuestionText->Text, true_false_answer,Score));
			TextBoxExamId->Enabled = false;
		}
		else {
			if (RadioOption1Truth->Checked) {
				test_true_answer = TextBoxOption1->Text;
			}
			else if (RadioOption2Truth->Checked) {
				test_true_answer = TextBoxOption2->Text;

			}
			else if (RadioOption3Truth->Checked) {
				test_true_answer = TextBoxOption3->Text;

			}
			else {
				test_true_answer = TextBoxOption4->Text;
			}
			Exams::ExamList[exam_index]->QuestionList.Add(gcnew Question(RadioTesti->Checked, RadioTrueFalse->Checked, RadioExplainType->Checked, TextBoxQuestionText->Text, test_true_answer,TextBoxOption1->Text, TextBoxOption2->Text, TextBoxOption3->Text, TextBoxOption4->Text,Score));
			TextBoxExamId->Enabled = false;
		}
		firstCreation = false;
		
	}
	else {
		
		if (RadioExplainType->Checked) {
			Exams::ExamList[exam_index]->QuestionList.Add(gcnew Question(RadioTesti->Checked, RadioTrueFalse->Checked, RadioExplainType->Checked, TextBoxQuestionText->Text,Score));	
		}

		else if (RadioTrueFalse->Checked) {
			if (RadioTrueFalseTrue->Checked)
				true_false_answer = true;

			else
				true_false_answer = false;

			Exams::ExamList[exam_index]->QuestionList.Add(gcnew Question(RadioTesti->Checked, RadioTrueFalse->Checked, RadioExplainType->Checked, TextBoxQuestionText->Text, true_false_answer,Score));
			TextBoxExamId->Enabled = false;
		}
		else {
			if (RadioOption1Truth->Checked) {
				test_true_answer = TextBoxOption1->Text;
			}
			else if (RadioOption2Truth->Checked) {
				test_true_answer = TextBoxOption2->Text;

			}
			else if (RadioOption3Truth->Checked) {
				test_true_answer = TextBoxOption3->Text;

			}
			else {
				test_true_answer = TextBoxOption4->Text;
			}
			Exams::ExamList[exam_index]->QuestionList.Add(gcnew Question(RadioTesti->Checked, RadioTrueFalse->Checked, RadioExplainType->Checked, TextBoxQuestionText->Text, test_true_answer, TextBoxOption1->Text, TextBoxOption2->Text, TextBoxOption3->Text, TextBoxOption4->Text,Score));
		}
	}
	
	TextBoxExamId->ResetText();
	TextBoxOption1->ResetText();
	TextBoxOption2->ResetText();
	TextBoxOption3->ResetText();
	TextBoxOption4->ResetText();
	TextBoxQuestionText->ResetText();
	PanelCreateExam->Update();
	RadioOption1Truth->Checked = false;
	RadioOption2Truth->Checked = false;
	RadioOption3Truth->Checked = false;
	RadioOption4Truth->Checked = false;
	RadioTrueFalseTrue->Checked = false;
	RadioTrueFalseFalse->Checked = false;

}
private: System::Void ButtonManageExams_Click(System::Object^ sender, System::EventArgs^ e) {
	panelManageExam->Show();
	
}
private: System::Void buttonManageExamExit_Click_2(System::Object^ sender, System::EventArgs^ e) {
	panelManageExam->Hide();
}
private: System::Void ButtonExamIDgetter_Click(System::Object^ sender, System::EventArgs^ e) {
	bool exam_id_exist = false;
	//TextBoxAddedStudentsNumber->ResetText();
	ButtonExamineNextQuestion->Enabled = false;
	if (Exams::ExamList.Count != 0) {
		for (int i = 0; i < Exams::ExamList.Count; i++) {
			if (TextBoxExamManageID->Text == Exams::ExamList[i]->ExamID) {
				exam_index = i;
				break;
			}
		}
		for (int i = 0; i < Exams::ExamList.Count; i++) {
			if (Exams::ExamList[i]->ExamID == TextBoxExamManageID->Text) {
				exam_id_exist = true;
				break;
			}
		}
		if (exam_id_exist)
			PanelInfo->Enabled = true;
		else
			PanelInfo->Enabled = false;

		TextBoxAddedStudentsNumber->Text = Exams::ExamList[exam_index]->AccessedStudentsList.Count.ToString();
		TextBoxAddedStudentsNumber->Text = Exams::ExamList[exam_index]->DeniedStudentsList.Count.ToString();

		panelManageExam->Update();
	}
	else {
		MessageBox::Show("No Exam Exists", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void ButtonAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	int index;
	int temp;
	bool tekerariExist = false;
	bool existed_stu_added = false;
	for (int i = 0; i < PersonList::StudentList.Count; i++) {
		if (TextBoxAddStudentID->Text == PersonList::StudentList[i]->StudentId) {
			index = i;
	
			existed_stu_added = true;
			if (Exams::ExamList[exam_index]->AccessedStudentsList.Count != 0)
				for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++) {
					if ((TextBoxAddStudentID->Text == Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId))
						tekerariExist = true;
				}

			if (!tekerariExist) {
				Exams::ExamList[exam_index]->AccessedStudentsList.Add(PersonList::StudentList[index]);
				break;
			}
			else {
				MessageBox::Show("StudentID has been submited before.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			break;
		}
	}
	if (!existed_stu_added) {
		for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++)
			if (Exams::ExamList[exam_index]->AccessedStudentsList.Count != 0)
				if ((TextBoxAddStudentID->Text == Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId))
					tekerariExist = true;
		if (!tekerariExist) {
			PersonList::StudentList.Add(gcnew student(TextBoxAddStudentID->Text, TextBoxAddStudentID->Text, TextBoxAddStudentID->Text, TextBoxAddStudentID->Text, TextBoxAddStudentID->Text));
			Exams::ExamList[exam_index]->AccessedStudentsList.Add(gcnew student(TextBoxAddStudentID->Text, TextBoxAddStudentID->Text, TextBoxAddStudentID->Text, TextBoxAddStudentID->Text, TextBoxAddStudentID->Text));
		}
		else {
			MessageBox::Show("StudentID has been submited before.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	if (!tekerariExist) {
		temp = Exams::ExamList[exam_index]->AccessedStudentsList.Count;
		TextBoxAddedStudentsNumber->Text = temp.ToString();
	}
	TextBoxAddStudentID->ResetText();

}
private: System::Void ButtonBanStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	int index;
	int temp;
	bool tekrariExist = false;
	for (int i = 0; i < PersonList::StudentList.Count; i++) {
		if (TextBoxBanStudentID->Text == PersonList::StudentList[i]->StudentId) {
			index = i;
			if (Exams::ExamList[exam_index]->AccessedStudentsList.Count != 0)
			for (int i = 0; i < Exams::ExamList[exam_index]->DeniedStudentsList.Count; i++)
					if ((TextBoxAddStudentID->Text == Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId))
						tekrariExist = true;
			if(!tekrariExist)
			Exams::ExamList[exam_index]->DeniedStudentsList.Add(PersonList::StudentList[index]);
			else
			MessageBox::Show("StudentID has been banned before.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	if (!tekrariExist) {
		temp = temp = Exams::ExamList[exam_index]->DeniedStudentsList.Count;
		TextBoxBannedStudentsNumber->Text = temp.ToString();
	}
	TextBoxBanStudentID->ResetText();
}
private: System::Void ButtonStartExamTime_Click(System::Object^ sender, System::EventArgs^ e) {
	Exams::ExamList[exam_index]->StartTime =(DateTimePickerStartExamDate->Value.Date+DateTimePickerStartExamTime->Value.TimeOfDay);
	Exams::ExamList[exam_index]->EndTime = (DateTimePickerEndExamDate->Value.Date + DateTimePickerEndExamTime->Value.TimeOfDay);
}
private: System::Void buttonExamine_Click(System::Object^ sender, System::EventArgs^ e) {
	bool Exist_Exam = false;
	TextBoxExamineShowExams->ResetText();
	for (int i = 0; i < Exams::ExamList.Count; i++) {

		if (manager_index == Exams::ExamList[i]->indexManager) {
			TextBoxExamineShowExams->AppendText("آزمون " + Exams::ExamList[i]->ExamID + "\r\n");
			Exist_Exam = true;
			
		}

	}
	if (Exist_Exam) {
			PanelExamine->Show();

		}
	if (!Exist_Exam) {
		MessageBox::Show("You did not create any exams !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	

}
private: System::Void ButtonExamineExamIDGetter_Click(System::Object^ sender, System::EventArgs^ e) {
	bool IdExist = false;

	for (int i = 0; i < Exams::ExamList.Count; i++) {
		if (Exams::ExamList[i]->ExamID == TextBoxExamineExamIDGetter->Text) {
			exam_index = i;
			IdExist = true;
			break;
		}
	}
	if (IdExist) {
		TextBoxExamineQuestionNumber->Text = (question_index + 1).ToString();
		TextBoxExamineQuestionText->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionText;
		for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++) {
			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId) {
				accessed_student_index = i;
				break;
			}
		}
		if (Exams::ExamList[exam_index]->QuestionList[question_index]->ExpalainType) {
			TextBoxExamineExplainAnswer->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->ExplainTypeGivenAnswer;
			TextBoxExamineExplainAnswer->Enabled = true;
			TextBoxExamineTestAnswer->Enabled = false;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
			radioButtonExamineTrueFalseFalseAnswer->Enabled = false;
		}
		else if (Exams::ExamList[exam_index]->QuestionList[question_index]->TestType) {
			TextBoxExamineTestAnswer->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TestTypeGivenAnwser;
			TextBoxExamineTestScore->Text = (TextBoxExamineTestAnswer->Text == Exams::ExamList[exam_index]->QuestionList[question_index]->TestAnswer )? Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionScore.ToString() : (0).ToString();
			TextBoxExamineExplainAnswer->Enabled = false;
			TextBoxExamineTestAnswer->Enabled = true;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
			radioButtonExamineTrueFalseFalseAnswer->Enabled = false;
		}
		else if(Exams::ExamList[exam_index]->QuestionList[question_index]->TrueFalseType) {
			radioButtonExamineTrueFalseTrueAnswer->Enabled = true;
			radioButtonExamineTrueFalseFalseAnswer->Enabled = true;
			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TrueFalseGivenAnswer) {
				radioButtonExamineTrueFalseTrueAnswer->Checked = true;
			}
			else {
				radioButtonExamineTrueFalseFalseAnswer->Checked = true;
			}

			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TrueFalseGivenAnswer == Exams::ExamList[exam_index]->QuestionList[question_index]->TrueFalseAnswer)
				TextBoxExamineTrueFalseScore->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionScore.ToString();
			else
				TextBoxExamineTrueFalseScore->Text = (0).ToString();
		}
		PanelExamineExam->Show();
	}
	ButtonExamineSubmit->Enabled = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelExamine->Hide();
}

private: System::Void ButtonExamineSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	
	for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++) {
		if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId) {
			accessed_student_index = i;
			break;
		}
	}
		if (Exams::ExamList[exam_index]->QuestionList[question_index]->ExpalainType) {
			
			if(TextBoxExplainScore->Text!="")
			if (Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionScore >= Convert::ToDouble(TextBoxExplainScore->Text)) {
				Exams::ExamList[exam_index]->AccessedStudentsList[accessed_student_index]->Score += Convert::ToDouble(TextBoxExplainScore->Text);
				TextBoxExamineTestAnswer->ResetText();
				radioButtonExamineTrueFalseFalseAnswer->Checked = false;
				radioButtonExamineTrueFalseTrueAnswer->Checked = false;
				if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count - 1 != answer_index)
					answer_index++;
				else {
					
					ButtonExamineSubmit->Enabled = false;
					ButtonExamineNextQuestion->Enabled = true;
				}
					
					
			}
			else {
				MessageBox::Show("Score is more than Question score !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		else if (Exams::ExamList[exam_index]->QuestionList[question_index]->TestType) {
			
			if (TextBoxExamineTestAnswer->Text == Exams::ExamList[exam_index]->QuestionList[question_index]->TestAnswer) {
				TextBoxExamineTestScore->Text = (Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionScore).ToString();
				Exams::ExamList[exam_index]->AccessedStudentsList[accessed_student_index]->Score += Convert::ToDouble(TextBoxExamineTestScore->Text);
				TextBoxExamineExplainAnswer->ResetText();
				radioButtonExamineTrueFalseFalseAnswer->Checked = false;
				radioButtonExamineTrueFalseTrueAnswer->Checked = false;
				if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count - 1 != answer_index) {
					answer_index++;
					TextBoxExamineExplainAnswer->ResetText();
					TextBoxExamineTestAnswer->ResetText();
					radioButtonExamineTrueFalseFalseAnswer->Checked = false;
					radioButtonExamineTrueFalseTrueAnswer->Checked = false;
				}
					

				else {

					ButtonExamineSubmit->Enabled = false;
					ButtonExamineNextQuestion->Enabled = true;
				}


			}
			else {
				TextBoxExamineTestScore->Text = (0).ToString();
				if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count - 1 != answer_index) {
					answer_index++;
					TextBoxExamineExplainAnswer->ResetText();
					TextBoxExamineTestAnswer->ResetText();
					radioButtonExamineTrueFalseFalseAnswer->Checked = false;
					radioButtonExamineTrueFalseTrueAnswer->Checked = false;
				}
				else {

					ButtonExamineSubmit->Enabled = false;
					ButtonExamineNextQuestion->Enabled = true;
				}
			}

		}
		else {

			radioButtonExamineTrueFalseTrueAnswer->Enabled = true;
			radioButtonExamineTrueFalseFalseAnswer->Enabled = true;

			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TrueFalseGivenAnswer == Exams::ExamList[exam_index]->QuestionList[question_index]->TrueFalseAnswer) {

				TextBoxExamineTrueFalseScore->Text = (Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionScore).ToString();
				Exams::ExamList[exam_index]->AccessedStudentsList[accessed_student_index]->Score += Convert::ToDouble(TextBoxExamineTrueFalseScore->Text);
				if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count - 1 != answer_index) {
					answer_index++;
					TextBoxExamineExplainAnswer->ResetText();
					TextBoxExamineTestAnswer->ResetText();
					radioButtonExamineTrueFalseFalseAnswer->Checked = false;
					radioButtonExamineTrueFalseTrueAnswer->Checked = true;
				}
				else {

					ButtonExamineSubmit->Enabled = false;
					ButtonExamineNextQuestion->Enabled = true;
				}
			}
			else {
				TextBoxExamineTrueFalseScore->Text = (0).ToString();
				if (Exams::ExamList[exam_index]->QuestionList[current_question_index]->AnswerList.Count - 1 != answer_index) {
					answer_index++;
					TextBoxExamineExplainAnswer->ResetText();
					TextBoxExamineTestAnswer->ResetText();
					radioButtonExamineTrueFalseFalseAnswer->Checked = true;
					radioButtonExamineTrueFalseTrueAnswer->Checked = false;
				}
				else {

					ButtonExamineSubmit->Enabled = false;
					ButtonExamineNextQuestion->Enabled = true;
				}
			}
		}
		TextBoxExamineQuestionNumber->Text = (question_index + 1).ToString();
		TextBoxExamineQuestionText->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionText;
		for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++) {
			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId) {
				accessed_student_index = i;
				break;
			}
		}
		

		if (Exams::ExamList[exam_index]->QuestionList[question_index]->ExpalainType) {
			TextBoxExamineTestScore->ResetText();
			TextBoxExamineTrueFalseScore->ResetText();
			TextBoxExamineExplainAnswer->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->ExplainTypeGivenAnswer;
			TextBoxExamineExplainAnswer->Enabled = true;
			TextBoxExamineTestAnswer->Enabled = false;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
		}
		else if (Exams::ExamList[exam_index]->QuestionList[question_index]->TestType) {
			TextBoxExamineTrueFalseScore->ResetText();
			TextBoxExplainScore->ResetText();
			TextBoxExamineTestAnswer->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TestTypeGivenAnwser;
			TextBoxExamineExplainAnswer->Enabled = false;
			TextBoxExamineTestAnswer->Enabled = true;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
		}
		else if(Exams::ExamList[exam_index]->QuestionList[question_index]->TrueFalseType) {
			TextBoxExamineTestScore->ResetText();
			TextBoxExplainScore->ResetText();
			radioButtonExamineTrueFalseTrueAnswer->Enabled = true;
			radioButtonExamineTrueFalseFalseAnswer->Enabled = true;
			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TrueFalseGivenAnswer) {
				radioButtonExamineTrueFalseTrueAnswer->Checked = true;
			}
			else {
				radioButtonExamineTrueFalseFalseAnswer->Checked = true;
			}
		}

		PanelExamineExam->Update();

	}
private: System::Void ButtonExamineNextQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	answer_index = 0;
	if (question_index != Exams::ExamList[exam_index]->QuestionList.Count - 1) {
		question_index++;
		TextBoxExamineExplainAnswer->ResetText();
		TextBoxExamineTestAnswer->ResetText();
		radioButtonExamineTrueFalseFalseAnswer->Checked = false;
		radioButtonExamineTrueFalseTrueAnswer->Checked = false;
		ButtonExamineNextQuestion->Enabled = false;
		ButtonExamineSubmit->Enabled = true;
		TextBoxExamineQuestionNumber->Text = (question_index + 1).ToString();
		TextBoxExamineQuestionText->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->QuestionText;
		for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++) {
			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->StudentId == Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId) {
				accessed_student_index = i;
				break;
			}
		}
		if (Exams::ExamList[exam_index]->QuestionList[question_index]->ExpalainType) {
			TextBoxExamineExplainAnswer->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->ExplainTypeGivenAnswer;
			TextBoxExamineExplainAnswer->Enabled = true;
			TextBoxExamineTestAnswer->Enabled = false;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
		}
		else if (Exams::ExamList[exam_index]->QuestionList[question_index]->TestType) {
			TextBoxExamineTestAnswer->Text = Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TestTypeGivenAnwser;
			TextBoxExamineExplainAnswer->Enabled = false;
			TextBoxExamineTestAnswer->Enabled = true;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
			radioButtonExamineTrueFalseTrueAnswer->Enabled = false;
		}
		else {
			radioButtonExamineTrueFalseTrueAnswer->Enabled = true;
			radioButtonExamineTrueFalseFalseAnswer->Enabled = true;
			if (Exams::ExamList[exam_index]->QuestionList[question_index]->AnswerList[answer_index]->TrueFalseGivenAnswer) {
				radioButtonExamineTrueFalseTrueAnswer->Checked = true;
			}
			else {
				radioButtonExamineTrueFalseFalseAnswer->Checked = true;
			}
		}

		PanelExamineExam->Update();
	}
	else {
		MessageBox::Show("There is no more question !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void ExamineExit_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelExamineExam->Hide();
	Exams::ExamList[exam_index]->isExamined = true;
}
private: System::Void ButtonExamHistory_Click(System::Object^ sender, System::EventArgs^ e) {
	bool Exist_Exam = false;

	for (int i = 0; i < Exams::ExamList.Count; i++) {

		if (manager_index == Exams::ExamList[i]->indexManager) {
			TextBoxHistoryExams->AppendText("آزمون " + Exams::ExamList[i]->ExamID + "\r\n");
			Exist_Exam = true;

		}

	}
	if (Exist_Exam) {
		PanelExamHistory->Show();

	}
	if (!Exist_Exam) {
		MessageBox::Show("You did not create any exams !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}


}
private: System::Void ButtonHistoryExamIdGetter_Click(System::Object^ sender, System::EventArgs^ e) {
	bool IdExist = false;

	for (int i = 0; i < Exams::ExamList.Count; i++) {
		if (Exams::ExamList[i]->ExamID == TextBoxHistoryExamId->Text) {
			exam_index = i;
			IdExist = true;
			break;
		}
	}
	DateTimeHistoryStartDate->Value = Exams::ExamList[exam_index]->StartTime;
	DateTimeHistoryStartTime->Value = Exams::ExamList[exam_index]->StartTime;
	DateTimeHistoryEndDate->Value = Exams::ExamList[exam_index]->EndTime;
	DateTimeHistoryEndTime->Value = Exams::ExamList[exam_index]->EndTime;
	TextBoxHistoryNumberOfQuestions->Text = Exams::ExamList[exam_index]->QuestionList.Count.ToString();

	for (int i = 0; i < Exams::ExamList[exam_index]->AccessedStudentsList.Count; i++) {
		TextBoxStudentIdList->AppendText(Exams::ExamList[exam_index]->AccessedStudentsList[i]->StudentId +"\r\n");
		TextBoxStudentScoresList->AppendText(Exams::ExamList[exam_index]->AccessedStudentsList[i]->Score + "\r\n");
	}
	PanelExamHistoryDetails->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelExamHistory->Hide();
	TextBoxHistoryExams->ResetText();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelExamHistoryDetails->Hide();
	TextBoxStudentIdList->ResetText();
	TextBoxStudentScoresList->ResetText();
}
};
}

