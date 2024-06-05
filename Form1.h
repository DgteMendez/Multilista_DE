#pragma once

#include "TListaJ.h"


namespace MultilistaDE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		TListaJ^ list; // Declarar la instancia de la multilista

	public:
		Form1(void)
		{
			InitializeComponent();
			list = gcnew TListaJ(); // Inicializar la multilista en el constructor del formulario
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonLimpiar;
	protected:
	private: System::Windows::Forms::Button^ buttonInsertar;
	private: System::Windows::Forms::Button^ buttonEliminar;
	private: System::Windows::Forms::Button^ buttonPrimero;
	private: System::Windows::Forms::Button^ buttonAntecesor;
	private: System::Windows::Forms::Button^ buttonSucesor;
	private: System::Windows::Forms::Button^ buttonUltimo;

	private: System::Windows::Forms::Button^ buttonInsertarT;
	private: System::Windows::Forms::Button^ buttonEliminarT;



	private: System::Windows::Forms::Label^ NB;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ NOM;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::TextBox^ textBoxNBrigada;
	private: System::Windows::Forms::TextBox^ textBoxIdentificador;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Oficio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonInsertar = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonPrimero = (gcnew System::Windows::Forms::Button());
			this->buttonAntecesor = (gcnew System::Windows::Forms::Button());
			this->buttonSucesor = (gcnew System::Windows::Forms::Button());
			this->buttonUltimo = (gcnew System::Windows::Forms::Button());
			this->buttonInsertarT = (gcnew System::Windows::Forms::Button());
			this->buttonEliminarT = (gcnew System::Windows::Forms::Button());
			this->NB = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->NOM = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Oficio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxNBrigada = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIdentificador = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(26, 148);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(116, 42);
			this->buttonLimpiar->TabIndex = 0;
			this->buttonLimpiar->Text = L"LIMPIAR";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &Form1::buttonLimpiar_Click);
			// 
			// buttonInsertar
			// 
			this->buttonInsertar->Location = System::Drawing::Point(148, 148);
			this->buttonInsertar->Name = L"buttonInsertar";
			this->buttonInsertar->Size = System::Drawing::Size(112, 42);
			this->buttonInsertar->TabIndex = 1;
			this->buttonInsertar->Text = L"INSERTAR";
			this->buttonInsertar->UseVisualStyleBackColor = true;
			this->buttonInsertar->Click += gcnew System::EventHandler(this, &Form1::buttonInsertar_Click);
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(266, 148);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(109, 42);
			this->buttonEliminar->TabIndex = 2;
			this->buttonEliminar->Text = L"ELIMINAR";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &Form1::buttonEliminar_Click);
			// 
			// buttonPrimero
			// 
			this->buttonPrimero->Location = System::Drawing::Point(26, 196);
			this->buttonPrimero->Name = L"buttonPrimero";
			this->buttonPrimero->Size = System::Drawing::Size(143, 43);
			this->buttonPrimero->TabIndex = 3;
			this->buttonPrimero->Text = L"PRIMERO";
			this->buttonPrimero->UseVisualStyleBackColor = true;
			this->buttonPrimero->Click += gcnew System::EventHandler(this, &Form1::buttonPrimero_Click);
			// 
			// buttonAntecesor
			// 
			this->buttonAntecesor->Location = System::Drawing::Point(175, 196);
			this->buttonAntecesor->Name = L"buttonAntecesor";
			this->buttonAntecesor->Size = System::Drawing::Size(154, 44);
			this->buttonAntecesor->TabIndex = 4;
			this->buttonAntecesor->Text = L"ANTECESOR";
			this->buttonAntecesor->UseVisualStyleBackColor = true;
			this->buttonAntecesor->Click += gcnew System::EventHandler(this, &Form1::buttonAntecesor_Click);
			// 
			// buttonSucesor
			// 
			this->buttonSucesor->Location = System::Drawing::Point(335, 196);
			this->buttonSucesor->Name = L"buttonSucesor";
			this->buttonSucesor->Size = System::Drawing::Size(111, 43);
			this->buttonSucesor->TabIndex = 5;
			this->buttonSucesor->Text = L"SUCESOR";
			this->buttonSucesor->UseVisualStyleBackColor = true;
			this->buttonSucesor->Click += gcnew System::EventHandler(this, &Form1::buttonSucesor_Click);
			// 
			// buttonUltimo
			// 
			this->buttonUltimo->Location = System::Drawing::Point(452, 197);
			this->buttonUltimo->Name = L"buttonUltimo";
			this->buttonUltimo->Size = System::Drawing::Size(123, 43);
			this->buttonUltimo->TabIndex = 6;
			this->buttonUltimo->Text = L"ULTIMO";
			this->buttonUltimo->UseVisualStyleBackColor = true;
			this->buttonUltimo->Click += gcnew System::EventHandler(this, &Form1::buttonUltimo_Click);
			// 
			// buttonInsertarT
			// 
			this->buttonInsertarT->Location = System::Drawing::Point(26, 456);
			this->buttonInsertarT->Name = L"buttonInsertarT";
			this->buttonInsertarT->Size = System::Drawing::Size(184, 40);
			this->buttonInsertarT->TabIndex = 8;
			this->buttonInsertarT->Text = L"INSERTAR";
			this->buttonInsertarT->UseVisualStyleBackColor = true;
			this->buttonInsertarT->Click += gcnew System::EventHandler(this, &Form1::buttonInsertarT_Click);
			// 
			// buttonEliminarT
			// 
			this->buttonEliminarT->Location = System::Drawing::Point(216, 456);
			this->buttonEliminarT->Name = L"buttonEliminarT";
			this->buttonEliminarT->Size = System::Drawing::Size(187, 40);
			this->buttonEliminarT->TabIndex = 9;
			this->buttonEliminarT->Text = L"ELIMINAR";
			this->buttonEliminarT->UseVisualStyleBackColor = true;
			this->buttonEliminarT->Click += gcnew System::EventHandler(this, &Form1::buttonEliminarT_Click);
			// 
			// NB
			// 
			this->NB->AutoSize = true;
			this->NB->Location = System::Drawing::Point(23, 23);
			this->NB->Name = L"NB";
			this->NB->Size = System::Drawing::Size(126, 16);
			this->NB->TabIndex = 13;
			this->NB->Text = L"Codigo del profesor";
			this->NB->Click += gcnew System::EventHandler(this, &Form1::NB_Click);
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Location = System::Drawing::Point(23, 63);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(56, 16);
			this->ID->TabIndex = 14;
			this->ID->Text = L"Nombre";
			// 
			// NOM
			// 
			this->NOM->AutoSize = true;
			this->NOM->Location = System::Drawing::Point(23, 103);
			this->NOM->Name = L"NOM";
			this->NOM->Size = System::Drawing::Size(57, 16);
			this->NOM->TabIndex = 15;
			this->NOM->Text = L"Apellido";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Identificador,
					this->Nombre, this->Oficio, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(26, 246);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(914, 204);
			this->dataGridView1->TabIndex = 16;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick_1);
			// 
			// Identificador
			// 
			this->Identificador->HeaderText = L"Identificador";
			this->Identificador->MinimumWidth = 6;
			this->Identificador->Name = L"Identificador";
			this->Identificador->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// Oficio
			// 
			this->Oficio->HeaderText = L"Descripcion";
			this->Oficio->MinimumWidth = 6;
			this->Oficio->Name = L"Oficio";
			this->Oficio->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Cantidad de horas";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha comienzo";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// textBoxNBrigada
			// 
			this->textBoxNBrigada->Location = System::Drawing::Point(193, 23);
			this->textBoxNBrigada->Name = L"textBoxNBrigada";
			this->textBoxNBrigada->Size = System::Drawing::Size(213, 22);
			this->textBoxNBrigada->TabIndex = 17;
			this->textBoxNBrigada->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxNBrigada_TextChanged);
			// 
			// textBoxIdentificador
			// 
			this->textBoxIdentificador->Location = System::Drawing::Point(193, 60);
			this->textBoxIdentificador->Name = L"textBoxIdentificador";
			this->textBoxIdentificador->Size = System::Drawing::Size(213, 22);
			this->textBoxIdentificador->TabIndex = 18;
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(193, 101);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(213, 22);
			this->textBoxNombre->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(444, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Edad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(444, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Sexo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(444, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Celular";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(524, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 22);
			this->textBox1->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(524, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 22);
			this->textBox2->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(524, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 22);
			this->textBox3->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(705, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Direccion";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(705, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Fecha de ingreso";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(705, 104);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Categoria";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(847, 22);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(217, 22);
			this->textBox4->TabIndex = 29;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(847, 59);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(217, 22);
			this->textBox5->TabIndex = 30;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(847, 101);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(217, 22);
			this->textBox6->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1116, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 16);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Salario";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1116, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 16);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Titulo universitario";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1262, 23);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(151, 22);
			this->textBox7->TabIndex = 34;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1262, 60);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(151, 22);
			this->textBox8->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1116, 103);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 16);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Antiguedad";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1262, 100);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(151, 22);
			this->textBox9->TabIndex = 37;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 42);
			this->button1->TabIndex = 38;
			this->button1->Text = L"ANTIGUO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1465, 525);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->textBoxIdentificador);
			this->Controls->Add(this->textBoxNBrigada);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->NOM);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->NB);
			this->Controls->Add(this->buttonEliminarT);
			this->Controls->Add(this->buttonInsertarT);
			this->Controls->Add(this->buttonUltimo);
			this->Controls->Add(this->buttonSucesor);
			this->Controls->Add(this->buttonAntecesor);
			this->Controls->Add(this->buttonPrimero);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonInsertar);
			this->Controls->Add(this->buttonLimpiar);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxIdentificador->Clear();
		textBoxNBrigada->Clear();
		textBoxNombre->Clear();
		dataGridView1->Rows->Clear();
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
	}
