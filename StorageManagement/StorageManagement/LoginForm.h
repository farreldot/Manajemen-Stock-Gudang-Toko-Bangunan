#pragma once
#include "MainForm.h"
#include "RegisterForm.h"
#include <fstream>
#include <string>

namespace StorageManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Username;
	private: System::Windows::Forms::TextBox^ Password;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(36, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selamat Datang!";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(38, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(567, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sistem Management Stock Barang Toko Bangunan";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(39, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(384, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Silahkan Masukan Username dan Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(39, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(39, 288);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 28);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Password";
			// 
			// Username
			// 
			this->Username->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->ForeColor = System::Drawing::SystemColors::Control;
			this->Username->Location = System::Drawing::Point(213, 218);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(210, 34);
			this->Username->TabIndex = 5;
			this->Username->TextChanged += gcnew System::EventHandler(this, &LoginForm::Username_TextChanged);
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->ForeColor = System::Drawing::SystemColors::Control;
			this->Password->Location = System::Drawing::Point(213, 288);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(210, 34);
			this->Password->TabIndex = 6;
			this->Password->UseSystemPasswordChar = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(39, 431);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(204, 28);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Belum memiliki Akun\?";
			this->label6->Click += gcnew System::EventHandler(this, &LoginForm::label6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(44, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 56);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(44, 544);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 42);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Keluar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(258, 431);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 32);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Buat Akun";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LoginForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox1->Location = System::Drawing::Point(-21, -89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(681, 698);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(644, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(611, 607);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1233, 601);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
//Fungsi Tombol Login
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Dictionary untuk menyimpan akun yang valid
	System::Collections::Generic::Dictionary<System::String^, System::String^>^ akunTerdaftar =
		gcnew System::Collections::Generic::Dictionary<System::String^, System::String^>();
	// Membaca akun dari file
	std::ifstream file("akun.txt");
	if (!file.is_open()) {
		MessageBox::Show("Failed to open account file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	std::string line;
	while (std::getline(file, line)) {
		size_t commaPos = line.find(',');
		if (commaPos != std::string::npos) {
			// Memisahkan username dan password
			std::string username = line.substr(0, commaPos);
			std::string password = line.substr(commaPos + 1);
			// Menambahkan akun ke dictionary
			akunTerdaftar->Add(gcnew System::String(username.c_str()), gcnew System::String(password.c_str()));
		}
	}
	file.close();

	// Ambil input dari textbox
	System::String^ inputUsername = Username->Text;
	System::String^ inputPassword = Password->Text;
	// Verifikasi akun
	if (akunTerdaftar->ContainsKey(inputUsername)) {
		if (akunTerdaftar[inputUsername] == inputPassword) {
			MessageBox::Show("Access Granted", "Sign in", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();
			MainForm obj;
			obj.ShowDialog();
			Application::Exit();
		}
		else {
			MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Username not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
//Fungsi Tombol Register
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RegisterForm obj;
	obj.ShowDialog();
	Application::Exit();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
