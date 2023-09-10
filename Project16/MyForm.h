#pragma once
#include "structPoint.h"
#include "SegementInPlane.h"
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
namespace Project16 {
	 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label42;
	protected:
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(96, 613);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(20, 13);
			this->label42->TabIndex = 218;
			this->label42->Text = L"Y3";
			// 
			// label41
			// 
			this->label41->Location = System::Drawing::Point(589, 249);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(102, 13);
			this->label41->TabIndex = 217;
			this->label41->Text = L"увел. в k раз";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(705, 249);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(13, 13);
			this->label39->TabIndex = 216;
			this->label39->Text = L"k";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(695, 265);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 20);
			this->textBox1->TabIndex = 215;
			this->textBox1->Text = L"2";
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(587, 265);
			this->textBox44->Multiline = true;
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(102, 20);
			this->textBox44->TabIndex = 214;
			// 
			// label38
			// 
			this->label38->Location = System::Drawing::Point(589, 197);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(73, 13);
			this->label38->TabIndex = 213;
			this->label38->Text = L"ОТР∩ПРЯМ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(693, 197);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 13);
			this->label37->TabIndex = 212;
			this->label37->Text = L"b";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(668, 197);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(13, 13);
			this->label36->TabIndex = 211;
			this->label36->Text = L"k";
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(695, 213);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(21, 20);
			this->textBox42->TabIndex = 210;
			this->textBox42->Text = L"2";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(589, 213);
			this->textBox41->Multiline = true;
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(73, 20);
			this->textBox41->TabIndex = 209;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(668, 213);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(21, 20);
			this->textBox40->TabIndex = 208;
			this->textBox40->Text = L"-1";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(601, 143);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(15, 17);
			this->label35->TabIndex = 207;
			this->label35->Text = L"λ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(662, 145);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(20, 13);
			this->label34->TabIndex = 206;
			this->label34->Text = L"Y3";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(631, 145);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(20, 13);
			this->label32->TabIndex = 205;
			this->label32->Text = L"X3";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(661, 161);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(21, 20);
			this->textBox39->TabIndex = 204;
			this->textBox39->Text = L"3";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(634, 161);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(21, 20);
			this->textBox38->TabIndex = 203;
			this->textBox38->Text = L"3";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(589, 161);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(39, 20);
			this->textBox37->TabIndex = 202;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(589, 109);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(102, 20);
			this->textBox36->TabIndex = 201;
			// 
			// label33
			// 
			this->label33->Location = System::Drawing::Point(589, 93);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(102, 13);
			this->label33->TabIndex = 200;
			this->label33->Text = L"∈ТОЧКА\? на прям";
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(461, 249);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(122, 36);
			this->button24->TabIndex = 199;
			this->button24->Text = L"тык!";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(461, 197);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(122, 36);
			this->button23->TabIndex = 198;
			this->button23->Text = L"тык!";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(698, 93);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(20, 13);
			this->label31->TabIndex = 197;
			this->label31->Text = L"X3";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(72, 629);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(21, 20);
			this->textBox34->TabIndex = 196;
			this->textBox34->Text = L"2";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(724, 109);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(21, 20);
			this->textBox33->TabIndex = 195;
			this->textBox33->Text = L"11";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(461, 93);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(122, 36);
			this->button13->TabIndex = 194;
			this->button13->Text = L"тык!";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(460, 145);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(122, 36);
			this->button12->TabIndex = 193;
			this->button12->Text = L"тык!";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(70, 613);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(20, 13);
			this->label30->TabIndex = 192;
			this->label30->Text = L"X3";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(724, 93);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(20, 13);
			this->label29->TabIndex = 191;
			this->label29->Text = L"Y3";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(96, 629);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(21, 20);
			this->textBox31->TabIndex = 190;
			this->textBox31->Text = L"2";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(696, 109);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(21, 20);
			this->textBox30->TabIndex = 189;
			this->textBox30->Text = L"11";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(204, 613);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(122, 36);
			this->button11->TabIndex = 188;
			this->button11->Text = L"тык!";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label28
			// 
			this->label28->Location = System::Drawing::Point(125, 613);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(73, 13);
			this->label28->TabIndex = 187;
			this->label28->Text = L"∈ТОЧКА\?";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(125, 629);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(73, 20);
			this->textBox29->TabIndex = 186;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(204, 561);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(122, 36);
			this->button10->TabIndex = 185;
			this->button10->Text = L"тык!";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label27
			// 
			this->label27->Location = System::Drawing::Point(93, 561);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(105, 13);
			this->label27->TabIndex = 184;
			this->label27->Text = L"∩OY";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(96, 577);
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(102, 20);
			this->textBox28->TabIndex = 183;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(204, 509);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(122, 36);
			this->button9->TabIndex = 182;
			this->button9->Text = L"тык!";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label26
			// 
			this->label26->Location = System::Drawing::Point(93, 509);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(105, 13);
			this->label26->TabIndex = 181;
			this->label26->Text = L"∩OX";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(96, 525);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(102, 20);
			this->textBox27->TabIndex = 180;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(97, 457);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(20, 13);
			this->label25->TabIndex = 179;
			this->label25->Text = L"Y4";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(70, 457);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(20, 13);
			this->label24->TabIndex = 178;
			this->label24->Text = L"Y3";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(44, 457);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(20, 13);
			this->label23->TabIndex = 177;
			this->label23->Text = L"X4";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(18, 457);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 13);
			this->label22->TabIndex = 176;
			this->label22->Text = L"X3";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(43, 473);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(21, 20);
			this->textBox26->TabIndex = 175;
			this->textBox26->Text = L"-5";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(96, 473);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(21, 20);
			this->textBox25->TabIndex = 174;
			this->textBox25->Text = L"5";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(69, 473);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(21, 20);
			this->textBox24->TabIndex = 173;
			this->textBox24->Text = L"1";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(17, 473);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(21, 20);
			this->textBox23->TabIndex = 172;
			this->textBox23->Text = L"-1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(97, 405);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(20, 13);
			this->label21->TabIndex = 171;
			this->label21->Text = L"Y4";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(70, 405);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 13);
			this->label20->TabIndex = 170;
			this->label20->Text = L"Y3";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(44, 405);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(20, 13);
			this->label19->TabIndex = 169;
			this->label19->Text = L"X4";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(18, 405);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 13);
			this->label18->TabIndex = 168;
			this->label18->Text = L"X3";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(96, 421);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(21, 20);
			this->textBox22->TabIndex = 167;
			this->textBox22->Text = L"6";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(69, 421);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(21, 20);
			this->textBox21->TabIndex = 166;
			this->textBox21->Text = L"2";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(43, 421);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(21, 20);
			this->textBox20->TabIndex = 165;
			this->textBox20->Text = L"5";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(17, 421);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(21, 20);
			this->textBox19->TabIndex = 164;
			this->textBox19->Text = L"1";
			// 
			// label17
			// 
			this->label17->Location = System::Drawing::Point(123, 457);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 13);
			this->label17->TabIndex = 163;
			this->label17->Text = L"ОТР.⟂ОТР.\?";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(204, 457);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(122, 36);
			this->button8->TabIndex = 162;
			this->button8->Text = L"тык!";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(123, 473);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(75, 20);
			this->textBox18->TabIndex = 161;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(204, 405);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(122, 36);
			this->button7->TabIndex = 160;
			this->button7->Text = L"тык!";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(120, 405);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 13);
			this->label16->TabIndex = 159;
			this->label16->Text = L"ОТР. | | ОТР.\?";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(204, 353);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(122, 36);
			this->button6->TabIndex = 158;
			this->button6->Text = L"тык!";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(93, 353);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(105, 13);
			this->label15->TabIndex = 157;
			this->label15->Text = L"| | OY";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(96, 369);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(102, 20);
			this->textBox17->TabIndex = 156;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(204, 301);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 36);
			this->button5->TabIndex = 155;
			this->button5->Text = L"тык!";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(97, 301);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 13);
			this->label14->TabIndex = 154;
			this->label14->Text = L"| | OX";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(96, 317);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(102, 20);
			this->textBox16->TabIndex = 153;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(204, 249);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 36);
			this->button4->TabIndex = 152;
			this->button4->Text = L"тык!";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(204, 197);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 36);
			this->button3->TabIndex = 151;
			this->button3->Text = L"тык!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(125, 249);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 150;
			this->label13->Text = L"РАВНЫ ЛИ";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(125, 265);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(73, 20);
			this->textBox15->TabIndex = 149;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(99, 249);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 13);
			this->label12->TabIndex = 148;
			this->label12->Text = L"Y4";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(72, 249);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 13);
			this->label11->TabIndex = 147;
			this->label11->Text = L"Y3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(44, 249);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 13);
			this->label10->TabIndex = 146;
			this->label10->Text = L"X4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 13);
			this->label9->TabIndex = 145;
			this->label9->Text = L"X3";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(98, 265);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(21, 20);
			this->textBox14->TabIndex = 144;
			this->textBox14->Text = L"6";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(71, 265);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(21, 20);
			this->textBox13->TabIndex = 143;
			this->textBox13->Text = L"2";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(44, 265);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(21, 20);
			this->textBox12->TabIndex = 142;
			this->textBox12->Text = L"6";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(17, 265);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(21, 20);
			this->textBox11->TabIndex = 141;
			this->textBox11->Text = L"2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(62, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 17);
			this->label8->TabIndex = 140;
			this->label8->Text = L"λ";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(97, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 13);
			this->label7->TabIndex = 139;
			this->label7->Text = L"ТОЧКА ДЕЛ";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(123, 421);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 20);
			this->textBox10->TabIndex = 138;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(204, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 36);
			this->button1->TabIndex = 137;
			this->button1->Text = L"тык!\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(98, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 13);
			this->label6->TabIndex = 136;
			this->label6->Text = L"ДЛИННА";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(97, 161);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(102, 20);
			this->textBox9->TabIndex = 135;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(96, 213);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(102, 20);
			this->textBox8->TabIndex = 134;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(205, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 36);
			this->button2->TabIndex = 133;
			this->button2->Text = L"тык!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(98, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 13);
			this->label5->TabIndex = 132;
			this->label5->Text = L"СЕРЕДИНА";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(97, 109);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(102, 20);
			this->textBox7->TabIndex = 131;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(179, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 130;
			this->label4->Text = L"Y2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(152, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 129;
			this->label3->Text = L"Y1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(124, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 128;
			this->label2->Text = L"X2";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(96, 57);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(21, 20);
			this->textBox6->TabIndex = 127;
			this->textBox6->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 126;
			this->label1->Text = L"X1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(177, 57);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(21, 20);
			this->textBox5->TabIndex = 125;
			this->textBox5->Text = L"5";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(150, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(21, 20);
			this->textBox4->TabIndex = 124;
			this->textBox4->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(123, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(21, 20);
			this->textBox3->TabIndex = 123;
			this->textBox3->Text = L"5";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(51, 213);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 20);
			this->textBox2->TabIndex = 122;
			this->textBox2->Text = L"1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 690);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: double StrToDouble(System::Windows::Forms::TextBox^ textBox) {
		String^ str = textBox->Text;
		double result = 0.0;
		if (Double::TryParse(str, result)) {
			return result;
		}
		throw gcnew System::FormatException("Некорректный формат числа");
	}

	public: String^ DoubleToStr(double value) {
		String^ str = System::Convert::ToString(value);
		return str;
	}

	public: String^ BoolToStr(bool value) {
		String^ str = System::Convert::ToString(value);
		return str;
	}

	public: void UpdateTextBox(TextBox^ textBox, String^ str) {
		textBox->Text = str;
	}


	public: SegmentInPlane createSegment() {
		SegmentInPlane newClass = this->createSemiSegment(textBox6, textBox3, textBox4, textBox5);
		return newClass;
	}

	public: SegmentInPlane createSemiSegment(TextBox^ textBox1, TextBox^ textBox2, TextBox^ textBox3, TextBox^ textBox4) {
		const double x1 = this->StrToDouble(textBox1);
		const double x2 = this->StrToDouble(textBox2);
		const double y1 = this->StrToDouble(textBox3);
		const double y2 = this->StrToDouble(textBox4);
		SegmentInPlane newClass = SegmentInPlane(x1, x2, y1, y2);
		return newClass;
	}

	public:String^ PointToStr(PointStruct point){
		String^ str = "(" + point.x.ToString("N2") +"  ,  "+ point.y.ToString("N2") + ")";
		return str;
	}

	public: PointStruct createPoint(TextBox^ textBox1, TextBox^ textBox2) {
		const double x1 = this->StrToDouble(textBox1);
		const double y1 = this->StrToDouble(textBox2);
		PointStruct newPoint = PointStruct(x1, y1);
		return newPoint;
	}





	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		double len = newClass.getLen();
		String^ str = DoubleToStr(len);
		UpdateTextBox(this->textBox7, str);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		PointStruct middlePoint = newClass.middleSegment();
		String^ str = this->PointToStr(middlePoint);
		UpdateTextBox(this->textBox9, str);

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		const double lambda = this->StrToDouble(textBox2);
		SegmentInPlane newClass = createSegment();
		PointStruct point = newClass.pointDelSegment(lambda);
		String^ str = this->PointToStr(point);
		UpdateTextBox(this->textBox8, str);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isEqual(createSemiSegment(textBox11, textBox12, textBox13, textBox14));
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox15, str);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isIntersectsOx();
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox16, str);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isIntersectsOy();
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox17, str);
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isParallel(createSemiSegment(textBox19, textBox20, textBox21, textBox22));
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox10, str);
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isNormal(createSemiSegment(textBox23, textBox26, textBox24, textBox25));
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox18, str);
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isIntersectsOx();
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox27, str);
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isIntersectsOy();
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox28, str);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isIncludedPoint(createPoint(textBox34, textBox31));
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox29, str);

	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isIncludedPointInLine(createPoint(textBox30, textBox33));
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox36, str);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		double lambda = newClass.findLambda(createPoint(textBox38, textBox39));
		String^ str = this->DoubleToStr(lambda);
		UpdateTextBox(this->textBox37, str);
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		bool isCheck = newClass.isIntersects(StrToDouble(textBox40), StrToDouble(textBox42));
		String^ str = this->BoolToStr(isCheck);
		UpdateTextBox(this->textBox41, str);
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		SegmentInPlane newClass = createSegment();
		PointStruct point = newClass.extendSegment(StrToDouble(textBox1));
		String^ str = this->PointToStr(point);
		UpdateTextBox(this->textBox44, str);
	}


};
}