private: System::Void buttonInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verificar si las cajas de texto están vacías
	if (textBoxIdentificador->Text == "" || textBoxNBrigada->Text == "" || textBoxNombre->Text == "") {
		MessageBox::Show("Las cajas de texto están vacías");
	}
	else {
		// Si las cajas de texto no están vacías, insertar en la lista
		int CodigoProfesor = System::Convert::ToInt32(textBoxNBrigada->Text);
		String^ NombreProfesor = textBoxIdentificador->Text;
		String^ ApellidoProfesor = textBoxNombre->Text;
		int EdadProfesor = System::Convert::ToInt32(textBox1->Text);
		String^ SexoProfesor = textBox2->Text;
		int CelularProfesor = System::Convert::ToInt32(textBox3->Text);
		String^ DireccionProfesor = textBox4->Text;
		String^ FechaIngreso = textBox5->Text;
		String^ CategoriaProfesor = textBox6->Text;
		int SalarioProfesor = System::Convert::ToInt32(textBox7->Text);
		String^ TituloUniversitario = textBox8->Text;
		int Antiguedad = System::Convert::ToInt32(textBox9->Text);

		// Llamar al método de inserción en la lista
		list->crearLista(CodigoProfesor, NombreProfesor, ApellidoProfesor, EdadProfesor, SexoProfesor, CelularProfesor, DireccionProfesor, FechaIngreso, CategoriaProfesor, SalarioProfesor, TituloUniversitario, Antiguedad);
	}
	
}
private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verificar si las cajas de texto están vacías
	if (textBoxIdentificador->Text == "" || textBoxNBrigada->Text == "" || textBoxNombre->Text == "") {
		MessageBox::Show("Las cajas de texto están vacías");
	}
	else {
		// Si las cajas de texto no están vacías, buscar y eliminar de la lista
		int nBrigada = System::Convert::ToInt32(textBoxNBrigada->Text);

		// Llamar al método para buscar la brigada en la lista
		list->BuscarProfesor(nBrigada);

		// Llamar al método para eliminar la lista
		list->EliminarLista();
	}
	
}

