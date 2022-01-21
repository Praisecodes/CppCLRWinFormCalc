#pragma once

namespace PraiseCodesApp {
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Collections;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::ComponentModel;

	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm() {
			if (components)
				delete components;
		}

	private: System::Windows::Forms::Button^ Btn1;
	private: System::Windows::Forms::Button^ Btn2;
	private: System::Windows::Forms::Button^ Btn3;
	private: System::Windows::Forms::Button^ BtnAdd;
	private: System::Windows::Forms::Button^ Btn4;
	private: System::Windows::Forms::Button^ Btn5;
	private: System::Windows::Forms::Button^ Btn6;
	private: System::Windows::Forms::Button^ BtnMinus;

	protected:

	private:
		System::ComponentModel::Container^ components;

		void InitializeComponent(void) {
			this->Btn1 = (gcnew System::Windows::Forms::Button());
			this->Btn2 = (gcnew System::Windows::Forms::Button());
			this->Btn3 = (gcnew System::Windows::Forms::Button());
			this->BtnAdd = (gcnew System::Windows::Forms::Button());
			this->Btn4 = (gcnew System::Windows::Forms::Button());
			this->Btn5 = (gcnew System::Windows::Forms::Button());
			this->Btn6 = (gcnew System::Windows::Forms::Button());
			this->BtnMinus = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn1
			// 
			this->Btn1->Location = System::Drawing::Point(0, 90);
			this->Btn1->Name = L"Btn1";
			this->Btn1->Size = System::Drawing::Size(75, 80);
			this->Btn1->TabIndex = 0;
			this->Btn1->Text = L"1";
			//
			// Btn2
			// 
			this->Btn2->Location = System::Drawing::Point(75, 90);
			this->Btn2->Name = L"Btn2";
			this->Btn2->Size = System::Drawing::Size(75, 80);
			this->Btn2->Text = L"2";
			this->Btn2->TabIndex = 1;
			//
			// Btn3
			// 
			this->Btn3->Location = System::Drawing::Point(150, 90);
			this->Btn3->Size = System::Drawing::Size(75, 80);
			this->Btn3->Name = L"Btn3";
			this->Btn3->Text = L"3";
			this->Btn3->TabIndex = 2;
			//
			// BtnAdd
			// 
			this->BtnAdd->Location = System::Drawing::Point(225, 90);
			this->BtnAdd->Size = System::Drawing::Size(75, 80);
			this->BtnAdd->Name = L"BtnAdd";
			this->BtnAdd->Text = L"+";
			this->BtnAdd->TabIndex = 3;

			// 
			// Btn4
			// 
			this->Btn4->Location = System::Drawing::Point(0, 170);
			this->Btn4->Name = L"Btn4";
			this->Btn4->Size = System::Drawing::Size(75, 80);
			this->Btn4->TabIndex = 4;
			this->Btn4->Text = L"4";
			//
			// Btn5
			// 
			this->Btn5->Location = System::Drawing::Point(75, 170);
			this->Btn5->Name = L"Btn5";
			this->Btn5->Size = System::Drawing::Size(75, 80);
			this->Btn5->Text = L"5";
			this->Btn5->TabIndex = 5;
			//
			// Btn6
			// 
			this->Btn6->Location = System::Drawing::Point(150, 170);
			this->Btn6->Size = System::Drawing::Size(75, 80);
			this->Btn6->Name = L"Btn6";
			this->Btn6->Text = L"6";
			this->Btn6->TabIndex = 6;
			//
			// BtnMinus
			// 
			this->BtnMinus->Location = System::Drawing::Point(225, 170);
			this->BtnMinus->Size = System::Drawing::Size(75, 80);
			this->BtnMinus->Name = L"BtnMinus";
			this->BtnMinus->Text = L"-";
			this->BtnMinus->TabIndex = 7;

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 400);
			this->Controls->Add(this->Btn1);
			this->Controls->Add(this->Btn2);
			this->Controls->Add(this->Btn3);
			this->Controls->Add(this->BtnAdd);
			this->Controls->Add(this->Btn4);
			this->Controls->Add(this->Btn5);
			this->Controls->Add(this->Btn6);
			this->Controls->Add(this->BtnMinus);
			this->Name = L"MyForm";
			this->Text = L"Praise Codes App";
			this->ResumeLayout(false);

		}
	};
}