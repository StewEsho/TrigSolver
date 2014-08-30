#pragma once
#include <sstream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <cmath>

#define PI 3.141592


namespace TrigSolver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// TRIG SOLVER
	/// Will gather inputs from text boxes, and solve a triangle using the given objects.
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::RadioButton^  rbtnSelectRight;
	private: System::Windows::Forms::RadioButton^  rbtnSelectOther;



	private: System::Windows::Forms::TextBox^  txtAngleB;
	private: System::Windows::Forms::TextBox^  txtSideC;
	private: System::Windows::Forms::TextBox^  txtAngleA;
	private: System::Windows::Forms::TextBox^  txtSideB;
	private: System::Windows::Forms::TextBox^  txtSideA;







	private: System::Windows::Forms::Button^  btnSolve;
	private: System::Windows::Forms::GroupBox^  grpSelectTriangle;



	private: System::Windows::Forms::PictureBox^  picTriangleRight;

	private: System::Windows::Forms::PictureBox^  picTriangleScal;
	private: System::Windows::Forms::TextBox^  txtAngleC;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblAngleUnits;


	private: System::Windows::Forms::Label^  lblTriType;
	private: System::Windows::Forms::Label^  lblSideA;
	private: System::Windows::Forms::Label^  lblSideB;
	private: System::Windows::Forms::Label^  lblSideC;
	private: System::Windows::Forms::Label^  lblAngA;
	private: System::Windows::Forms::Label^  lblAngB;
	private: System::Windows::Forms::Label^  lblAngC;
	private: System::Windows::Forms::CheckBox^  chkSideA;
	private: System::Windows::Forms::CheckBox^  chkSideB;
	private: System::Windows::Forms::CheckBox^  chkAngleC;
	private: System::Windows::Forms::CheckBox^  chkAngleB;
	private: System::Windows::Forms::CheckBox^  chkAngleA;
	private: System::Windows::Forms::CheckBox^  chkSideC;
	private: System::Windows::Forms::Panel^  pnlAllControls;
	private: System::Windows::Forms::Label^  lblSideAAns;
	private: System::Windows::Forms::Label^  lblAngleCAns;
	private: System::Windows::Forms::Label^  lblAngleBAns;
	private: System::Windows::Forms::Label^  lblAngleAAns;
	private: System::Windows::Forms::Label^  lblSideCAns;
	private: System::Windows::Forms::Label^  lblSideBAns;
	private: System::Windows::Forms::GroupBox^  grpDegreeRadian;
	private: System::Windows::Forms::RadioButton^  rbtnAngleRadian;
	private: System::Windows::Forms::RadioButton^  rbtnAngleDegree;













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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->rbtnSelectRight = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnSelectOther = (gcnew System::Windows::Forms::RadioButton());
			this->txtAngleB = (gcnew System::Windows::Forms::TextBox());
			this->txtSideC = (gcnew System::Windows::Forms::TextBox());
			this->txtAngleA = (gcnew System::Windows::Forms::TextBox());
			this->txtSideB = (gcnew System::Windows::Forms::TextBox());
			this->txtSideA = (gcnew System::Windows::Forms::TextBox());
			this->btnSolve = (gcnew System::Windows::Forms::Button());
			this->grpSelectTriangle = (gcnew System::Windows::Forms::GroupBox());
			this->picTriangleRight = (gcnew System::Windows::Forms::PictureBox());
			this->picTriangleScal = (gcnew System::Windows::Forms::PictureBox());
			this->txtAngleC = (gcnew System::Windows::Forms::TextBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblTriType = (gcnew System::Windows::Forms::Label());
			this->lblAngleUnits = (gcnew System::Windows::Forms::Label());
			this->lblSideA = (gcnew System::Windows::Forms::Label());
			this->lblSideB = (gcnew System::Windows::Forms::Label());
			this->lblSideC = (gcnew System::Windows::Forms::Label());
			this->lblAngA = (gcnew System::Windows::Forms::Label());
			this->lblAngB = (gcnew System::Windows::Forms::Label());
			this->lblAngC = (gcnew System::Windows::Forms::Label());
			this->chkSideA = (gcnew System::Windows::Forms::CheckBox());
			this->chkSideB = (gcnew System::Windows::Forms::CheckBox());
			this->chkAngleC = (gcnew System::Windows::Forms::CheckBox());
			this->chkAngleB = (gcnew System::Windows::Forms::CheckBox());
			this->chkAngleA = (gcnew System::Windows::Forms::CheckBox());
			this->chkSideC = (gcnew System::Windows::Forms::CheckBox());
			this->pnlAllControls = (gcnew System::Windows::Forms::Panel());
			this->lblAngleCAns = (gcnew System::Windows::Forms::Label());
			this->lblAngleBAns = (gcnew System::Windows::Forms::Label());
			this->lblAngleAAns = (gcnew System::Windows::Forms::Label());
			this->lblSideCAns = (gcnew System::Windows::Forms::Label());
			this->lblSideBAns = (gcnew System::Windows::Forms::Label());
			this->lblSideAAns = (gcnew System::Windows::Forms::Label());
			this->rbtnAngleDegree = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnAngleRadian = (gcnew System::Windows::Forms::RadioButton());
			this->grpDegreeRadian = (gcnew System::Windows::Forms::GroupBox());
			this->grpSelectTriangle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picTriangleRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picTriangleScal))->BeginInit();
			this->pnlAllControls->SuspendLayout();
			this->grpDegreeRadian->SuspendLayout();
			this->SuspendLayout();
			// 
			// rbtnSelectRight
			// 
			this->rbtnSelectRight->AutoSize = true;
			this->rbtnSelectRight->Location = System::Drawing::Point(0, 10);
			this->rbtnSelectRight->Name = L"rbtnSelectRight";
			this->rbtnSelectRight->Size = System::Drawing::Size(91, 17);
			this->rbtnSelectRight->TabIndex = 0;
			this->rbtnSelectRight->TabStop = true;
			this->rbtnSelectRight->Text = L"Right Triangle";
			this->rbtnSelectRight->UseVisualStyleBackColor = true;
			this->rbtnSelectRight->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtnSelectRight_CheckedChanged);
			// 
			// rbtnSelectOther
			// 
			this->rbtnSelectOther->AutoSize = true;
			this->rbtnSelectOther->Location = System::Drawing::Point(0, 33);
			this->rbtnSelectOther->Name = L"rbtnSelectOther";
			this->rbtnSelectOther->Size = System::Drawing::Size(114, 17);
			this->rbtnSelectOther->TabIndex = 1;
			this->rbtnSelectOther->TabStop = true;
			this->rbtnSelectOther->Text = L"Non-Right Triangle";
			this->rbtnSelectOther->UseVisualStyleBackColor = true;
			this->rbtnSelectOther->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtnSelectScal_CheckedChanged);
			// 
			// txtAngleB
			// 
			this->txtAngleB->Enabled = false;
			this->txtAngleB->Location = System::Drawing::Point(474, 256);
			this->txtAngleB->Name = L"txtAngleB";
			this->txtAngleB->Size = System::Drawing::Size(46, 20);
			this->txtAngleB->TabIndex = 3;
			this->txtAngleB->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txtSideC
			// 
			this->txtSideC->Enabled = false;
			this->txtSideC->Location = System::Drawing::Point(10, 382);
			this->txtSideC->Name = L"txtSideC";
			this->txtSideC->Size = System::Drawing::Size(46, 20);
			this->txtSideC->TabIndex = 4;
			// 
			// txtAngleA
			// 
			this->txtAngleA->Enabled = false;
			this->txtAngleA->Location = System::Drawing::Point(474, 130);
			this->txtAngleA->Name = L"txtAngleA";
			this->txtAngleA->Size = System::Drawing::Size(46, 20);
			this->txtAngleA->TabIndex = 5;
			this->txtAngleA->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// txtSideB
			// 
			this->txtSideB->Enabled = false;
			this->txtSideB->Location = System::Drawing::Point(10, 256);
			this->txtSideB->Name = L"txtSideB";
			this->txtSideB->Size = System::Drawing::Size(46, 20);
			this->txtSideB->TabIndex = 6;
			// 
			// txtSideA
			// 
			this->txtSideA->Enabled = false;
			this->txtSideA->Location = System::Drawing::Point(10, 130);
			this->txtSideA->Name = L"txtSideA";
			this->txtSideA->Size = System::Drawing::Size(46, 20);
			this->txtSideA->TabIndex = 8;
			// 
			// btnSolve
			// 
			this->btnSolve->Location = System::Drawing::Point(115, 436);
			this->btnSolve->Name = L"btnSolve";
			this->btnSolve->Size = System::Drawing::Size(300, 23);
			this->btnSolve->TabIndex = 10;
			this->btnSolve->Text = L"Solve Triangle";
			this->btnSolve->UseVisualStyleBackColor = true;
			this->btnSolve->Click += gcnew System::EventHandler(this, &Form1::btnSolve_Click);
			// 
			// grpSelectTriangle
			// 
			this->grpSelectTriangle->Controls->Add(this->rbtnSelectRight);
			this->grpSelectTriangle->Controls->Add(this->rbtnSelectOther);
			this->grpSelectTriangle->Location = System::Drawing::Point(10, 18);
			this->grpSelectTriangle->Name = L"grpSelectTriangle";
			this->grpSelectTriangle->Size = System::Drawing::Size(114, 66);
			this->grpSelectTriangle->TabIndex = 11;
			this->grpSelectTriangle->TabStop = false;
			// 
			// picTriangleRight
			// 
			this->picTriangleRight->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picTriangleRight.Image")));
			this->picTriangleRight->Location = System::Drawing::Point(115, 101);
			this->picTriangleRight->Name = L"picTriangleRight";
			this->picTriangleRight->Size = System::Drawing::Size(300, 300);
			this->picTriangleRight->TabIndex = 2;
			this->picTriangleRight->TabStop = false;
			this->picTriangleRight->Visible = false;
			// 
			// picTriangleScal
			// 
			this->picTriangleScal->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picTriangleScal.Image")));
			this->picTriangleScal->Location = System::Drawing::Point(115, 101);
			this->picTriangleScal->Name = L"picTriangleScal";
			this->picTriangleScal->Size = System::Drawing::Size(299, 300);
			this->picTriangleScal->TabIndex = 13;
			this->picTriangleScal->TabStop = false;
			this->picTriangleScal->Visible = false;
			// 
			// txtAngleC
			// 
			this->txtAngleC->Enabled = false;
			this->txtAngleC->Location = System::Drawing::Point(474, 382);
			this->txtAngleC->Name = L"txtAngleC";
			this->txtAngleC->Size = System::Drawing::Size(46, 20);
			this->txtAngleC->TabIndex = 14;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(143, 31);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(250, 27);
			this->lblTitle->TabIndex = 15;
			this->lblTitle->Text = L"TrigSolver by Stew Esho";
			// 
			// lblTriType
			// 
			this->lblTriType->AutoSize = true;
			this->lblTriType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTriType->Location = System::Drawing::Point(16, 10);
			this->lblTriType->Name = L"lblTriType";
			this->lblTriType->Size = System::Drawing::Size(85, 13);
			this->lblTriType->TabIndex = 16;
			this->lblTriType->Text = L"Triangle Type";
			// 
			// lblAngleUnits
			// 
			this->lblAngleUnits->AutoSize = true;
			this->lblAngleUnits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblAngleUnits->Location = System::Drawing::Point(442, 10);
			this->lblAngleUnits->Name = L"lblAngleUnits";
			this->lblAngleUnits->Size = System::Drawing::Size(72, 13);
			this->lblAngleUnits->TabIndex = 17;
			this->lblAngleUnits->Text = L"Angle Units";
			this->lblAngleUnits->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblSideA
			// 
			this->lblSideA->AutoSize = true;
			this->lblSideA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblSideA->Location = System::Drawing::Point(7, 114);
			this->lblSideA->Name = L"lblSideA";
			this->lblSideA->Size = System::Drawing::Size(44, 13);
			this->lblSideA->TabIndex = 18;
			this->lblSideA->Text = L"Side A";
			// 
			// lblSideB
			// 
			this->lblSideB->AutoSize = true;
			this->lblSideB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblSideB->Location = System::Drawing::Point(7, 240);
			this->lblSideB->Name = L"lblSideB";
			this->lblSideB->Size = System::Drawing::Size(44, 13);
			this->lblSideB->TabIndex = 19;
			this->lblSideB->Text = L"Side B";
			// 
			// lblSideC
			// 
			this->lblSideC->AutoSize = true;
			this->lblSideC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblSideC->Location = System::Drawing::Point(7, 366);
			this->lblSideC->Name = L"lblSideC";
			this->lblSideC->Size = System::Drawing::Size(44, 13);
			this->lblSideC->TabIndex = 20;
			this->lblSideC->Text = L"Side C";
			// 
			// lblAngA
			// 
			this->lblAngA->AutoSize = true;
			this->lblAngA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblAngA->Location = System::Drawing::Point(471, 114);
			this->lblAngA->Name = L"lblAngA";
			this->lblAngA->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblAngA->Size = System::Drawing::Size(50, 13);
			this->lblAngA->TabIndex = 21;
			this->lblAngA->Text = L"Angle a";
			// 
			// lblAngB
			// 
			this->lblAngB->AutoSize = true;
			this->lblAngB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblAngB->Location = System::Drawing::Point(471, 240);
			this->lblAngB->Name = L"lblAngB";
			this->lblAngB->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblAngB->Size = System::Drawing::Size(50, 13);
			this->lblAngB->TabIndex = 22;
			this->lblAngB->Text = L"Angle b";
			// 
			// lblAngC
			// 
			this->lblAngC->AutoSize = true;
			this->lblAngC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblAngC->Location = System::Drawing::Point(471, 366);
			this->lblAngC->Name = L"lblAngC";
			this->lblAngC->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblAngC->Size = System::Drawing::Size(50, 13);
			this->lblAngC->TabIndex = 23;
			this->lblAngC->Text = L"Angle c";
			// 
			// chkSideA
			// 
			this->chkSideA->AutoSize = true;
			this->chkSideA->Location = System::Drawing::Point(62, 133);
			this->chkSideA->Name = L"chkSideA";
			this->chkSideA->Size = System::Drawing::Size(15, 14);
			this->chkSideA->TabIndex = 24;
			this->chkSideA->UseVisualStyleBackColor = true;
			this->chkSideA->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkSideA_CheckedChanged);
			// 
			// chkSideB
			// 
			this->chkSideB->AutoSize = true;
			this->chkSideB->Location = System::Drawing::Point(62, 259);
			this->chkSideB->Name = L"chkSideB";
			this->chkSideB->Size = System::Drawing::Size(15, 14);
			this->chkSideB->TabIndex = 25;
			this->chkSideB->UseVisualStyleBackColor = true;
			this->chkSideB->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkSideB_CheckedChanged);
			// 
			// chkAngleC
			// 
			this->chkAngleC->AutoSize = true;
			this->chkAngleC->Location = System::Drawing::Point(453, 385);
			this->chkAngleC->Name = L"chkAngleC";
			this->chkAngleC->Size = System::Drawing::Size(15, 14);
			this->chkAngleC->TabIndex = 26;
			this->chkAngleC->UseVisualStyleBackColor = true;
			this->chkAngleC->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkAngleC_CheckedChanged);
			// 
			// chkAngleB
			// 
			this->chkAngleB->AutoSize = true;
			this->chkAngleB->Location = System::Drawing::Point(453, 259);
			this->chkAngleB->Name = L"chkAngleB";
			this->chkAngleB->Size = System::Drawing::Size(15, 14);
			this->chkAngleB->TabIndex = 27;
			this->chkAngleB->UseVisualStyleBackColor = true;
			this->chkAngleB->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkAngleB_CheckedChanged);
			// 
			// chkAngleA
			// 
			this->chkAngleA->AutoSize = true;
			this->chkAngleA->Location = System::Drawing::Point(453, 133);
			this->chkAngleA->Name = L"chkAngleA";
			this->chkAngleA->Size = System::Drawing::Size(15, 14);
			this->chkAngleA->TabIndex = 28;
			this->chkAngleA->UseVisualStyleBackColor = true;
			this->chkAngleA->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkAngleA_CheckedChanged);
			// 
			// chkSideC
			// 
			this->chkSideC->AutoSize = true;
			this->chkSideC->Location = System::Drawing::Point(62, 385);
			this->chkSideC->Name = L"chkSideC";
			this->chkSideC->Size = System::Drawing::Size(15, 14);
			this->chkSideC->TabIndex = 29;
			this->chkSideC->UseVisualStyleBackColor = true;
			this->chkSideC->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkSideC_CheckedChanged);
			// 
			// pnlAllControls
			// 
			this->pnlAllControls->Controls->Add(this->lblAngleCAns);
			this->pnlAllControls->Controls->Add(this->lblAngleBAns);
			this->pnlAllControls->Controls->Add(this->lblAngleAAns);
			this->pnlAllControls->Controls->Add(this->lblSideCAns);
			this->pnlAllControls->Controls->Add(this->lblSideBAns);
			this->pnlAllControls->Controls->Add(this->lblSideAAns);
			this->pnlAllControls->Controls->Add(this->chkSideC);
			this->pnlAllControls->Controls->Add(this->chkAngleA);
			this->pnlAllControls->Controls->Add(this->chkAngleB);
			this->pnlAllControls->Controls->Add(this->chkAngleC);
			this->pnlAllControls->Controls->Add(this->chkSideB);
			this->pnlAllControls->Controls->Add(this->chkSideA);
			this->pnlAllControls->Controls->Add(this->lblAngC);
			this->pnlAllControls->Controls->Add(this->lblAngB);
			this->pnlAllControls->Controls->Add(this->lblAngA);
			this->pnlAllControls->Controls->Add(this->lblSideC);
			this->pnlAllControls->Controls->Add(this->lblSideB);
			this->pnlAllControls->Controls->Add(this->lblSideA);
			this->pnlAllControls->Controls->Add(this->lblAngleUnits);
			this->pnlAllControls->Controls->Add(this->lblTriType);
			this->pnlAllControls->Controls->Add(this->lblTitle);
			this->pnlAllControls->Controls->Add(this->txtAngleC);
			this->pnlAllControls->Controls->Add(this->picTriangleScal);
			this->pnlAllControls->Controls->Add(this->grpDegreeRadian);
			this->pnlAllControls->Controls->Add(this->grpSelectTriangle);
			this->pnlAllControls->Controls->Add(this->btnSolve);
			this->pnlAllControls->Controls->Add(this->txtSideA);
			this->pnlAllControls->Controls->Add(this->txtSideB);
			this->pnlAllControls->Controls->Add(this->txtAngleA);
			this->pnlAllControls->Controls->Add(this->txtSideC);
			this->pnlAllControls->Controls->Add(this->txtAngleB);
			this->pnlAllControls->Controls->Add(this->picTriangleRight);
			this->pnlAllControls->Location = System::Drawing::Point(2, 4);
			this->pnlAllControls->Name = L"pnlAllControls";
			this->pnlAllControls->Size = System::Drawing::Size(534, 482);
			this->pnlAllControls->TabIndex = 30;
			this->pnlAllControls->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pnlAllControls_Paint);
			// 
			// lblAngleCAns
			// 
			this->lblAngleCAns->AutoSize = true;
			this->lblAngleCAns->Location = System::Drawing::Point(471, 405);
			this->lblAngleCAns->Name = L"lblAngleCAns";
			this->lblAngleCAns->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lblAngleCAns->Size = System::Drawing::Size(13, 13);
			this->lblAngleCAns->TabIndex = 35;
			this->lblAngleCAns->Text = L"  ";
			// 
			// lblAngleBAns
			// 
			this->lblAngleBAns->AutoSize = true;
			this->lblAngleBAns->Location = System::Drawing::Point(474, 279);
			this->lblAngleBAns->Name = L"lblAngleBAns";
			this->lblAngleBAns->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lblAngleBAns->Size = System::Drawing::Size(10, 13);
			this->lblAngleBAns->TabIndex = 34;
			this->lblAngleBAns->Text = L" ";
			// 
			// lblAngleAAns
			// 
			this->lblAngleAAns->AutoSize = true;
			this->lblAngleAAns->Location = System::Drawing::Point(474, 153);
			this->lblAngleAAns->Name = L"lblAngleAAns";
			this->lblAngleAAns->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lblAngleAAns->Size = System::Drawing::Size(10, 13);
			this->lblAngleAAns->TabIndex = 33;
			this->lblAngleAAns->Text = L" ";
			// 
			// lblSideCAns
			// 
			this->lblSideCAns->AutoSize = true;
			this->lblSideCAns->Location = System::Drawing::Point(10, 405);
			this->lblSideCAns->Name = L"lblSideCAns";
			this->lblSideCAns->Size = System::Drawing::Size(10, 13);
			this->lblSideCAns->TabIndex = 32;
			this->lblSideCAns->Text = L" ";
			// 
			// lblSideBAns
			// 
			this->lblSideBAns->AutoSize = true;
			this->lblSideBAns->Location = System::Drawing::Point(10, 279);
			this->lblSideBAns->Name = L"lblSideBAns";
			this->lblSideBAns->Size = System::Drawing::Size(10, 13);
			this->lblSideBAns->TabIndex = 31;
			this->lblSideBAns->Text = L" ";
			// 
			// lblSideAAns
			// 
			this->lblSideAAns->AutoSize = true;
			this->lblSideAAns->Location = System::Drawing::Point(10, 153);
			this->lblSideAAns->Name = L"lblSideAAns";
			this->lblSideAAns->Size = System::Drawing::Size(10, 13);
			this->lblSideAAns->TabIndex = 30;
			this->lblSideAAns->Text = L" ";
			// 
			// rbtnAngleDegree
			// 
			this->rbtnAngleDegree->AutoSize = true;
			this->rbtnAngleDegree->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rbtnAngleDegree->Checked = true;
			this->rbtnAngleDegree->Location = System::Drawing::Point(29, 10);
			this->rbtnAngleDegree->Name = L"rbtnAngleDegree";
			this->rbtnAngleDegree->Size = System::Drawing::Size(65, 17);
			this->rbtnAngleDegree->TabIndex = 0;
			this->rbtnAngleDegree->TabStop = true;
			this->rbtnAngleDegree->Text = L"Degrees";
			this->rbtnAngleDegree->UseVisualStyleBackColor = true;
			this->rbtnAngleDegree->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtnAngleDegree_CheckedChanged);
			// 
			// rbtnAngleRadian
			// 
			this->rbtnAngleRadian->AutoSize = true;
			this->rbtnAngleRadian->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rbtnAngleRadian->Location = System::Drawing::Point(30, 33);
			this->rbtnAngleRadian->Name = L"rbtnAngleRadian";
			this->rbtnAngleRadian->Size = System::Drawing::Size(64, 17);
			this->rbtnAngleRadian->TabIndex = 1;
			this->rbtnAngleRadian->Text = L"Radians";
			this->rbtnAngleRadian->UseVisualStyleBackColor = true;
			// 
			// grpDegreeRadian
			// 
			this->grpDegreeRadian->Controls->Add(this->rbtnAngleRadian);
			this->grpDegreeRadian->Controls->Add(this->rbtnAngleDegree);
			this->grpDegreeRadian->Location = System::Drawing::Point(421, 18);
			this->grpDegreeRadian->Name = L"grpDegreeRadian";
			this->grpDegreeRadian->Size = System::Drawing::Size(99, 66);
			this->grpDegreeRadian->TabIndex = 12;
			this->grpDegreeRadian->TabStop = false;
			this->grpDegreeRadian->Enter += gcnew System::EventHandler(this, &Form1::grpDegreeRadian_Enter);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 483);
			this->Controls->Add(this->pnlAllControls);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"TrigSolver by Stew Esho";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpSelectTriangle->ResumeLayout(false);
			this->grpSelectTriangle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picTriangleRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picTriangleScal))->EndInit();
			this->pnlAllControls->ResumeLayout(false);
			this->pnlAllControls->PerformLayout();
			this->grpDegreeRadian->ResumeLayout(false);
			this->grpDegreeRadian->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
