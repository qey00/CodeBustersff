#pragma once

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
	private: System::Windows::Forms::PictureBox^ readybtn;
	private: System::Windows::Forms::Label^ rdybtn;
	private: System::Windows::Forms::Label^ mechlbl;
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
			this->readybtn = (gcnew System::Windows::Forms::PictureBox());
			this->rdybtn = (gcnew System::Windows::Forms::Label());
			this->mechlbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->readybtn))->BeginInit();
			this->SuspendLayout();
			// 
			// readybtn
			// 
			this->readybtn->BackColor = System::Drawing::Color::Transparent;
			this->readybtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"readybtn.Image")));
			this->readybtn->Location = System::Drawing::Point(248, 282);
			this->readybtn->Name = L"readybtn";
			this->readybtn->Size = System::Drawing::Size(285, 117);
			this->readybtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->readybtn->TabIndex = 0;
			this->readybtn->TabStop = false;
			this->readybtn->Click += gcnew System::EventHandler(this, &howtoplay::readybtn_Click);
			// 
			// rdybtn
			// 
			this->rdybtn->AutoSize = true;
			this->rdybtn->BackColor = System::Drawing::Color::Transparent;
			this->rdybtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rdybtn->Font = (gcnew System::Drawing::Font(L"Agent Orange", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdybtn->ForeColor = System::Drawing::Color::White;
			this->rdybtn->Location = System::Drawing::Point(295, 314);
			this->rdybtn->Name = L"rdybtn";
			this->rdybtn->Size = System::Drawing::Size(177, 55);
			this->rdybtn->TabIndex = 1;
			this->rdybtn->Text = L"ready";
			this->rdybtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mechlbl
			// 
			this->mechlbl->AutoSize = true;
			this->mechlbl->BackColor = System::Drawing::Color::Transparent;
			this->mechlbl->Font = (gcnew System::Drawing::Font(L"Agent Orange", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mechlbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mechlbl->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->mechlbl->Location = System::Drawing::Point(186, 22);
			this->mechlbl->Name = L"mechlbl";
			this->mechlbl->Size = System::Drawing::Size(394, 62);
			this->mechlbl->TabIndex = 2;
			this->mechlbl->Text = L"How to Play";
			// 
			// howtoplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 411);
			this->Controls->Add(this->mechlbl);
			this->Controls->Add(this->rdybtn);
			this->Controls->Add(this->readybtn);
			this->Name = L"howtoplay";
			this->Text = L"howtoplay";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->readybtn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//ready button
	private: System::Void readybtn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
