#pragma once
#include "MainForm.h"
#include <fstream>
#include <msclr/marshal_cppstd.h>
namespace StorageManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Username;
	private: System::Windows::Forms::TextBox^ Password;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(405, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(405, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Silahkan Masukan Username dan Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(405, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(411, 266);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// Username
			// 
			this->Username->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->ForeColor = System::Drawing::SystemColors::Control;
			this->Username->Location = System::Drawing::Point(556, 208);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(254, 29);
			this->Username->TabIndex = 3;
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->ForeColor = System::Drawing::SystemColors::Control;
			this->Password->Location = System::Drawing::Point(556, 266);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(254, 29);
			this->Password->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(520, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Buat Akun";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1128, 581);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 50);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Keluar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox1->Location = System::Drawing::Point(334, -13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(549, 710);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 643);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ambil input dari textbox
	System::String^ inputUsername = Username->Text;
	System::String^ inputPassword = Password->Text;

	// Validasi input
	if (inputUsername->Trim()->Length == 0 || inputPassword->Trim()->Length == 0) {
		MessageBox::Show("Username and Password cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Konversi dari System::String^ ke std::string
	std::string username = msclr::interop::marshal_as<std::string>(inputUsername);
	std::string password = msclr::interop::marshal_as<std::string>(inputPassword);

	// Simpan ke file
	std::ofstream file("akun.txt", std::ios::app); // Membuka file dalam mode append
	if (!file.is_open()) {
		MessageBox::Show("Failed to open account file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Tambahkan username dan password ke file
	file << username << "," << password << "\n";
	file.close();

	// Beri notifikasi bahwa registrasi berhasil
	MessageBox::Show("Registration successful!", "Register", MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Bersihkan textbox setelah registrasi
	Username->Clear();
	Password->Clear();

	// Pindah ke halaman MenuUtama
	this->Hide(); // Sembunyikan form saat ini
	MainForm^ menuForm = gcnew MainForm(); // Buat instance dari MenuUtama
	menuForm->ShowDialog(); // Tampilkan form MenuUtama sebagai dialog
	Application::Exit(); // Tutup aplikasi setelah MenuUtama ditutup
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
}
	};
}