///VARIABLES

//Variables to store the info
double sideA, sideB, sideC;
double angleA, angleB, angleC;
//Stores weather or not the user inputted information
static bool isSideAInputted = false, isSideBInputted = false, isSideCInputted = false;
static bool isAngleAInputted = false, isAngleBInputted = false, isAngleCInputted = false;

///FUNCTIONS
//Will set up the variables for the calculations, runs at "SOLVE" button press
void buttonPressSetup(){
	//disables all controls
	pnlAllControls->Enabled = false;
	//gets input from textboxes, and converts to ints
	if (chkSideA->Checked){
		String^ sa = txtSideA->Text;
		string sideAstr;
		convertString(sa, sideAstr);
		sideA = stringToDouble(sideAstr);
		isSideAInputted = true;
		lblSideAAns->Text = sideA.ToString();
	}
	if (chkSideB->Checked){
		String^ sb = txtSideB->Text;
		string sideBstr;
		convertString(sb, sideBstr);
		sideB = stringToDouble(sideBstr);
		isSideBInputted = true;
		lblSideBAns->Text = sideB.ToString();
	}
	if (chkSideC->Checked){
		String^ sc = txtSideC->Text;
		string sideCstr;
		convertString(sc, sideCstr);
		sideC = stringToDouble(sideCstr);
		isSideCInputted = true;
		lblSideCAns->Text = sideC.ToString();
	}
	if (chkAngleA->Checked){
		String^ aa = txtAngleA->Text;
		string angleAstr;
		convertString(aa, angleAstr);
		angleA = stringToDouble(angleAstr);
		isAngleAInputted = true;
		lblAngleAAns->Text = angleA.ToString();
	}
	if (chkAngleB->Checked){
		String^ ab = txtAngleB->Text;
		string angleBstr;
		convertString(ab, angleBstr);
		angleB = stringToDouble(angleBstr);
		isAngleBInputted = true;
		lblAngleBAns->Text = angleB.ToString();
	}
	if (chkAngleC->Checked){
		String^ ac = txtAngleC->Text;
		string angleCstr;
		convertString(ac, angleCstr);
		angleC = stringToDouble(angleCstr);
		isAngleCInputted = true;
		lblAngleCAns->Text = angleC.ToString();
	}
}

