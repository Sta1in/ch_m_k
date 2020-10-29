#pragma once
#include <cstdlib>
#include <math.h> //для вычислений
#include <iostream>
#include <locale.h>

namespace Lr11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //Для работы с файлами

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выбор файла с текстом";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(327, 397);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Шифровать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(679, 397);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(459, 397);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Дешифровать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(679, 426);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(175, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Сохранить результат в файл";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(30, 70);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(250, 300);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(318, 70);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(250, 300);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(80, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 24);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Исходный текст:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(332, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Результат шифрования:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(66, 397);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(175, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Выбор файла с ключом";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(604, 70);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(250, 300);
			this->richTextBox3->TabIndex = 10;
			this->richTextBox3->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(604, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Результат дешифрования:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Шифрование и дешифрование";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		String^ key;
		String^ ishodniy;
		String^ shifrovaniytext;
		String^ vspom;
		int leng1;
		int leng2;
		int a, b, z;
		unsigned int flag_r = 0;
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//Сохранение результата в файл
	StreamWriter^ f = gcnew StreamWriter("D:\\ГУАП\\Магистратура\\Методология и технология проектирования ИС\\Lr11\\Text.txt", true);
	f->WriteLine(""); //пустой абзац
	f->WriteLine("Исходный текст:");
	f->WriteLine(richTextBox1->Text); //Запись исходного текста
	f->WriteLine("Результат шифрования:");
	f->WriteLine(richTextBox2->Text); //Запись результата шифрования
	f->WriteLine("Результат дешифрования:");
	f->WriteLine(richTextBox3->Text); //Запись результата дешифрования
	f->Close();
	MessageBox::Show(this, "Файл успешно сохранен", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	// Очистка полей после сохранения всех результатов
	richTextBox1->Clear();
	richTextBox2->Clear();
	richTextBox3->Clear();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Выбор файла с исходным текстом
	String^ FileName = ""; //Создаем переменную для хранения пути к файлу
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) { //Открываем диалоговое окно, если пользователь нажал "ОК" то...
		FileName = openFileDialog1->FileName,System::Text::Encoding::GetEncoding(1251); // Записываем путь к выбранному файлу
	}
	//Конструкция для предотвращения ошибок
	try
	{
		StreamReader^ file = File::OpenText(FileName); //Открытие файла
		richTextBox1->Text = file->ReadToEnd();//Записываем содержимое файла в Text Box
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); //Выдача сообщения об ошибке
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Очистка полей от записей
	richTextBox1->Clear();
	richTextBox2->Clear();
	richTextBox3->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Шифрование
	ishodniy = Convert::ToString(richTextBox1->Text); //Чтение исходного текста
	leng1 = key->Length; //запись длины словаря
	leng2 = ishodniy->Length; //запись длина исходного текста
	int* vyh = new int[leng2];
	//массив выходных чисел шифртекста
	int b = round(leng1 / 2);
	int a = 0 + rand() % b; //сгенерированное случайное число
	int z = 0;
//	ЗАПОМИНАЕТ ПОЗИЦИЮ ПОСЛЕДНЕГО НАЙДЕННОГО СИМВОЛА
	for (int i = 0; i < leng2; i++) //перебор текста
	{
		flag_r = 0;
		for (int j = 0; j < leng1; j++) //перебор словаря
		{
			//с позиции случайного числа
			if ((j + a + z) < leng1)
			{
				if (ishodniy[i] == key[j + a + z])
					//нашли совпадение
				{
					flag_r = 1;
					//символ успешно зашифрован
					vyh[i] = j + a + z;
					//текущая позиция курсора
					richTextBox2->Text += Convert::ToString(vyh[i]);
					//сразу выписываем число шифра
					richTextBox2->Text += " ";
					z = z + j + 1;
					if ((a + z) >= leng1)
						z = z - leng1;
					break; //символ зашифрован, выходим к следующей букве исходного текста
				}
			}
			else
			{
				if (ishodniy[i] == key[j - leng1 + a + z]) //дошли до конца, идем с нуля до а
				{
					flag_r = 1; //символ успешно зашифрован
					vyh[i] = j - leng1 + a + z;
					richTextBox2->Text += Convert::ToString(vyh[i]);
					richTextBox2->Text += " ";
					z = z + j + 1;
					if ((a + z) >= leng1)
						z = z - leng1;
					break;
				}
			}
		}
	}
	delete[] vyh;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//Дешифрование
	//richTextBox1->Clear();
	shifrovaniytext = Convert::ToString(richTextBox2->Text);
	leng1 = key->Length;
	leng2 = shifrovaniytext->Length;
	vspom = "";
	if (shifrovaniytext[leng2 - 1] != ' ') //в конце нет пробела
	{
		richTextBox3->Text += Convert::ToString(" "); //ставим пробел
		shifrovaniytext = Convert::ToString(richTextBox3->Text); //записываем обратно
		leng2 = shifrovaniytext->Length; //пересчитываем длину
	}
	//шифртекст в поле воспринимается как строка из-за пробелов,
	//будем искать пробелы как ограничители и делить строку на подтстроки без пробелов
	//которые потом конвертируем в целочисленное
	int z = 0;
	for (int i = 0; i < leng2; i++) //по длине шифр текста в символах
	{
		if (shifrovaniytext[i] != ' ')
		{
			vspom += shifrovaniytext[i]; //маленькая строка с числом
		}
		else
		{
			z = Convert::ToInt32(vspom);//делаем целое число, раз дошли до пробела
			richTextBox3->Text += Convert::ToString(key[z]); //выписываем символ словаря с указанным номером
			vspom = ""; //обнулили строку
		}
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//Открытия файла с ключом
	String^ FileName = ""; //Создаем переменную для хранения пути к файлу
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) { //Открываем диалоговое окно, если пользователь нажал "ОК" то...
		FileName = openFileDialog1->FileName, System::Text::Encoding::GetEncoding(1251); // Записываем путь к выбранному файлу
	}
	//Конструкция для предотвращения ошибок
	try
	{
		StreamReader^ sr = File::OpenText(FileName); //Открытие файла
	//	richTextBox2->Text = sr->ReadToEnd();//Записываем содержимое файла в Text Box
		key = Convert::ToString(sr->ReadToEnd());
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Файл с ключом не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);//Выдача сообщения об ошибке
	}
}
};
}
