#include "MyForm3.h"
#include <iostream>
#include <set>
#include <string>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

String^ GetSelectedItems(ListBox^ listBox);
bool AreSelectedItemsInList(String^ selectedItems, String^ list);

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	MyForm3::MyForm form;

	Application::Run(% form);

}

//-----------------------------------------------------------------------------------------------------------------------------------------
System::Void MyForm3::MyForm::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::groupBox1_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::download1_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Подключение к БД
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Tourist_tour.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// Запрос
	dbConnection->Open();
	String^ querry = "SELECT * FROM [Tourist_tour]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);
	OleDbDataReader^ dbDataReader = dbCommand->ExecuteReader();

	// Проверка
	if (dbDataReader->HasRows == false) 
	{
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {
		while (dbDataReader->Read()) 
		{
			dataGridView1->Rows->Add(dbDataReader["Код"], dbDataReader["Название"], dbDataReader["Страна"], dbDataReader["Стоимость"]);
			String^ countries = dbDataReader["Страна"]->ToString();

			array<String^>^ countryArray = countries->Split();

			for each (String ^ country in countryArray)
			{
				bool found = false;
				for each (String ^ item in listBox2->Items)
				{
					if (item->Contains(country))
					{
						found = true;
						break;
					}
				}

				if (!found)
				{
					listBox2->Items->Add(country + "\n");
				}
			}
		}
		dbDataReader->Close();
		dbConnection->Close();
	}
	return System::Void();
}

System::Void MyForm3::MyForm::insert1_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox2->Items->Clear();
	
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr)
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ country = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ cost = dataGridView1->Rows[index]->Cells[3]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Tourist_tour.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "INSERT INTO [Tourist_tour] VALUES (" + id + ", '" + name + "', '" + country + "', " + cost + ")";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);

	if (dbCommand->ExecuteNonQuery() != 1) {
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else {
		MessageBox::Show("Данные добавлены!", "Готово!");
	}

}

System::Void MyForm3::MyForm::delete1_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox2->Items->Clear();

	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr) {
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();


	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Tourist_tour.accdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();
	String^ querry = "DELETE FROM [Tourist_tour] WHERE  Код= " + id;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);


	if (dbCommand->ExecuteNonQuery() != 1) {
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView1->Rows->RemoveAt(index);
	}
	return System::Void();
}

System::Void MyForm3::MyForm::update1_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox2->Items->Clear();

	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView1->SelectedRows[0]->Index;


	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr)
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ country = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ cost = dataGridView1->Rows[index]->Cells[3]->Value->ToString();


	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Tourist_tour.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();
	String^ querry = "UPDATE [Tourist_tour] SET Название='" + name + "', Страна='" + country + "', Стоимость='" + cost + "' WHERE Код= " + id;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);


	if (dbCommand->ExecuteNonQuery() != 1) {
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else {
		MessageBox::Show("Данные обновлены!", "Готово!");
	}
	return System::Void();
}
//-----------------------------------------------------------------------------------------------------------------------------------------
System::Void MyForm3::MyForm::dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::groupBox2_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::download2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Contract.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "SELECT * FROM [Contract]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);
	OleDbDataReader^ dbDataReader = dbCommand->ExecuteReader();

	if (dbDataReader->HasRows == false) 
	{
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {
		while (dbDataReader->Read()) 
		{
			dataGridView2->Rows->Add(dbDataReader["ID"], dbDataReader["Ответственное_лицо"], dbDataReader["Дата_начала"], dbDataReader["Дата_окончания"], dbDataReader["Код_тура"], dbDataReader["ID_договора"]);
		}
		dbDataReader->Close();
		dbConnection->Close();
	}
	return System::Void();
}