//Will convert System::String to std::string
void convertString ( String ^ s, string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

//Will convert string to double
double stringToDouble( const std::string& inputString)
 {
   istringstream convert(inputString);
   double x;
   if (!(convert >> x))
     return 0;
   return x;
} 

//Converts Degree Inputs to Radians
double degToRad(double input){
	return input * PI / 180;
}
//Converts Radians to Degree
double radToDeg(double input){
	return input * 180 / PI;
}

///CONTROLS' CODE
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rbtnAngleDegree_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rbtnSelectRight_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			//if RIGHT TRIANGLE radio button is pressed, will show right triangle
			picTriangleRight->Visible = true;
			picTriangleScal->Visible = false;
			//sets angle C to 90 degrees
			chkAngleC->Checked = true;
			chkAngleC->Enabled = false;
			txtAngleC->Text = "90";
			txtAngleC->Enabled = false;
		 }///end of rbtnSelectRight_CheckedChanged
private: System::Void rbtnSelectScal_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			picTriangleRight->Visible = false;
			picTriangleScal->Visible = true;
			//removes angle C default text
			chkAngleC->Enabled = true;
			chkAngleC->Checked = false;
			txtAngleC->Text = "";
		 }//end of rbtnSelectScal_CheckedChanged
		 //**************
		 //Below code enables each textbox
