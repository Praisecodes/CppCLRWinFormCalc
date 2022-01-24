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
	private: System::Windows::Forms::TextBox^ Screen;

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
			this->Screen = (gcnew System::Windows::Forms::TextBox());

			this->SuspendLayout();
			//
			// Screen
			//
			this->Screen->Location = System::Drawing::Point(0, 0);
			this->Screen->Size = System::Drawing::Size(300, 88);
			this->Screen->Name = L"Calc Screen";
			this->Screen->Multiline = true;
			this->Screen->ReadOnly = true;
			this->Screen->Text = L"0";
			this->Screen->TabIndex = 16;
			this->Screen->Font = (gcnew System::Drawing::Font(L"Tahoma", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			// 
			// Btn1
			// 
			this->Btn1->Location = System::Drawing::Point(0, 88);
			this->Btn1->Name = L"Btn1";
			this->Btn1->Size = System::Drawing::Size(75, 78);
			this->Btn1->TabIndex = 0;
			this->Btn1->Text = L"1";
			this->Btn1->UseVisualStyleBackColor = false;
			this->Btn1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn1->Click += gcnew System::EventHandler(this, &MyForm::Btn1Click);
			//
			// Btn2
			// 
			this->Btn2->Location = System::Drawing::Point(75, 88);
			this->Btn2->Name = L"Btn2";
			this->Btn2->Size = System::Drawing::Size(75, 78);
			this->Btn2->Text = L"2";
			this->Btn2->TabIndex = 1;
			this->Btn2->UseVisualStyleBackColor = false;
			this->Btn2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn2->Click += gcnew System::EventHandler(this, &MyForm::Btn2Click);
			//
			// Btn3
			// 
			this->Btn3->Location = System::Drawing::Point(150, 88);
			this->Btn3->Size = System::Drawing::Size(75, 78);
			this->Btn3->Name = L"Btn3";
			this->Btn3->Text = L"3";
			this->Btn3->TabIndex = 2;
			this->Btn3->UseVisualStyleBackColor = false;
			this->Btn3->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn3->Click += gcnew System::EventHandler(this, &MyForm::Btn3Click);
			//
			// BtnAdd
			// 
			this->BtnAdd->Location = System::Drawing::Point(225, 88);
			this->BtnAdd->Size = System::Drawing::Size(75, 78);
			this->BtnAdd->Name = L"BtnAdd";
			this->BtnAdd->Text = L"+";
			this->BtnAdd->TabIndex = 3;
			this->BtnAdd->UseVisualStyleBackColor = false;
			this->BtnAdd->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnAdd->Click += gcnew System::EventHandler(this, &MyForm::BtnAddClick);

			// 
			// Btn4
			// 
			this->Btn4->Location = System::Drawing::Point(0, 166);
			this->Btn4->Name = L"Btn4";
			this->Btn4->Size = System::Drawing::Size(75, 78);
			this->Btn4->TabIndex = 4;
			this->Btn4->Text = L"4";
			this->Btn4->UseVisualStyleBackColor = false;
			this->Btn4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn4->Click += gcnew System::EventHandler(this, &MyForm::Btn4Click);
			//
			// Btn5
			// 
			this->Btn5->Location = System::Drawing::Point(75, 166);
			this->Btn5->Name = L"Btn5";
			this->Btn5->Size = System::Drawing::Size(75, 78);
			this->Btn5->Text = L"5";
			this->Btn5->TabIndex = 5;
			this->Btn5->UseVisualStyleBackColor = false;
			this->Btn5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn5->Click += gcnew System::EventHandler(this, &MyForm::Btn5Click);
			//
			// Btn6
			// 
			this->Btn6->Location = System::Drawing::Point(150, 166);
			this->Btn6->Size = System::Drawing::Size(75, 78);
			this->Btn6->Name = L"Btn6";
			this->Btn6->Text = L"6";
			this->Btn6->TabIndex = 6;
			this->Btn6->UseVisualStyleBackColor = false;
			this->Btn6->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn6->Click += gcnew System::EventHandler(this, &MyForm::Btn6Click);
			//
			// BtnMinus
			// 
			this->BtnMinus->Location = System::Drawing::Point(225, 166);
			this->BtnMinus->Size = System::Drawing::Size(75, 78);
			this->BtnMinus->Name = L"BtnMinus";
			this->BtnMinus->Text = L"-";
			this->BtnMinus->TabIndex = 7;
			this->BtnMinus->UseVisualStyleBackColor = false;
			this->BtnMinus->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnMinus->Click += gcnew System::EventHandler(this, &MyForm::BtnMinusClick);

			// 
			// Btn7
			// 
			this->Btn7->Location = System::Drawing::Point(0, 244);
			this->Btn7->Name = L"Btn7";
			this->Btn7->Size = System::Drawing::Size(75, 78);
			this->Btn7->TabIndex = 8;
			this->Btn7->Text = L"7";
			this->Btn7->UseVisualStyleBackColor = false;
			this->Btn7->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn7->Click += gcnew System::EventHandler(this, &MyForm::Btn7Click);
			//
			// Btn8
			// 
			this->Btn8->Location = System::Drawing::Point(75, 244);
			this->Btn8->Name = L"Btn8";
			this->Btn8->Size = System::Drawing::Size(75, 78);
			this->Btn8->Text = L"8";
			this->Btn8->TabIndex = 9;
			this->Btn8->UseVisualStyleBackColor = false;
			this->Btn8->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn8->Click += gcnew System::EventHandler(this, &MyForm::Btn8Click);
			//
			// Btn9
			// 
			this->Btn9->Location = System::Drawing::Point(150, 244);
			this->Btn9->Size = System::Drawing::Size(75, 78);
			this->Btn9->Name = L"Btn9";
			this->Btn9->Text = L"9";
			this->Btn9->TabIndex = 10;
			this->Btn9->UseVisualStyleBackColor = false;
			this->Btn9->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn9->Click += gcnew System::EventHandler(this, &MyForm::Btn9Click);
			//
			// BtnTimes
			// 
			this->BtnTimes->Location = System::Drawing::Point(225, 244);
			this->BtnTimes->Size = System::Drawing::Size(75, 78);
			this->BtnTimes->Name = L"BtnTimes";
			this->BtnTimes->Text = L"x";
			this->BtnTimes->TabIndex = 11;
			this->BtnTimes->UseVisualStyleBackColor = false;
			this->BtnTimes->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnTimes->Click += gcnew System::EventHandler(this, &MyForm::BtnTimesClick);

			// 
			// BtnC
			//
			this->BtnC->Location = System::Drawing::Point(0, 322);
			this->BtnC->Size = System::Drawing::Size(75, 78);
			this->BtnC->Name = L"BtnC";
			this->BtnC->Text = L"C";
			this->BtnC->TabIndex = 12;
			this->BtnC->UseVisualStyleBackColor = false;
			this->BtnC->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnC->Click += gcnew System::EventHandler(this, &MyForm::BtnCClick);
			// 
			// Btn0
			//
			this->Btn0->Location = System::Drawing::Point(75, 322);
			this->Btn0->Size = System::Drawing::Size(75, 78);
			this->Btn0->Name = L"Btn0";
			this->Btn0->Text = L"0";
			this->Btn0->TabIndex = 13;
			this->Btn0->UseVisualStyleBackColor = false;
			this->Btn0->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn0->Click += gcnew System::EventHandler(this, &MyForm::Btn0Click);
			//
			// BtnDivide
			//
			this->BtnDivide->Location = System::Drawing::Point(150, 322);
			this->BtnDivide->Size = System::Drawing::Size(75, 78);
			this->BtnDivide->Name = L"BtnDivide";
			this->BtnDivide->Text = L"/";
			this->BtnDivide->TabIndex = 14;
			this->BtnDivide->UseVisualStyleBackColor = false;
			this->BtnDivide->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnDivide->Click += gcnew System::EventHandler(this, &MyForm::BtnDivideClick);
			//
			// BtnEquals
			//
			this->BtnEquals->Location = System::Drawing::Point(225, 322);
			this->BtnEquals->Size = System::Drawing::Size(75, 78);
			this->BtnEquals->Name = L"BtnEquals";
			this->BtnEquals->Text = L"=";
			this->BtnEquals->TabIndex = 15;
			this->BtnEquals->UseVisualStyleBackColor = false;
			this->BtnEquals->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEquals->Click += gcnew System::EventHandler(this, &MyForm::BtnEqualsClick);

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 400);
			this->MaximizeBox = false;
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
			this->Controls->Add(this->Screen);
			this->Name = L"MyForm";
			this->Text = L"Praise Codes App";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void Btn1Click(System::Object^ sender, System::EventArgs^ handle) {
		
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"1";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"1";
		}
	}

	private: System::Void Btn2Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"2";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"2";
		}
	}

	private: System::Void Btn3Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"3";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"3";
		}
	}

	private: System::Void BtnAddClick(System::Object^ sender, System::EventArgs^ handle) {
		Screen->Text = L"+";
	}

	private: System::Void Btn4Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"4";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"4";
		}
	}

	private: System::Void Btn5Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"5";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"5";
		}
	}

	private: System::Void Btn6Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"6";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"6";
		}
	}

	private: System::Void BtnMinusClick(System::Object^ sender, System::EventArgs^ handle) {
		Screen->Text = L"-";
	}

	private: System::Void Btn7Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"7";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"7";
		}
	}

	private: System::Void Btn8Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"8";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"8";
		}
	}

	private: System::Void Btn9Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"9";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"9";
		}
	}

	private: System::Void BtnTimesClick(System::Object^ sender, System::EventArgs^ handle) {
		Screen->Text = L"x";
	}

	private: System::Void BtnCClick(System::Object^ sender, System::EventArgs^ handle) {
		Screen->Text = L"0";
	}

	private: System::Void Btn0Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"0";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"0";
		}
	}

	private: System::Void BtnDivideClick(System::Object^ sender, System::EventArgs^ handle) {
		Screen->Text = L"/";
	}

	private: System::Void BtnEqualsClick(System::Object^ sender, System::EventArgs^ handle) {
		Screen->Text = L"=";
	}
	};
}