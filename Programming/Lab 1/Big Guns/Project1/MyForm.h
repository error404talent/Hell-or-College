#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
				delete components;
		}

	private:
		System::Windows::Forms::TextBox^ textBoxRows;
		System::Windows::Forms::TextBox^ textBoxCols;
		System::Windows::Forms::Button^ buttonCreateGrid;
		System::Windows::Forms::Button^ buttonCountPositive;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::Label^ labelResult;
		System::ComponentModel::Container^ components;
	 System::Windows::Forms::Label^ taskLabel;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBoxRows = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCols = (gcnew System::Windows::Forms::TextBox());
			this->buttonCreateGrid = (gcnew System::Windows::Forms::Button());
			this->buttonCountPositive = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->taskLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxRows
			// 
			this->textBoxRows->Location = System::Drawing::Point(20, 61);
			this->textBoxRows->Name = L"textBoxRows";
			this->textBoxRows->Size = System::Drawing::Size(50, 20);
			this->textBoxRows->TabIndex = 0;
			this->textBoxRows->Text = L"3";
			// 
			// textBoxCols
			// 
			this->textBoxCols->Location = System::Drawing::Point(79, 61);
			this->textBoxCols->Name = L"textBoxCols";
			this->textBoxCols->Size = System::Drawing::Size(50, 20);
			this->textBoxCols->TabIndex = 1;
			this->textBoxCols->Text = L"3";
			// 
			// buttonCreateGrid
			// 
			this->buttonCreateGrid->Location = System::Drawing::Point(135, 61);
			this->buttonCreateGrid->Name = L"buttonCreateGrid";
			this->buttonCreateGrid->Size = System::Drawing::Size(90, 25);
			this->buttonCreateGrid->TabIndex = 2;
			this->buttonCreateGrid->Text = L"Create Grid";
			this->buttonCreateGrid->UseVisualStyleBackColor = true;
			this->buttonCreateGrid->Click += gcnew System::EventHandler(this, &MyForm::buttonCreateGrid_Click);
			// 
			// buttonCountPositive
			// 
			this->buttonCountPositive->Location = System::Drawing::Point(258, 263);
			this->buttonCountPositive->Name = L"buttonCountPositive";
			this->buttonCountPositive->Size = System::Drawing::Size(130, 25);
			this->buttonCountPositive->TabIndex = 3;
			this->buttonCountPositive->Text = L"Count Positive Numbers";
			this->buttonCountPositive->UseVisualStyleBackColor = true;
			this->buttonCountPositive->Click += gcnew System::EventHandler(this, &MyForm::buttonCountPositive_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Location = System::Drawing::Point(20, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(250, 150);
			this->dataGridView1->TabIndex = 4;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(20, 270);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(40, 13);
			this->labelResult->TabIndex = 5;
			this->labelResult->Text = L"Result:";
			// 
			// taskLabel
			// 
			this->taskLabel->AutoSize = true;
			this->taskLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->taskLabel->ForeColor = System::Drawing::Color::Navy;
			this->taskLabel->Location = System::Drawing::Point(20, 10);
			this->taskLabel->Name = L"taskLabel";
			this->taskLabel->Size = System::Drawing::Size(269, 19);
			this->taskLabel->TabIndex = 6;
			this->taskLabel->Text = L"Task: Count numbers greater than zero";
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(400, 300);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonCountPositive);
			this->Controls->Add(this->buttonCreateGrid);
			this->Controls->Add(this->textBoxCols);
			this->Controls->Add(this->textBoxRows);
			this->Controls->Add(this->taskLabel);
			this->Name = L"MyForm";
			this->Text = L"Grid Example";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonCreateGrid_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int n = Convert::ToInt32(textBoxRows->Text);
			int m = Convert::ToInt32(textBoxCols->Text);
			dataGridView1->RowCount = n;
			dataGridView1->ColumnCount = m;
		}
		catch (...) {
			MessageBox::Show("Enter valid numbers!", "Error");
		}
	}

	private: System::Void buttonCountPositive_Click(System::Object^ sender, System::EventArgs^ e) {
		int count = 0;
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) {
					try {
						double value = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
						if (value > 0) count++;
					}
					catch (...) {}
				}
			}
		}
		labelResult->Text = "Positive numbers: " + count.ToString();
	}
	};
}