private: System::Void buttonPrimero_Click(System::Object^ sender, System::EventArgs^ e) {
	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el primer nodo de la lista
	p = (TNodoJ^)list->getPrimero();

	// Mostrar los datos del nodo en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getCodigoProfesor());
	textBoxIdentificador->Text = System::Convert::ToString(p->getNombreProfesor());
	textBoxNombre->Text = p->getApellidoProfesor();
	textBox1->Text = System::Convert::ToString(p->getEdadProfesor());
	textBox2->Text = p->getSexoProfesor();
	textBox3->Text = System::Convert::ToString(p->getCelularProfesor());
	textBox4->Text = p->getDireccionProfesor();
	textBox5->Text = p->getFechaDeIngreso();
	textBox6->Text = p->getCategoriaProfesor();
	textBox7->Text = System::Convert::ToString(p->getSalarioProfesor());
	textBox8->Text = p->getTituloUniversitario();
	textBox9->Text = System::Convert::ToString(p->getAntiguedadProfesor());

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada en el DataGridView
	list->MostrarAsignatura(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);

	// Establecer el cursor en el primer nodo de la lista
	list->setCursor((TNodoJ^)list->getPrimero());
	
	
}
private: System::Void buttonAntecesor_Click(System::Object^ sender, System::EventArgs^ e) {
	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el nodo actual del cursor
	p = (TNodoJ^)list->getCursor();

	// Obtener el antecesor del nodo actual
	p = (TNodoJ^)list->getAntCursor();

	// Mostrar los datos del antecesor en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getCodigoProfesor());
	textBoxIdentificador->Text = System::Convert::ToString(p->getNombreProfesor());
	textBoxNombre->Text = p->getApellidoProfesor();
	textBox1->Text = System::Convert::ToString(p->getEdadProfesor());
	textBox2->Text = p->getSexoProfesor();
	textBox3->Text = System::Convert::ToString(p->getCelularProfesor());
	textBox4->Text = p->getDireccionProfesor();
	textBox5->Text = p->getFechaDeIngreso();
	textBox6->Text = p->getCategoriaProfesor();
	textBox7->Text = System::Convert::ToString(p->getSalarioProfesor());
	textBox8->Text = p->getTituloUniversitario();
	textBox9->Text = System::Convert::ToString(p->getAntiguedadProfesor());

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada en el DataGridView
	list->MostrarAsignatura(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);
	
}
private: System::Void buttonSucesor_Click(System::Object^ sender, System::EventArgs^ e) {
	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el nodo actual del cursor
	p = (TNodoJ^)list->getCursor();

	// Obtener el sucesor del nodo actual
	p = (TNodoJ^)list->getProxCursor();

	// Mostrar los datos del sucesor en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getCodigoProfesor());
	textBoxIdentificador->Text = System::Convert::ToString(p->getNombreProfesor());
	textBoxNombre->Text = p->getApellidoProfesor();
	textBox1->Text = System::Convert::ToString(p->getEdadProfesor());
	textBox2->Text = p->getSexoProfesor();
	textBox3->Text = System::Convert::ToString(p->getCelularProfesor());
	textBox4->Text = p->getDireccionProfesor();
	textBox5->Text = p->getFechaDeIngreso();
	textBox6->Text = p->getCategoriaProfesor();
	textBox7->Text = System::Convert::ToString(p->getSalarioProfesor());
	textBox8->Text = p->getTituloUniversitario();
	textBox9->Text = System::Convert::ToString(p->getAntiguedadProfesor());

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada en el DataGridView
	list->MostrarAsignatura(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);
	
}
private: System::Void buttonUltimo_Click(System::Object^ sender, System::EventArgs^ e) {

	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el último nodo de la lista
	p = (TNodoJ^)list->getUltimo();

	// Mostrar los datos del último nodo en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getCodigoProfesor());
	textBoxIdentificador->Text = System::Convert::ToString(p->getNombreProfesor());
	textBoxNombre->Text = p->getApellidoProfesor();
	textBox1->Text = System::Convert::ToString(p->getEdadProfesor());
	textBox2->Text = p->getSexoProfesor();
	textBox3->Text = System::Convert::ToString(p->getCelularProfesor());
	textBox4->Text = p->getDireccionProfesor();
	textBox5->Text = p->getFechaDeIngreso();
	textBox6->Text = p->getCategoriaProfesor();
	textBox7->Text = System::Convert::ToString(p->getSalarioProfesor());
	textBox8->Text = p->getTituloUniversitario();
	textBox9->Text = System::Convert::ToString(p->getAntiguedadProfesor());

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada asociada al último nodo en el DataGridView
	list->MostrarAsignatura(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);

	// Establecer el cursor en el último nodo
	list->setCursor((TNodoJ^)list->getUltimo());
	
}
private: System::Void buttonInsertarT_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obtener el índice de la fila seleccionada en el DataGridView
	int index = dataGridView1->CurrentRow->Index;

	// Insertar un nuevo trabajador en la lista
	list->InsertarAsignatura(
		System::Convert::ToInt32(textBoxNBrigada->Text),
		System::Convert::ToInt32(dataGridView1->Rows[index]->Cells[0]->Value->ToString()),
		dataGridView1->Rows[index]->Cells[1]->Value->ToString(),
		dataGridView1->Rows[index]->Cells[2]->Value->ToString(),
		System::Convert::ToInt32(dataGridView1->Rows[index]->Cells[3]->Value->ToString()),
		dataGridView1->Rows[index]->Cells[4]->Value->ToString()	
	);

	// Limpiar el DataGridView
	// dataGridView1->Rows->Clear(); // Este paso no es necesario según tu implementación original

}
private: System::Void buttonEliminarT_Click(System::Object^ sender, System::EventArgs^ e) {
	TNodoJ^ p; // Declarar un puntero a TNodoJ

	// Obtener el índice de la fila seleccionada en el DataGridView
	int index = dataGridView1->CurrentRow->Index;

	// Verificar si la multilista está vacía
	if (dataGridView1->Rows[index]->Cells[0]->Value->ToString() == "") {
		MessageBox::Show("La multilista está vacía", "Mensaje", MessageBoxButtons::OK);
	}
	else {
		// Si no está vacía, eliminar el trabajador de la lista
		p = (TNodoJ^)list->getCursor();
		list->EliminarAsignatura(
			System::Convert::ToInt32(textBoxNBrigada->Text),
			System::Convert::ToInt32(dataGridView1->Rows[index]->Cells[0]->Value->ToString())
		);
	}
	
}

private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBoxNBrigada_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NB_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el nodo actual del cursor
	p = (TNodoJ^)list->ObtenerProfesorMasAntiguo(
		System::Convert::ToInt32(textBoxNBrigada->Text)
	);
		
	// Mostrar los datos del antecesor en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getCodigoProfesor());
	textBoxIdentificador->Text = System::Convert::ToString(p->getNombreProfesor());
	textBoxNombre->Text = p->getApellidoProfesor();
	textBox1->Text = System::Convert::ToString(p->getEdadProfesor());
	textBox2->Text = p->getSexoProfesor();
	textBox3->Text = System::Convert::ToString(p->getCelularProfesor());
	textBox4->Text = p->getDireccionProfesor();
	textBox5->Text = p->getFechaDeIngreso();
	textBox6->Text = p->getCategoriaProfesor();
	textBox7->Text = System::Convert::ToString(p->getSalarioProfesor());
	textBox8->Text = p->getTituloUniversitario();
	textBox9->Text = System::Convert::ToString(p->getAntiguedadProfesor());

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada en el DataGridView
	list->MostrarAsignatura(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);
}
};
}