System::Void MyForm3::MyForm::insert2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) 
	{
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}
	int index = dataGridView2->SelectedRows[0]->Index;

	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[5]->Value == nullptr)
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
	String^ start = dataGridView2->Rows[index]->Cells[2]->Value->ToString();
	String^ end = dataGridView2->Rows[index]->Cells[3]->Value->ToString();
	String^ code = dataGridView2->Rows[index]->Cells[4]->Value->ToString();
	String^ ID_contract = dataGridView2->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Contract.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "INSERT INTO [Contract] VALUES ('" + id + "','" + name + "', '" + start + "', '" + end + "', '" + code + "', '" + ID_contract + "')";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);

	if (dbCommand->ExecuteNonQuery() != 1) 
	{
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else 
	{
		MessageBox::Show("Данные добавлены!", "Готово!");
	}
	return System::Void();
}

System::Void MyForm3::MyForm::delete2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) 
	{
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView2->SelectedRows[0]->Index;

	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr) 
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Contract.accdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "DELETE FROM [Contract] WHERE  ID= " + id;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);

	if (dbCommand->ExecuteNonQuery() != 1) 
	{
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else 
	{
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView2->Rows->RemoveAt(index);
	}
	return System::Void();
}

System::Void MyForm3::MyForm::update2_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (dataGridView2->SelectedRows->Count != 1) 
	{
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView2->SelectedRows[0]->Index;

	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr)
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
	String^ start = dataGridView2->Rows[index]->Cells[2]->Value->ToString();
	String^ end = dataGridView2->Rows[index]->Cells[3]->Value->ToString();
	String^ code = dataGridView2->Rows[index]->Cells[4]->Value->ToString();
	String^ ID_contract = dataGridView2->Rows[index]->Cells[5]->Value->ToString();
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Contract.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "UPDATE [Contract] SET Ответственное_лицо='" + name + "', Дата_начала='" + start + "', Дата_окончания='" + end + "', Код_тура='" + code + "', ID_договора='" + ID_contract + "' WHERE ID= " + id;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);

	if (dbCommand->ExecuteNonQuery() != 1) {
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else {
		MessageBox::Show("Данные обновлены!", "Готово!");
		dbConnection->Close();
	}
	return System::Void();
}
//-----------------------------------------------------------------------------------------------------------------------------------------
System::Void MyForm3::MyForm::dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::groupBox3_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}



System::Void MyForm3::MyForm::download3_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();

	// Подключение к БД
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Group.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// Запрос
	dbConnection->Open();
	String^ querry = "SELECT * FROM [Group]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);
	OleDbDataReader^ dbDataReader = dbCommand->ExecuteReader();

	// Проверка
	if (dbDataReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {
		while (dbDataReader->Read()) {
			dataGridView3->Rows->Add(dbDataReader["IDгруппы"], dbDataReader["IDдоговора"], dbDataReader["Участники"], dbDataReader["Количество"]);
	
			String^ participants = dbDataReader["Участники"]->ToString();

			array<String^>^ participantArray = participants->Split(',');
	
			for each (String ^ participant in participantArray)
			{
				bool found = false;
				for each (String ^ item in listBox1->Items)
				{
					if (item->Contains(participant))
					{
						found = true;
						break;
					}
				}

				if (!found)
				{
					listBox1->Items->Add(participant + "\n");
				}
			}

		}
		dbDataReader->Close();
		dbConnection->Close();
	}
	return System::Void();
}

System::Void MyForm3::MyForm::insert3_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	listBox2->Items->Clear();

	if (dataGridView3->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView3->SelectedRows[0]->Index;

	if (dataGridView3->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[3]->Value == nullptr)
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id = dataGridView3->Rows[index]->Cells[0]->Value->ToString();
	String^ contract_id = dataGridView3->Rows[index]->Cells[1]->Value->ToString();
	String^ party = dataGridView3->Rows[index]->Cells[2]->Value->ToString();
	String^ count = dataGridView3->Rows[index]->Cells[3]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Group.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "INSERT INTO [Group] VALUES (" + id + ", '" + contract_id + "', '" + party + "', " + count + ")";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);

	if (dbCommand->ExecuteNonQuery() != 1) 
	{
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else 
	{
		MessageBox::Show("Данные добавлены!", "Готово!");
	}

	return System::Void();
}

