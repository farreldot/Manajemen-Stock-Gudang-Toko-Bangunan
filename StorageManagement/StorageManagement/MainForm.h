#pragma once
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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			barangArray = gcnew array<String^>(100); // Maksimal 100 barang
			stokArray = gcnew array<int>(100);
			itemCount = 0;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::TextBox^ textBoxBarang;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericBarangBaru;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ MasukanBarang;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericTambahBarang;
	private: System::Windows::Forms::Button^ TambahBarang;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::NumericUpDown^ numericKurangiBarang;
	private: System::Windows::Forms::Button^ KurangiBarang;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ HapusBarang;

	private: array<String^>^ barangArray;
	private: array<int>^ stokArray;
	private: int itemCount;



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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBoxBarang = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericBarangBaru = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->MasukanBarang = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericTambahBarang = (gcnew System::Windows::Forms::NumericUpDown());
			this->TambahBarang = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->numericKurangiBarang = (gcnew System::Windows::Forms::NumericUpDown());
			this->KurangiBarang = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->HapusBarang = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericBarangBaru))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericTambahBarang))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericKurangiBarang))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::SlateGray;
			this->pictureBox1->Location = System::Drawing::Point(-15, -53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 722);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(34, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome!";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SlateGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(42, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Stock Barang Tersedia";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SlateGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(42, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Tambah Barang Baru";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SlateGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(42, 266);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Tambah Stock Barang";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SlateGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(42, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(219, 46);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Kurangi Stock Barang";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SlateGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(42, 398);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(219, 46);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Hapus Barang";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SlateGray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(42, 542);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 47);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Keluar";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 38;
			this->listBox1->Location = System::Drawing::Point(349, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(844, 422);
			this->listBox1->TabIndex = 9;
			// 
			// textBoxBarang
			// 
			this->textBoxBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBarang->Location = System::Drawing::Point(349, 513);
			this->textBoxBarang->Name = L"textBoxBarang";
			this->textBoxBarang->Size = System::Drawing::Size(279, 34);
			this->textBoxBarang->TabIndex = 11;
			this->textBoxBarang->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(344, 456);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 28);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Masukan Nama Barang";
			this->label2->Visible = false;
			// 
			// numericBarangBaru
			// 
			this->numericBarangBaru->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericBarangBaru->Location = System::Drawing::Point(763, 513);
			this->numericBarangBaru->Name = L"numericBarangBaru";
			this->numericBarangBaru->Size = System::Drawing::Size(210, 34);
			this->numericBarangBaru->TabIndex = 13;
			this->numericBarangBaru->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(758, 456);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 28);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Masukan Jumlah Barang";
			this->label3->Visible = false;
			// 
			// MasukanBarang
			// 
			this->MasukanBarang->BackColor = System::Drawing::Color::DarkSlateGray;
			this->MasukanBarang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MasukanBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MasukanBarang->ForeColor = System::Drawing::SystemColors::Control;
			this->MasukanBarang->Location = System::Drawing::Point(349, 585);
			this->MasukanBarang->Name = L"MasukanBarang";
			this->MasukanBarang->Size = System::Drawing::Size(185, 46);
			this->MasukanBarang->TabIndex = 15;
			this->MasukanBarang->Text = L"Tambah Barang";
			this->MasukanBarang->UseVisualStyleBackColor = false;
			this->MasukanBarang->Visible = false;
			this->MasukanBarang->Click += gcnew System::EventHandler(this, &MainForm::MasukanBarang_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(344, 456);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(543, 28);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Pilih barang dan masukan jumlah yang ingin ditambahkan";
			this->label4->Visible = false;
			// 
			// numericTambahBarang
			// 
			this->numericTambahBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericTambahBarang->Location = System::Drawing::Point(349, 513);
			this->numericTambahBarang->Name = L"numericTambahBarang";
			this->numericTambahBarang->Size = System::Drawing::Size(120, 34);
			this->numericTambahBarang->TabIndex = 18;
			this->numericTambahBarang->Visible = false;
			// 
			// TambahBarang
			// 
			this->TambahBarang->BackColor = System::Drawing::Color::DarkSlateGray;
			this->TambahBarang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TambahBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TambahBarang->ForeColor = System::Drawing::SystemColors::Control;
			this->TambahBarang->Location = System::Drawing::Point(349, 585);
			this->TambahBarang->Name = L"TambahBarang";
			this->TambahBarang->Size = System::Drawing::Size(233, 46);
			this->TambahBarang->TabIndex = 19;
			this->TambahBarang->Text = L"Tambah Stock Barang";
			this->TambahBarang->UseVisualStyleBackColor = false;
			this->TambahBarang->Visible = false;
			this->TambahBarang->Click += gcnew System::EventHandler(this, &MainForm::TambahBarang_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(344, 456);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(510, 28);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Pilih barang dan masukan jumlah yang ingin dikurangi";
			this->label5->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox3->Location = System::Drawing::Point(313, 445);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(969, 202);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// numericKurangiBarang
			// 
			this->numericKurangiBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericKurangiBarang->Location = System::Drawing::Point(349, 513);
			this->numericKurangiBarang->Name = L"numericKurangiBarang";
			this->numericKurangiBarang->Size = System::Drawing::Size(120, 34);
			this->numericKurangiBarang->TabIndex = 21;
			this->numericKurangiBarang->Visible = false;
			// 
			// KurangiBarang
			// 
			this->KurangiBarang->BackColor = System::Drawing::Color::DarkSlateGray;
			this->KurangiBarang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->KurangiBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KurangiBarang->ForeColor = System::Drawing::SystemColors::Control;
			this->KurangiBarang->Location = System::Drawing::Point(349, 585);
			this->KurangiBarang->Name = L"KurangiBarang";
			this->KurangiBarang->Size = System::Drawing::Size(238, 46);
			this->KurangiBarang->TabIndex = 22;
			this->KurangiBarang->Text = L"Kurangi Stock Barang";
			this->KurangiBarang->UseVisualStyleBackColor = false;
			this->KurangiBarang->Visible = false;
			this->KurangiBarang->Click += gcnew System::EventHandler(this, &MainForm::KurangiBarang_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(344, 456);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(399, 28);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Pilih barang yang ingin dihapus dari daftar";
			this->label6->Visible = false;
			// 
			// HapusBarang
			// 
			this->HapusBarang->BackColor = System::Drawing::Color::DarkSlateGray;
			this->HapusBarang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HapusBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HapusBarang->ForeColor = System::Drawing::SystemColors::Control;
			this->HapusBarang->Location = System::Drawing::Point(349, 585);
			this->HapusBarang->Name = L"HapusBarang";
			this->HapusBarang->Size = System::Drawing::Size(177, 46);
			this->HapusBarang->TabIndex = 24;
			this->HapusBarang->Text = L"Hapus Barang";
			this->HapusBarang->UseVisualStyleBackColor = false;
			this->HapusBarang->Visible = false;
			this->HapusBarang->Click += gcnew System::EventHandler(this, &MainForm::HapusBarang_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1241, 643);
			this->Controls->Add(this->HapusBarang);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->KurangiBarang);
			this->Controls->Add(this->numericKurangiBarang);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TambahBarang);
			this->Controls->Add(this->numericTambahBarang);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->MasukanBarang);
			this->Controls->Add(this->textBoxBarang);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericBarangBaru);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericBarangBaru))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericTambahBarang))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericKurangiBarang))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		for (int i = 0; i < itemCount; i++) {
			listBox1->Items->Add(barangArray[i] + " - Stok: " + stokArray[i]);
		}
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button4->Visible = true;
	this->button5->Visible = true;
	this->button6->Visible = true;
	this->label1->Visible = true;
	this->pictureBox1->Visible = true;
	this->label2->Visible = false;
	this->label3->Visible = false;
	this->textBoxBarang->Visible = false;
	this->numericBarangBaru->Visible = false;
	this->MasukanBarang->Visible = false;
	this->label4->Visible = false;
	this->numericTambahBarang->Visible = false;
	this->TambahBarang->Visible = false;
	this->label5->Visible = false;
	this->numericKurangiBarang->Visible = false;
	this->KurangiBarang->Visible = false;
	this->label6->Visible = false;
	this->HapusBarang->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button4->Visible = true;
	this->button5->Visible = true;
	this->button6->Visible = true;
	this->label1->Visible = true;
	this->pictureBox1->Visible = true;
	this->textBoxBarang->Visible = true;
	this->label2->Visible = true;
	this->label3->Visible = true;
	this->numericBarangBaru->Visible = true;
	this->MasukanBarang->Visible = true;
	this->label4->Visible = false;
	this->numericTambahBarang->Visible = false;
	this->TambahBarang->Visible = false;
	this->label5->Visible = false;
	this->numericKurangiBarang->Visible = false;
	this->KurangiBarang->Visible = false;
	this->label6->Visible = false;
	this->HapusBarang->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button4->Visible = true;
	this->button5->Visible = true;
	this->button6->Visible = true;
	this->label1->Visible = true;
	this->pictureBox1->Visible = true;
	this->label4->Visible = true;
	this->numericTambahBarang->Visible = true;
	this->TambahBarang->Visible = true;
	this->label2->Visible = false;
	this->label3->Visible = false;
	this->textBoxBarang->Visible = false;
	this->numericBarangBaru->Visible = false;
	this->MasukanBarang->Visible = false;
	this->label5->Visible = false;
	this->numericKurangiBarang->Visible = false;
	this->KurangiBarang->Visible = false;
	this->label6->Visible = false;
	this->HapusBarang->Visible = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button4->Visible = true;
	this->button5->Visible = true;
	this->button6->Visible = true;
	this->label1->Visible = true;
	this->pictureBox1->Visible = true;
	this->label5->Visible = true;
	this->numericKurangiBarang->Visible = true;
	this->KurangiBarang->Visible = true;
	this->label2->Visible = false;
	this->label3->Visible = false;
	this->textBoxBarang->Visible = false;
	this->numericBarangBaru->Visible = false;
	this->MasukanBarang->Visible = false;
	this->label4->Visible = false;
	this->numericTambahBarang->Visible = false;
	this->TambahBarang->Visible = false;
	this->label6->Visible = false;
	this->HapusBarang->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button4->Visible = true;
	this->button5->Visible = true;
	this->button6->Visible = true;
	this->label1->Visible = true;
	this->pictureBox1->Visible = true;
	this->label6->Visible = true;
	this->HapusBarang->Visible = true;
	this->label2->Visible = false;
	this->label3->Visible = false;
	this->textBoxBarang->Visible = false;
	this->numericBarangBaru->Visible = false;
	this->MasukanBarang->Visible = false;
	this->label4->Visible = false;
	this->numericTambahBarang->Visible = false;
	this->TambahBarang->Visible = false;
	this->label5->Visible = false;
	this->numericKurangiBarang->Visible = false;
	this->KurangiBarang->Visible = false;
}
private: System::Void MasukanBarang_Click(System::Object^ sender, System::EventArgs^ e) {
	if (itemCount < 100) {
		barangArray[itemCount] = textBoxBarang->Text;
		stokArray[itemCount] = static_cast<int>(numericBarangBaru->Value);
		itemCount++;
		textBoxBarang->Clear();
		numericBarangBaru->Value = 0;
		MessageBox::Show("Barang berhasil ditambahkan!");
	}
	else {
		MessageBox::Show("Jumlah barang sudah mencapai batas maksimum!");
	}
	listBox1->Items->Clear();
	for (int i = 0; i < itemCount; i++) {
		listBox1->Items->Add(barangArray[i] + " - Stok: " + stokArray[i]);
	}
}
private: System::Void TambahBarang_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = listBox1->SelectedIndex;
	if (index >= 0 && index < itemCount) {
		stokArray[index] += static_cast<int>(numericTambahBarang->Value);
		MessageBox::Show("Stok berhasil ditambahkan!");
	}
	else {
		MessageBox::Show("Silakan pilih barang yang ingin ditambah stoknya.");
	}
	listBox1->Items->Clear();
	for (int i = 0; i < itemCount; i++) {
		listBox1->Items->Add(barangArray[i] + " - Stok: " + stokArray[i]);
	}
}
private: System::Void KurangiBarang_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = listBox1->SelectedIndex;
	if (index >= 0 && index < itemCount) {
		int jumlahKurang = static_cast<int>(numericKurangiBarang->Value);
		if (stokArray[index] >= jumlahKurang) {
			stokArray[index] -= jumlahKurang;
			MessageBox::Show("Stok berhasil dikurangi!");
		}
		else {
			MessageBox::Show("Stok tidak cukup untuk dikurangi!");
		}
	}
	else {
		MessageBox::Show("Silakan pilih barang yang ingin dikurangi stoknya.");
	}
	listBox1->Items->Clear();
	for (int i = 0; i < itemCount; i++) {
		listBox1->Items->Add(barangArray[i] + " - Stok: " + stokArray[i]);
	}
}
private: System::Void HapusBarang_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = listBox1->SelectedIndex;
	if (index >= 0 && index < itemCount) {
		for (int i = index; i < itemCount - 1; i++) {
			barangArray[i] = barangArray[i + 1];
			stokArray[i] = stokArray[i + 1];
		}
		itemCount--;
		MessageBox::Show("Barang berhasil dihapus!");
	}
	else {
		MessageBox::Show("Silakan pilih barang yang ingin dihapus.");
	}
	listBox1->Items->Clear();
	for (int i = 0; i < itemCount; i++) {
		listBox1->Items->Add(barangArray[i] + " - Stok: " + stokArray[i]);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numericUpDown1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

};
}
