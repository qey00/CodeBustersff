#pragma once

#include "howtoplay.h"



namespace CodeBustersV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for startingWindow
	/// </summary>
	public ref class startingWindow : public System::Windows::Forms::Form
	{
	public:
		startingWindow(void)
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
		~startingWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ start;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(startingWindow::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->start = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->start))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-7, -61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 450);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			//this->pictureBox1->Click += gcnew System::EventHandler(this, &startingWindow::pictureBox1_Click);
			// 
			// start
			// 
			this->start->BackColor = System::Drawing::Color::Transparent;
			this->start->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"start.Image")));
			this->start->Location = System::Drawing::Point(244, 292);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(285, 117);
			this->start->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->start->TabIndex = 1;
			this->start->TabStop = false;
			this->start->Click += gcnew System::EventHandler(this, &startingWindow::start_Click);
			// 
			// startingWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 411);
			this->Controls->Add(this->start);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"startingWindow";
			this->Text = L"startingWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->start))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//elemets codes functions

	//start button
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
		//link to another file
		howtoplay^ sif = gcnew howtoplay();
		sif->Show();
		Hide();	
	}
	};
}