System::Void MyForm3::MyForm::delete3_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();

	if (dataGridView3->SelectedRows->Count != 1) 
	{
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView3->SelectedRows[0]->Index;

	if (dataGridView3->Rows[index]->Cells[0]->Value == nullptr) 
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id = dataGridView3->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Group.accdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "DELETE FROM [Group] WHERE  IDгруппы=" + id;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);

	if (dbCommand->ExecuteNonQuery() != 1) 
	{
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else 
	{
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView3->Rows->RemoveAt(index);
	}
	return System::Void();
}

System::Void MyForm3::MyForm::update3_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	listBox2->Items->Clear();

	if (dataGridView3->SelectedRows->Count != 1) 
	{
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView3->SelectedRows[0]->Index;

	if (dataGridView3->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[3]->Value == nullptr)
	{
		MessageBox::Show("Нe все данные введены!", "Внимание!");
		return;
	}

	String^ id1 = dataGridView3->Rows[index]->Cells[0]->Value->ToString();
	String^ id2 = dataGridView3->Rows[index]->Cells[1]->Value->ToString();
	String^ party = dataGridView3->Rows[index]->Cells[2]->Value->ToString();
	String^ count = dataGridView3->Rows[index]->Cells[3]->Value->ToString();

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Danii\\OneDrive\\Рабочий стол\\БД (Для ИЗ)\\Group.accdb;";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ querry = "UPDATE [Group] SET IDдоговора='" + id2 + "', Участники='" + party + "', Количество='" + count + "' WHERE IDгруппы= " + id1;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(querry, dbConnection);

	if (dbCommand->ExecuteNonQuery() != 1) 
	{
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	}
	else 
	{
		MessageBox::Show("Данные обновлены!", "Готово!");
		dbConnection->Close();
		return System::Void();
	}

}

System::Void MyForm3::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::search_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ selected = GetSelectedItems(listBox1);
	String^ selected2 = GetSelectedItems(listBox2);

	bool inData = false;

	for each (DataGridViewRow ^ row in dataGridView3->Rows) 
	{
		if (row->Cells["party"]->Value != nullptr 
			&& AreSelectedItemsInList(selected, row->Cells["party"]->Value->ToString())) 
		{
			for each (DataGridViewRow ^ row2 in dataGridView2->Rows) 
			{
				if (row->Cells["id_contract"]->Value != nullptr 
					&& row2->Cells["contract_id"]->Value != nullptr 
					&& row->Cells["id_contract"]->Value->ToString() == row2->Cells["contract_id"]->Value->ToString()) 
				{
					for each (DataGridViewRow ^ row3 in dataGridView1->Rows) 
					{
						if (row2->Cells["tour_code"]->Value != nullptr 
							&& row3->Cells["id1"]->Value != nullptr 
							&& AreSelectedItemsInList(selected2, row3->Cells["country"]->Value->ToString())
							&& row2->Cells["tour_code"]->Value->ToString() == row3->Cells["id1"]->Value->ToString()) 
						{
							dataGridView4->Rows->Add(selected, selected2, row3->Cells["name"]->Value->ToString());
						}

					}
				}
			}
		}
	}
}

String^ GetSelectedItems(ListBox^ listBox) 
{
	String^ selectedItems = "";

	for (int i = 0; i < listBox->SelectedItems->Count; i++)
	{
		selectedItems += listBox->SelectedItems[i]->ToString() + " ";
	}
	return selectedItems->Trim();
}

bool AreSelectedItemsInList(String^ selectedItems, String^ list)
{
	array<String^>^ selectedArray = selectedItems->Split(' ');
	for (int i = 0; i < selectedArray->Length; i++)
	{
		String^ selectedItem = selectedArray[i]->Trim();
		if (list->Contains(selectedItem))
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}

System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	return System::Void();
}

System::Void MyForm3::MyForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyForm3::MyForm::dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}