private: System::Void chkSideA_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //if checked, the textbox will be enabled
			 if (chkSideA->Checked){
				 txtSideA->Enabled = true;
			 }
			 if (!chkSideA->Checked){
				 txtSideA->Enabled = false;
			 }
		 }///end of chkSideA_CheckedChanged
private: System::Void chkSideB_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //if checked, the textbox will be enabled
			 if (chkSideB->Checked){
				 txtSideB->Enabled = true;
			 }
			 if (!chkSideB->Checked){
				 txtSideB->Enabled = false;
			 }
		 }///end of chkSideB_CheckedChanged
private: System::Void chkSideC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //if checked, the textbox will be enabled
			 if (chkSideC->Checked){
				 txtSideC->Enabled = true;
			 }
			 if (!chkSideC->Checked){
				 txtSideC->Enabled = false;
			 }
		 }///end of chkSideC_CheckedChanged
private: System::Void chkAngleA_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //if checked, the textbox will be enabled
			 if (chkAngleA->Checked){
				 txtAngleA->Enabled = true;
			 }
			 if (!chkAngleA->Checked){
				 txtAngleA->Enabled = false;
			 }
		 }///end of chkAngleA_CheckedChanged
private: System::Void chkAngleB_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //if checked, the textbox will be enabled
			 if (chkAngleB->Checked){
				 txtAngleB->Enabled = true;
			 }
			 if (!chkAngleB->Checked){
				 txtAngleB->Enabled = false;
			 }
		 }///end of chkAngleB_CheckedChanged
