#pragma once

namespace MyForm3 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ country;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cost;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ download1;
	private: System::Windows::Forms::Button^ insert1;
	private: System::Windows::Forms::Button^ update1;
	private: System::Windows::Forms::Button^ delete1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Group_Leader;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ start_data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ end_data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tour_code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ contract_id;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ download2;
	private: System::Windows::Forms::Button^ insert2;
	private: System::Windows::Forms::Button^ update2;
	private: System::Windows::Forms::Button^ delete2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_contract;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ party;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ count;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ download3;
	private: System::Windows::Forms::Button^ insert3;
	private: System::Windows::Forms::Button^ update3;
	private: System::Windows::Forms::Button^ delete3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Selected_Group;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Selected_Country;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Result;


















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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->download1 = (gcnew System::Windows::Forms::Button());
			this->insert1 = (gcnew System::Windows::Forms::Button());
			this->update1 = (gcnew System::Windows::Forms::Button());
			this->delete1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->id2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Group_Leader = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->start_data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->end_data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tour_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contract_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->download2 = (gcnew System::Windows::Forms::Button());
			this->insert2 = (gcnew System::Windows::Forms::Button());
			this->update2 = (gcnew System::Windows::Forms::Button());
			this->delete2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->id3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID_contract = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->party = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->download3 = (gcnew System::Windows::Forms::Button());
			this->insert3 = (gcnew System::Windows::Forms::Button());
			this->update3 = (gcnew System::Windows::Forms::Button());
			this->delete3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Selected_Group = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Selected_Country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Result = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id1, this->name,
					this->country, this->cost
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 38);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(460, 197);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// id1
			// 
			this->id1->HeaderText = L"Код";
			this->id1->MinimumWidth = 6;
			this->id1->Name = L"id1";
			this->id1->Width = 125;
			// 
			// name
			// 
			this->name->HeaderText = L"Название";
			this->name->MinimumWidth = 6;
			this->name->Name = L"name";
			this->name->Width = 125;
			// 
			// country
			// 
			this->country->HeaderText = L"Страна";
			this->country->MinimumWidth = 6;
			this->country->Name = L"country";
			this->country->Width = 125;
			// 
			// cost
			// 
			this->cost->HeaderText = L"Стоимость";
			this->cost->MinimumWidth = 6;
			this->cost->Name = L"cost";
			this->cost->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->download1);
			this->groupBox1->Controls->Add(this->insert1);
			this->groupBox1->Controls->Add(this->update1);
			this->groupBox1->Controls->Add(this->delete1);
			this->groupBox1->Location = System::Drawing::Point(491, 38);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(417, 197);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Туристический тур";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// download1
			// 
			this->download1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->download1->Location = System::Drawing::Point(21, 30);
			this->download1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->download1->Name = L"download1";
			this->download1->Size = System::Drawing::Size(179, 52);
			this->download1->TabIndex = 5;
			this->download1->Text = L"Загрузить";
			this->download1->UseVisualStyleBackColor = true;
			this->download1->Click += gcnew System::EventHandler(this, &MyForm::download1_Click);
			// 
			// insert1
			// 
			this->insert1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->insert1->Location = System::Drawing::Point(219, 30);
			this->insert1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insert1->Name = L"insert1";
			this->insert1->Size = System::Drawing::Size(179, 52);
			this->insert1->TabIndex = 4;
			this->insert1->Text = L"Добавить";
			this->insert1->UseVisualStyleBackColor = true;
			this->insert1->Click += gcnew System::EventHandler(this, &MyForm::insert1_Click);
			// 
			// update1
			// 
			this->update1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->update1->Location = System::Drawing::Point(219, 130);
			this->update1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->update1->Name = L"update1";
			this->update1->Size = System::Drawing::Size(179, 52);
			this->update1->TabIndex = 3;
			this->update1->Text = L"Обновить";
			this->update1->UseVisualStyleBackColor = true;
			this->update1->Click += gcnew System::EventHandler(this, &MyForm::update1_Click);
			// 
			// delete1
			// 
			this->delete1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete1->Location = System::Drawing::Point(21, 130);
			this->delete1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->delete1->Name = L"delete1";
			this->delete1->Size = System::Drawing::Size(179, 52);
			this->delete1->TabIndex = 2;
			this->delete1->Text = L"Удалить";
			this->delete1->UseVisualStyleBackColor = true;
			this->delete1->Click += gcnew System::EventHandler(this, &MyForm::delete1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id2, this->Group_Leader,
					this->start_data, this->end_data, this->tour_code, this->contract_id
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 277);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(460, 197);
			this->dataGridView2->TabIndex = 6;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// id2
			// 
			this->id2->HeaderText = L"ID";
			this->id2->MinimumWidth = 6;
			this->id2->Name = L"id2";
			this->id2->Width = 125;
			// 
			// Group_Leader
			// 
			this->Group_Leader->HeaderText = L"Ответственное лицо";
			this->Group_Leader->MinimumWidth = 6;
			this->Group_Leader->Name = L"Group_Leader";
			this->Group_Leader->Width = 125;
			// 
			// start_data
			// 
			this->start_data->HeaderText = L"Дата начала";
			this->start_data->MinimumWidth = 6;
			this->start_data->Name = L"start_data";
			this->start_data->Width = 125;
			// 
			// end_data
			// 
			this->end_data->HeaderText = L"Дата окончания";
			this->end_data->MinimumWidth = 6;
			this->end_data->Name = L"end_data";
			this->end_data->Width = 125;
			// 
			// tour_code
			// 
			this->tour_code->HeaderText = L"Код тура";
			this->tour_code->MinimumWidth = 6;
			this->tour_code->Name = L"tour_code";
			this->tour_code->Width = 125;
			// 
			// contract_id
			// 
			this->contract_id->HeaderText = L"ID контракта";
			this->contract_id->MinimumWidth = 6;
			this->contract_id->Name = L"contract_id";
			this->contract_id->Width = 125;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->download2);
			this->groupBox2->Controls->Add(this->insert2);
			this->groupBox2->Controls->Add(this->update2);
			this->groupBox2->Controls->Add(this->delete2);
			this->groupBox2->Location = System::Drawing::Point(491, 277);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(417, 197);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Договор";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// download2
			// 
			this->download2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->download2->Location = System::Drawing::Point(21, 31);
			this->download2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->download2->Name = L"download2";
			this->download2->Size = System::Drawing::Size(179, 52);
			this->download2->TabIndex = 5;
			this->download2->Text = L"Загрузить";
			this->download2->UseVisualStyleBackColor = true;
			this->download2->Click += gcnew System::EventHandler(this, &MyForm::download2_Click);
			// 
			// insert2
			// 
			this->insert2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->insert2->Location = System::Drawing::Point(219, 31);
			this->insert2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insert2->Name = L"insert2";
			this->insert2->Size = System::Drawing::Size(179, 52);
			this->insert2->TabIndex = 4;
			this->insert2->Text = L"Добавить";
			this->insert2->UseVisualStyleBackColor = true;
			this->insert2->Click += gcnew System::EventHandler(this, &MyForm::insert2_Click);
			// 
			// update2
			// 
			this->update2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->update2->Location = System::Drawing::Point(219, 127);
			this->update2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->update2->Name = L"update2";
			this->update2->Size = System::Drawing::Size(179, 52);
			this->update2->TabIndex = 3;
			this->update2->Text = L"Обновить";
			this->update2->UseVisualStyleBackColor = true;
			this->update2->Click += gcnew System::EventHandler(this, &MyForm::update2_Click);
			// 
			// delete2
			// 
			this->delete2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete2->Location = System::Drawing::Point(21, 127);
			this->delete2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->delete2->Name = L"delete2";
			this->delete2->Size = System::Drawing::Size(179, 52);
			this->delete2->TabIndex = 2;
			this->delete2->Text = L"Удалить";
			this->delete2->UseVisualStyleBackColor = true;
			this->delete2->Click += gcnew System::EventHandler(this, &MyForm::delete2_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id3, this->ID_contract,
					this->party, this->count
			});
			this->dataGridView3->Location = System::Drawing::Point(12, 502);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(460, 197);
			this->dataGridView3->TabIndex = 7;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// id3
			// 
			this->id3->HeaderText = L"Идентификатор группы";
			this->id3->MinimumWidth = 6;
			this->id3->Name = L"id3";
			this->id3->Width = 125;
			// 
			// ID_contract
			// 
			this->ID_contract->HeaderText = L"ID договора";
			this->ID_contract->MinimumWidth = 6;
			this->ID_contract->Name = L"ID_contract";
			this->ID_contract->Width = 125;
			// 
			// party
			// 
			this->party->HeaderText = L"Участники";
			this->party->MinimumWidth = 6;
			this->party->Name = L"party";
			this->party->Width = 125;
			// 
			// count
			// 
			this->count->HeaderText = L"Кол-во";
			this->count->MinimumWidth = 6;
			this->count->Name = L"count";
			this->count->Width = 125;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->download3);
			this->groupBox3->Controls->Add(this->insert3);
			this->groupBox3->Controls->Add(this->update3);
			this->groupBox3->Controls->Add(this->delete3);
			this->groupBox3->Location = System::Drawing::Point(492, 502);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(417, 197);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Туристическая группа";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// download3
			// 
			this->download3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->download3->Location = System::Drawing::Point(21, 30);
			this->download3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->download3->Name = L"download3";
			this->download3->Size = System::Drawing::Size(179, 52);
			this->download3->TabIndex = 5;
			this->download3->Text = L"Загрузить";
			this->download3->UseVisualStyleBackColor = true;
			this->download3->Click += gcnew System::EventHandler(this, &MyForm::download3_Click);
			// 
			// insert3
			// 
			this->insert3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->insert3->Location = System::Drawing::Point(219, 41);
			this->insert3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insert3->Name = L"insert3";
			this->insert3->Size = System::Drawing::Size(179, 52);
			this->insert3->TabIndex = 4;
			this->insert3->Text = L"Добавить";
			this->insert3->UseVisualStyleBackColor = true;
			this->insert3->Click += gcnew System::EventHandler(this, &MyForm::insert3_Click);
			// 
			// update3
			// 
			this->update3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->update3->Location = System::Drawing::Point(219, 130);
			this->update3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->update3->Name = L"update3";
			this->update3->Size = System::Drawing::Size(179, 52);
			this->update3->TabIndex = 3;
			this->update3->Text = L"Обновить";
			this->update3->UseVisualStyleBackColor = true;
			this->update3->Click += gcnew System::EventHandler(this, &MyForm::update3_Click);
			// 
			// delete3
			// 
			this->delete3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete3->Location = System::Drawing::Point(21, 130);
			this->delete3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->delete3->Name = L"delete3";
			this->delete3->Size = System::Drawing::Size(179, 52);
			this->delete3->TabIndex = 2;
			this->delete3->Text = L"Удалить";
			this->delete3->UseVisualStyleBackColor = true;
			this->delete3->Click += gcnew System::EventHandler(this, &MyForm::delete3_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(40, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 52);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Загрузить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(288, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 52);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(288, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(179, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Обновить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(40, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(179, 52);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Удалить";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->listBox2);
			this->groupBox4->Controls->Add(this->listBox1);
			this->groupBox4->Controls->Add(this->search);
			this->groupBox4->Location = System::Drawing::Point(935, 38);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(474, 322);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Поиск туров";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(28, 194);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox2->Size = System::Drawing::Size(299, 116);
			this->listBox2->TabIndex = 9;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(28, 30);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(299, 116);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(347, 130);
			this->search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(109, 100);
			this->search->TabIndex = 1;
			this->search->Text = L"Найти";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &MyForm::search_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Selected_Group,
					this->Selected_Country, this->Result
			});
			this->dataGridView4->Location = System::Drawing::Point(935, 389);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(474, 310);
			this->dataGridView4->TabIndex = 9;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
			// 
			// Selected_Group
			// 
			this->Selected_Group->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Selected_Group->HeaderText = L"Выбранная группа";
			this->Selected_Group->MinimumWidth = 6;
			this->Selected_Group->Name = L"Selected_Group";
			this->Selected_Group->Width = 145;
			// 
			// Selected_Country
			// 
			this->Selected_Country->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Selected_Country->HeaderText = L"Выбранная страна";
			this->Selected_Country->MinimumWidth = 6;
			this->Selected_Country->Name = L"Selected_Country";
			this->Selected_Country->Width = 145;
			// 
			// Result
			// 
			this->Result->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Result->HeaderText = L"Результат поиска";
			this->Result->MinimumWidth = 6;
			this->Result->Name = L"Result";
			this->Result->Width = 142;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1451, 735);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Индивидуальное задание (4 вариант)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void download1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void insert1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delete1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void update1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void download2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void insert2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delete2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void update2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void download3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void insert3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delete3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void update3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
