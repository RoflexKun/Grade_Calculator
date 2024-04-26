#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <windows.h>
#include <msclr/marshal_cppstd.h>

using namespace System::Collections::Generic;

namespace myCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for mainWindow
	/// </summary>
	public ref class mainWindow : public System::Windows::Forms::Form
	{
	private:
		String^ courseName;
		int courseCredits;
		int courseFGrade;
	private: System::Windows::Forms::Button^ showCourses;

		   Dictionary<String^, List<int>^>^ myCourses;
		
		
	public:
		
		mainWindow(Dictionary<String^, List<int>^>^ courses)
		{
			InitializeComponent();
			this->courseCredits = 0;
			this->courseFGrade = 0;
			this->courseName = "";
			myCourses = courses;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->showCourses = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(265, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Grade Calculator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(166, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 18);
			this->label2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(149, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Course Name:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(310, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &mainWindow::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(310, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &mainWindow::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(213, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Credits:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(310, 199);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(212, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &mainWindow::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(169, 195);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Final Grade:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(310, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 47);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add new Course";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainWindow::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(492, 253);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(214, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Does this course add to the final grade\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &mainWindow::checkBox1_CheckedChanged);
			// 
			// showCourses
			// 
			this->showCourses->BackColor = System::Drawing::SystemColors::Info;
			this->showCourses->Location = System::Drawing::Point(12, 460);
			this->showCourses->Name = L"showCourses";
			this->showCourses->Size = System::Drawing::Size(158, 42);
			this->showCourses->TabIndex = 10;
			this->showCourses->Text = L"Show My Courses";
			this->showCourses->UseVisualStyleBackColor = false;
			this->showCourses->Click += gcnew System::EventHandler(this, &mainWindow::showCourses_Click);
			// 
			// mainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(773, 514);
			this->Controls->Add(this->showCourses);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"mainWindow";
			this->Text = L"mainWindow";
			this->Load += gcnew System::EventHandler(this, &mainWindow::mainWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		courseName = textBox1->Text;
		
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ temp = textBox2->Text;
		int tempint = 0;
		if (temp == "")
			return;
		if (Int32::TryParse(temp, tempint))
		{
			this->courseCredits = tempint;
		}
		else
		{
			MessageBox::Show("Invalid input, try again!");
			textBox2->Text = "";
			this->courseCredits = 0;
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ temp = textBox3->Text;
		int tempint = 0;
		if (temp == "")
			return;
		if (Int32::TryParse(temp, tempint))
		{
			this->courseFGrade = tempint;
		}
		else
		{
			MessageBox::Show("Invalid input, try again!");
			textBox3->Text = "";
			this->courseFGrade = 0;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AddCourse(courseName, courseCredits, courseFGrade);
		MessageBox::Show("Course added!");
		//MessageBox::Show("Course name: " + courseName + "\nCredits: " + courseCredits + "\nFinal Grade: " + courseFGrade);
		textBox1->Text = ""; 
		textBox2->Text = "";
		textBox3->Text = "";	
	}
	private: System::Void AddCourse(String^ name, int credits, int fgrade)
	{
		if (!myCourses->ContainsKey(name))
		{
			myCourses->Add(name, gcnew List<int>());
		}
		myCourses[name]->Add(credits);
		myCourses[name]->Add(fgrade);
		if (checkBox1->Checked == true)
			myCourses[name]->Add(1);
		else
		{
			myCourses[name]->Add(0);
		}
		
	}

private: System::Void showCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (KeyValuePair<String^, List<int>^>^ kvp in myCourses)
	{
		String^ courseName = kvp->Key;
		List<int>^ grades = kvp->Value;
		MessageBox::Show("Course Name: " + courseName + "\nCredits: " + grades[0].ToString() + "\nFinal Grade: " + grades[1].ToString() + "\nAdds to grade: " + grades[2].ToString());
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
		
}
};
}