private: System::Void chkAngleC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //if checked, the textbox will be enabled
			 if (chkAngleC->Checked){
				 txtAngleC->Enabled = true;
			 }
			 if (!chkAngleC->Checked){
				 txtAngleC->Enabled = false;
			 }
		 }///end of chkAngleC_CheckedChanged
		 //Code Below occurs aftwer Solve button is pressed.
		 //Locks the other elements, and solves the triangle
private: System::Void btnSolve_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonPressSetup();
			 ///Right Triangle trig
			 if (rbtnSelectRight->Checked){
				//sees if two sides are known, and if so use pythagorean theorem
				if (isSideAInputted+isSideBInputted+isSideCInputted == 2){ // expression adds values of the bools, and proceeds if sum is 2
					if (isSideAInputted && isSideBInputted){//finding side C using A^2 + B^2 = C^2
						sideC = floor(sqrt(pow(sideA, 2) + pow(sideB, 2))*100+0.5)/100.0;
						isSideCInputted = true;
						lblSideCAns->Text = sideC.ToString();
					}
					else{
						if (!isSideAInputted){//finding side A
							sideA = floor(sqrt(pow(sideC, 2) - pow(sideB, 2))*100+0.5)/100.0;
							isSideAInputted = true;
							lblSideAAns->Text = sideA.ToString();
						}
						else{ // finding side B
							sideB = floor(sqrt(pow(sideC, 2) - pow(sideA, 2))*100+0.5)/100.0;
							isSideBInputted = true;
							lblSideBAns->Text = sideB.ToString();
						}
					}
				}
				//Angle C is known. If one of the other angles is known, find it by subtracting 90 from its complement
				if (isAngleAInputted || isAngleBInputted){
					if(!isAngleAInputted){
						angleA = 90 - angleB;
						isAngleAInputted = true;
						lblAngleAAns->Text = angleA.ToString();
					}
					if(!isAngleBInputted){
						angleB = 90 - angleA;
						isAngleBInputted = true;
						lblAngleBAns->Text = angleB.ToString();
					}
				}
				//if <A is known, but not |A, figures that out.
				if (isAngleAInputted && !isSideAInputted){
					if (isSideCInputted){ // use cos to find side A
						sideA = floor(sideC * cos(degToRad(angleA))*100+0.5)/100.0; // solves using cos(a), and rounds to two decimals
						lblSideAAns->Text = sideA.ToString();
						isSideAInputted = true;
					}
					if (isSideBInputted){ // use tan to find side A
						sideA = floor(sideB * tan(degToRad(angleA))*100+0.5)/100.0;
						lblSideAAns->Text = sideA.ToString();
						isSideAInputted = true;
					}
				}
				// <B is known, but not |B
				if (isAngleBInputted && !isSideBInputted){
					if (isSideCInputted){ // use sine to find side B
						sideB = floor(sideC * sin(degToRad(angleB))*100+0.5)/100.0; // solves using cos(a), and rounds to two decimals
						lblSideAAns->Text = sideB.ToString();
						isSideAInputted = true;
					}
					if (isSideAInputted){ // use tan to find side B
						sideB = floor(sideA * tan(degToRad(angleB))*100+0.5)/100.0;
						lblSideBAns->Text = sideB.ToString();
						isSideBInputted = true;
					}
				}
				if (isAngleCInputted && !isSideCInputted){ //<C is known, not |C
					//since <C is 90 deg, we need a side, and then either angle
					//code goes through side a, if not inputted then it goes through side b
					if (isSideAInputted){ 
						if (isAngleAInputted){ //use sin
							sideC = floor(sideA / sin(degToRad(angleA))*100+0.5)/100.0;
							lblSideCAns->Text = sideC.ToString();
							isSideCInputted = true;
						}
						if (isAngleBInputted){ //use sin
							sideC = floor(sideA / cos(degToRad(angleB))*100+0.5)/100.0;
							lblSideCAns->Text = sideC.ToString();
							isSideCInputted = true;
						}
					}
					if (isSideBInputted){ 
						if (isAngleAInputted){ //use sin
							sideC = floor(sideB / cos(degToRad(angleA))*100+0.5)/100.0;
							lblSideCAns->Text = sideC.ToString();
							isSideCInputted = true;
						}
						if (isAngleBInputted){ //use sin
							sideC = floor(sideB / sin(degToRad(angleB))*100+0.5)/100.0;
							lblSideCAns->Text = sideC.ToString();
							isSideCInputted = true;
						}
					}
				}
				if (!isAngleAInputted && !isAngleBInputted){
					//angle A
					angleA = floor(radToDeg(atan(sideA / sideB))*100+0.5)/100.0;
					lblAngleAAns->Text = angleA.ToString();
					isAngleAInputted = true;
					//angle B
					angleB = floor(radToDeg(atan(sideB / sideA))*100+0.5)/100.0;
					lblAngleBAns->Text = angleB.ToString();
					isAngleBInputted = true;
				}
			 }
			 pnlAllControls->Enabled = true;
		 } ///end of btnSolve_Click
private: System::Void pnlAllControls_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void grpDegreeRadian_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

