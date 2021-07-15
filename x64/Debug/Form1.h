#pragma once
#include "Student.h"
#include "Manager.h"
#include "PersonInfo.h"


namespace AzmoonYar {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	/// 

	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:Student^ st = gcnew Student;
	public:Manager^ mg = gcnew Manager;
	private: bool dragging;
	private:






	private: Point offset;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->dragging = false;
			st->Hide();
			mg->Hide();
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelProject;
	private: System::Windows::Forms::Button^ ButtonStudent;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ ButtonExitMainForm;
	protected:



	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->LabelProject = (gcnew System::Windows::Forms::Label());
			this->ButtonStudent = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ButtonExitMainForm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelProject
			// 
			this->LabelProject->AutoSize = true;
			this->LabelProject->BackColor = System::Drawing::Color::Transparent;
			this->LabelProject->Font = (gcnew System::Drawing::Font(L"B Nazanin", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->LabelProject->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->LabelProject->Location = System::Drawing::Point(281, 73);
			this->LabelProject->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->LabelProject->Name = L"LabelProject";
			this->LabelProject->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->LabelProject->Size = System::Drawing::Size(207, 52);
			this->LabelProject->TabIndex = 0;
			this->LabelProject->Text = L"سامانه آزمون یار";
			this->LabelProject->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// ButtonStudent
			// 
			this->ButtonStudent->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ButtonStudent->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20));
			this->ButtonStudent->ForeColor = System::Drawing::SystemColors::Desktop;
			this->ButtonStudent->Location = System::Drawing::Point(281, 180);
			this->ButtonStudent->Margin = System::Windows::Forms::Padding(6);
			this->ButtonStudent->Name = L"ButtonStudent";
			this->ButtonStudent->Size = System::Drawing::Size(198, 60);
			this->ButtonStudent->TabIndex = 1;
			this->ButtonStudent->Text = L"پنل دانشجو";
			this->ButtonStudent->UseVisualStyleBackColor = false;
			this->ButtonStudent->Click += gcnew System::EventHandler(this, &Form1::ButtonStudent_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20));
			this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button1->Location = System::Drawing::Point(281, 300);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"پنل مدیریت";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// ButtonExitMainForm
			// 
			this->ButtonExitMainForm->BackColor = System::Drawing::Color::NavajoWhite;
			this->ButtonExitMainForm->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->ButtonExitMainForm->FlatAppearance->BorderSize = 2;
			this->ButtonExitMainForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonExitMainForm->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20));
			this->ButtonExitMainForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ButtonExitMainForm->Location = System::Drawing::Point(326, 426);
			this->ButtonExitMainForm->Margin = System::Windows::Forms::Padding(6);
			this->ButtonExitMainForm->Name = L"ButtonExitMainForm";
			this->ButtonExitMainForm->Size = System::Drawing::Size(104, 59);
			this->ButtonExitMainForm->TabIndex = 3;
			this->ButtonExitMainForm->Text = L"خروج";
			this->ButtonExitMainForm->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ButtonExitMainForm->UseVisualStyleBackColor = false;
			this->ButtonExitMainForm->Click += gcnew System::EventHandler(this, &Form1::ButtonExitMainForm_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->ButtonExitMainForm);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ButtonStudent);
			this->Controls->Add(this->LabelProject);
			this->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Form1";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonExitMainForm_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void ButtonStudent_Click(System::Object^ sender, System::EventArgs^ e) {
st->Show();
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
mg->Show();
	
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dragging = false;
}

private: System::Void Form1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}

private: System::Void Form1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}

	private: System::Void Form1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false; //this bool is awesome
	}
};
}
