#pragma once
#include <cmath>


#define PI 3.14159265 

namespace SquareTriangle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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


	private: System::Windows::Forms::TextBox^ side_a;
	private: System::Windows::Forms::TextBox^ side_b;





	private: System::Windows::Forms::TextBox^ angle_A;


	private: System::Windows::Forms::Label^ square;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Timer^ timer2;







	private: System::ComponentModel::IContainer^ components;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->side_a = (gcnew System::Windows::Forms::TextBox());
			this->side_b = (gcnew System::Windows::Forms::TextBox());
			this->angle_A = (gcnew System::Windows::Forms::TextBox());
			this->square = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// side_a
			// 
			this->side_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->side_a->Location = System::Drawing::Point(8, 95);
			this->side_a->Margin = System::Windows::Forms::Padding(2);
			this->side_a->Name = L"side_a";
			this->side_a->Size = System::Drawing::Size(190, 31);
			this->side_a->TabIndex = 2;
			this->side_a->TextChanged += gcnew System::EventHandler(this, &MyForm::side_a_TextChanged);
			this->side_a->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::side_a_KeyPress);
			// 
			// side_b
			// 
			this->side_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->side_b->Location = System::Drawing::Point(8, 155);
			this->side_b->Margin = System::Windows::Forms::Padding(2);
			this->side_b->Name = L"side_b";
			this->side_b->Size = System::Drawing::Size(190, 31);
			this->side_b->TabIndex = 3;
			this->side_b->TextChanged += gcnew System::EventHandler(this, &MyForm::side_a_TextChanged);
			this->side_b->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::side_a_KeyPress);
			// 
			// angle_A
			// 
			this->angle_A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->angle_A->Location = System::Drawing::Point(8, 215);
			this->angle_A->Margin = System::Windows::Forms::Padding(2);
			this->angle_A->Name = L"angle_A";
			this->angle_A->Size = System::Drawing::Size(188, 31);
			this->angle_A->TabIndex = 8;
			this->angle_A->TextChanged += gcnew System::EventHandler(this, &MyForm::side_a_TextChanged);
			this->angle_A->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::side_a_KeyPress);
			// 
			// square
			// 
			this->square->BackColor = System::Drawing::Color::White;
			this->square->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->square->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->square->Location = System::Drawing::Point(352, 341);
			this->square->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->square->Name = L"square";
			this->square->Size = System::Drawing::Size(130, 40);
			this->square->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(273, 274);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 45);
			this->button1->TabIndex = 11;
			this->button1->Text = L"РАССЧИТАТЬ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(273, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(209, 228);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(4, 342);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(324, 39);
			this->label4->TabIndex = 13;
			this->label4->Text = L"ПЛОЩАДЬ(см^2):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(5, 195);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 18);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Введите угол Y(рад):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 75);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 18);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Введите сторону a(см):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 135);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 18);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Введите сторону b(см):";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 58);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Калькулятор площади треугольника";
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(8, 273);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(96, 20);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->Text = L"В градусах";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(8, 299);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(99, 20);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"В радианах";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// timer2
			// 
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1000, 450);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->square);
			this->Controls->Add(this->angle_A);
			this->Controls->Add(this->side_b);
			this->Controls->Add(this->side_a);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void side_a_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if ((side_a->Text->Length == 0) || (side_b->Text->Length == 0) || (angle_A->Text->Length == 0)) 
		{
			button1->Enabled = false;
		}
		else 
		{
			button1->Enabled = true;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		timer1->Start();

		if ((side_a->Text->Length == 0) || (side_b->Text->Length == 0) || (angle_A->Text->Length == 0)) 
		{
			MessageBox::Show("ОШИБКА. Вы не ввели значений. Введите значения!");
			return;
		}
		double a, b, A;
		if (Double::TryParse(side_a->Text, a) && (side_a->Text[0] != ','))
		{
			a = Convert::ToDouble(side_a->Text);
		}
		else
		{
			MessageBox::Show("Вы ввели неверное значение стороны a. Значение не может начинаться с символа ','", "ОШИБКА");
			return;
		}
		if (Double::TryParse(side_b->Text, b) && (side_b->Text[0] != ','))
		{
			b = Convert::ToDouble(side_b->Text);
		}
		else
		{
			MessageBox::Show("Вы ввели неверное значение стороны b. Значение не может начинаться с символа ','", "ОШИБКА");
			return;
		}
		if (Double::TryParse(angle_A->Text, A) && (angle_A->Text[0] != ','))
		{
			A = Convert::ToDouble(angle_A->Text);
		}
		else
		{
			MessageBox::Show("Вы ввели неверное значение угла. Значение не может начинаться с символа ','", "ОШИБКА");
			return;
		}


		

		if (radioButton1->Checked == true)
		{
			if ((A <= 0) || (180 <= A)) 
			{
				MessageBox::Show("ОШИБКА. Вы ввели неверное значение угла Y.  Угол должен быть: 0 < Y < 180 градусов.");
				return;
			}
			else 
			{
				double s = 0.5 * a * b * sin(A * PI / 180);  //Расчет площади 
				square->Text = Convert::ToString(s); //Вывод результата
			}
		}
		else
		{
			if ((A <= 0) || (PI <= A))
			{
				MessageBox::Show("ОШИБКА. Вы ввели неверное значение угла Y.  Угол должен быть: 0 < Y < 3,14 радиан.");
				return;
			}
			else
			{
				double s = 0.5 * a * b * sin(A);  //Расчет площади 
				square->Text = Convert::ToString(s); //Вывод результата
			}
		}
	}
	private: System::Void side_a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{  //чтобы можно было вводить только цифры
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) 
		{
			return;
		}
		if (e->KeyChar == '.') 
		{ // Заменяем точку на запятую
			e->KeyChar = ',';
		}
		if (e->KeyChar == ',') 
		{ // Обрабатываем введенную запятую
			if (side_a->Text->IndexOf('.') != -1) 
			{
				e->Handled = true;
			}
			return;
		}
		if (Char::IsControl(e->KeyChar)) 
		{
			if (e->KeyChar == (char)Keys::Enter)
				button1->Focus();
			// Обрабатываем нажатие клавши Enter, Backspace, Delete
			return;
		}
		e->Handled = true;

	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		label5->Text = L"Введите угол Y(град):";
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		label5->Text = L"Введите угол Y(рад):";
	}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
		   int count = 0;
		   int a = 273;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		
		while (count < 200)
		{
			a += 2;
			pictureBox1->Location = System::Drawing::Point(a, 15);
			count++;
		}
		timer1->Stop();
		timer2->Start();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		while (count > 0)
		{
			a -= 2;
			pictureBox1->Location = System::Drawing::Point(a, 15);
			count--;
		}
		timer2->Stop();
		timer1->Start();
	}
};
}