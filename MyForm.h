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
	private: System::Windows::Forms::Button^ Btn7;
	private: System::Windows::Forms::Button^ Btn8;
	private: System::Windows::Forms::Button^ Btn9;
	private: System::Windows::Forms::Button^ BtnTimes;
	private: System::Windows::Forms::Button^ BtnC;
	private: System::Windows::Forms::Button^ Btn0;
	private: System::Windows::Forms::Button^ BtnDivide;
	private: System::Windows::Forms::Button^ BtnEquals;

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
			this->Btn7 = (gcnew System::Windows::Forms::Button());
			this->Btn8 = (gcnew System::Windows::Forms::Button());
			this->Btn9 = (gcnew System::Windows::Forms::Button());
			this->BtnTimes = (gcnew System::Windows::Forms::Button());
			this->BtnC = (gcnew System::Windows::Forms::Button());
			this->Btn0 = (gcnew System::Windows::Forms::Button());
			this->BtnDivide = (gcnew System::Windows::Forms::Button());
			this->BtnEquals = (gcnew System::Windows::Forms::Button());

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
			// Btn7
			// 
			this->Btn7->Location = System::Drawing::Point(0, 250);
			this->Btn7->Name = L"Btn7";
			this->Btn7->Size = System::Drawing::Size(75, 80);
			this->Btn7->TabIndex = 8;
			this->Btn7->Text = L"7";
			//
			// Btn8
			// 
			this->Btn8->Location = System::Drawing::Point(75, 250);
			this->Btn8->Name = L"Btn8";
			this->Btn8->Size = System::Drawing::Size(75, 80);
			this->Btn8->Text = L"8";
			this->Btn8->TabIndex = 9;
			//
			// Btn9
			// 
			this->Btn9->Location = System::Drawing::Point(150, 250);
			this->Btn9->Size = System::Drawing::Size(75, 80);
			this->Btn9->Name = L"Btn9";
			this->Btn9->Text = L"9";
			this->Btn9->TabIndex = 10;
			//
			// BtnTimes
			// 
			this->BtnTimes->Location = System::Drawing::Point(225, 250);
			this->BtnTimes->Size = System::Drawing::Size(75, 80);
			this->BtnTimes->Name = L"BtnTimes";
			this->BtnTimes->Text = L"x";
			this->BtnTimes->TabIndex = 11;

			// 
			// BtnC
			//
			this->BtnC->Location = System::Drawing::Point(0, 330);
			this->BtnC->Size = System::Drawing::Size(75, 80);
			this->BtnC->Name = L"BtnC";
			this->BtnC->Text = L"C";
			this->BtnC->TabIndex = 12;
			// 
			// Btn0
			//
			this->Btn0->Location = System::Drawing::Point(75, 330);
			this->Btn0->Size = System::Drawing::Size(75, 80);
			this->Btn0->Name = L"Btn0";
			this->Btn0->Text = L"0";
			this->Btn0->TabIndex = 13;
			//
			// BtnDivide
			//
			this->BtnDivide->Location = System::Drawing::Point(150, 330);
			this->BtnDivide->Size = System::Drawing::Size(75, 80);
			this->BtnDivide->Name = L"BtnDivide";
			this->BtnDivide->Text = L"/";
			this->BtnDivide->TabIndex = 14;
			//
			// BtnEquals
			//
			this->BtnEquals->Location = System::Drawing::Point(225, 330);
			this->BtnEquals->Size = System::Drawing::Size(75, 80);
			this->BtnEquals->Name = L"BtnEquals";
			this->BtnEquals->Text = L"=";
			this->BtnEquals->TabIndex = 15;

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
			this->Controls->Add(this->Btn7);
			this->Controls->Add(this->Btn8);
			this->Controls->Add(this->Btn9);
			this->Controls->Add(this->BtnTimes);
			this->Controls->Add(this->Btn0);
			this->Controls->Add(this->BtnC);
			this->Controls->Add(this->BtnDivide);
			this->Controls->Add(this->BtnEquals);
			this->Name = L"MyForm";
			this->Text = L"Praise Codes App";
			this->ResumeLayout(false);

		}
	};
}