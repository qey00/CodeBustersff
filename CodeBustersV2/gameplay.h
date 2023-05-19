#pragma once

namespace CodeBustersV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gameplay
	/// </summary>
	public ref class gameplay : public System::Windows::Forms::Form
	{
	public:
		gameplay(void)
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
		~gameplay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ques;
	private: System::Windows::Forms::PictureBox^ opt1;
	private: System::Windows::Forms::PictureBox^ opt2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gameplay::typeid));
			this->ques = (gcnew System::Windows::Forms::PictureBox());
			this->opt1 = (gcnew System::Windows::Forms::PictureBox());
			this->opt2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ques))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt2))->BeginInit();
			this->SuspendLayout();
			// 
			// ques
			// 
			this->ques->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->ques, L"ques");
			this->ques->Name = L"ques";
			this->ques->TabStop = false;
			// 
			// opt1
			// 
			this->opt1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->opt1, L"opt1");
			this->opt1->Name = L"opt1";
			this->opt1->TabStop = false;
			// 
			// opt2
			// 
			this->opt2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->opt2, L"opt2");
			this->opt2->Name = L"opt2";
			this->opt2->TabStop = false;
			// 
			// gameplay
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->opt2);
			this->Controls->Add(this->opt1);
			this->Controls->Add(this->ques);
			this->Name = L"gameplay";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ques))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
