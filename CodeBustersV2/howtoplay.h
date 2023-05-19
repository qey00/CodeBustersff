#pragma once
#include "gameplay.h"

namespace CodeBustersV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for howtoplay
	/// </summary>
	public ref class howtoplay : public System::Windows::Forms::Form
	{
	public:
		howtoplay(void)
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
		~howtoplay()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ rdybtn;
	private: System::Windows::Forms::Label^ mechlbl;
	private: System::Windows::Forms::TextBox^ name;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(howtoplay::typeid));
			this->rdybtn = (gcnew System::Windows::Forms::Label());
			this->mechlbl = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// rdybtn
			// 
			this->rdybtn->AutoSize = true;
			this->rdybtn->BackColor = System::Drawing::Color::Transparent;
			this->rdybtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rdybtn->Font = (gcnew System::Drawing::Font(L"Agent Orange", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdybtn->ForeColor = System::Drawing::Color::White;
			this->rdybtn->Location = System::Drawing::Point(292, 347);
			this->rdybtn->Name = L"rdybtn";
			this->rdybtn->Size = System::Drawing::Size(177, 55);
			this->rdybtn->TabIndex = 1;
			this->rdybtn->Text = L"ready";
			this->rdybtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rdybtn->Click += gcnew System::EventHandler(this, &howtoplay::rdybtn_Click);
			// 
			// mechlbl
			// 
			this->mechlbl->AutoSize = true;
			this->mechlbl->BackColor = System::Drawing::Color::Transparent;
			this->mechlbl->Font = (gcnew System::Drawing::Font(L"Agent Orange", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mechlbl->ForeColor = System::Drawing::SystemColors::Control;
			this->mechlbl->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->mechlbl->Location = System::Drawing::Point(186, 22);
			this->mechlbl->Name = L"mechlbl";
			this->mechlbl->Size = System::Drawing::Size(394, 62);
			this->mechlbl->TabIndex = 2;
			this->mechlbl->Text = L"How to Play";
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Agent Orange", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(251, 293);
			this->name->Multiline = true;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(249, 51);
			this->name->TabIndex = 3;
			this->name->TextChanged += gcnew System::EventHandler(this, &howtoplay::textBox1_TextChanged);
			// 
			// howtoplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 411);
			this->Controls->Add(this->name);
			this->Controls->Add(this->mechlbl);
			this->Controls->Add(this->rdybtn);
			this->Name = L"howtoplay";
			this->Text = L"howtoplay";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//ready button
	private: System::Void rdybtn_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay^ sif = gcnew gameplay();
		sif->Show();
		Hide();
	}
	//Text box for getting the value
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
