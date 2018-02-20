#pragma once


#include <iostream>
#include <string>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>
namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	struct livro
	{
		string titulo;
		string autor;
		string editora;
		string cota;
		string numero;
		string estado;
		livro*next;
	};
	struct livro*LL=NULL;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelBiblioteca;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	protected:

	protected:







	private: System::Windows::Forms::Button^  buttonInserir;
	private: System::Windows::Forms::Button^  buttonLevantar;
	private: System::Windows::Forms::Button^  buttonPesquisar;




	private: System::Windows::Forms::Button^  buttonRemover;
	private: System::Windows::Forms::Label^  labelOpcao;
	private: System::Windows::Forms::Label^  labelTitulo;
	private: System::Windows::Forms::Label^  labelAutor;


	private: System::Windows::Forms::TextBox^  textBoxTitulo;
	private: System::Windows::Forms::TextBox^  textBoxAutor;
	private: System::Windows::Forms::Label^  labelEditora;



	private: System::Windows::Forms::TextBox^  textBoxEditora;

	private: System::Windows::Forms::Label^  labelCota;
	private: System::Windows::Forms::TextBox^  textBoxCota;
	private: System::Windows::Forms::Label^  labelNúmero;
	private: System::Windows::Forms::TextBox^  textBoxNr;
	private: System::Windows::Forms::Button^  buttonGuardar;


	private: System::Windows::Forms::Button^  buttonVoltar;
	private: System::Windows::Forms::Button^  buttonSeguinte;
	private: System::Windows::Forms::Label^  labelVerifica;
	private: System::Windows::Forms::Label^  labelLevantar;
	private: System::Windows::Forms::Button^  buttonPesq;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  labelResultados;
	private: System::Windows::Forms::Button^  buttonRemove;
	private: System::Windows::Forms::Label^  labelRemover;
	private: System::Windows::Forms::Button^  buttonSim;
	private: System::Windows::Forms::Button^  buttonNao;
	private: System::Windows::Forms::Label^  labelAviso;








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
			this->labelBiblioteca = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonInserir = (gcnew System::Windows::Forms::Button());
			this->buttonLevantar = (gcnew System::Windows::Forms::Button());
			this->buttonPesquisar = (gcnew System::Windows::Forms::Button());
			this->buttonRemover = (gcnew System::Windows::Forms::Button());
			this->labelOpcao = (gcnew System::Windows::Forms::Label());
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->labelAutor = (gcnew System::Windows::Forms::Label());
			this->textBoxTitulo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAutor = (gcnew System::Windows::Forms::TextBox());
			this->labelEditora = (gcnew System::Windows::Forms::Label());
			this->textBoxEditora = (gcnew System::Windows::Forms::TextBox());
			this->labelCota = (gcnew System::Windows::Forms::Label());
			this->textBoxCota = (gcnew System::Windows::Forms::TextBox());
			this->labelNúmero = (gcnew System::Windows::Forms::Label());
			this->textBoxNr = (gcnew System::Windows::Forms::TextBox());
			this->buttonGuardar = (gcnew System::Windows::Forms::Button());
			this->buttonVoltar = (gcnew System::Windows::Forms::Button());
			this->buttonSeguinte = (gcnew System::Windows::Forms::Button());
			this->labelVerifica = (gcnew System::Windows::Forms::Label());
			this->labelLevantar = (gcnew System::Windows::Forms::Label());
			this->buttonPesq = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->labelResultados = (gcnew System::Windows::Forms::Label());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->labelRemover = (gcnew System::Windows::Forms::Label());
			this->buttonSim = (gcnew System::Windows::Forms::Button());
			this->buttonNao = (gcnew System::Windows::Forms::Button());
			this->labelAviso = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelBiblioteca
			// 
			this->labelBiblioteca->BackColor = System::Drawing::Color::Transparent;
			this->labelBiblioteca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelBiblioteca->ForeColor = System::Drawing::Color::Black;
			this->labelBiblioteca->Location = System::Drawing::Point(280, 16);
			this->labelBiblioteca->Name = L"labelBiblioteca";
			this->labelBiblioteca->Size = System::Drawing::Size(283, 44);
			this->labelBiblioteca->TabIndex = 0;
			this->labelBiblioteca->Text = L"Biblioteca Virtual";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(251, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(251, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"2-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(251, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"3-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(251, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"4-";
			// 
			// buttonInserir
			// 
			this->buttonInserir->Location = System::Drawing::Point(284, 67);
			this->buttonInserir->Name = L"buttonInserir";
			this->buttonInserir->Size = System::Drawing::Size(245, 23);
			this->buttonInserir->TabIndex = 8;
			this->buttonInserir->Text = L"Inserir Livro";
			this->buttonInserir->UseVisualStyleBackColor = true;
			this->buttonInserir->Click += gcnew System::EventHandler(this, &MyForm::buttonInserir_Click);
			// 
			// buttonLevantar
			// 
			this->buttonLevantar->Location = System::Drawing::Point(284, 108);
			this->buttonLevantar->Name = L"buttonLevantar";
			this->buttonLevantar->Size = System::Drawing::Size(245, 23);
			this->buttonLevantar->TabIndex = 9;
			this->buttonLevantar->Text = L"Levantar Livro";
			this->buttonLevantar->UseVisualStyleBackColor = true;
			this->buttonLevantar->Click += gcnew System::EventHandler(this, &MyForm::buttonLevantar_Click);
			// 
			// buttonPesquisar
			// 
			this->buttonPesquisar->Location = System::Drawing::Point(284, 142);
			this->buttonPesquisar->Name = L"buttonPesquisar";
			this->buttonPesquisar->Size = System::Drawing::Size(245, 23);
			this->buttonPesquisar->TabIndex = 10;
			this->buttonPesquisar->Text = L"Pesquisar Livro";
			this->buttonPesquisar->UseVisualStyleBackColor = true;
			this->buttonPesquisar->Click += gcnew System::EventHandler(this, &MyForm::buttonPesquisar_Click);
			// 
			// buttonRemover
			// 
			this->buttonRemover->Location = System::Drawing::Point(284, 178);
			this->buttonRemover->Name = L"buttonRemover";
			this->buttonRemover->Size = System::Drawing::Size(245, 23);
			this->buttonRemover->TabIndex = 14;
			this->buttonRemover->Text = L"Remover livro";
			this->buttonRemover->UseVisualStyleBackColor = true;
			this->buttonRemover->Click += gcnew System::EventHandler(this, &MyForm::buttonRemover_Click);
			// 
			// labelOpcao
			// 
			this->labelOpcao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelOpcao->Location = System::Drawing::Point(12, 20);
			this->labelOpcao->Name = L"labelOpcao";
			this->labelOpcao->Size = System::Drawing::Size(135, 23);
			this->labelOpcao->TabIndex = 15;
			this->labelOpcao->Visible = false;
			// 
			// labelTitulo
			// 
			this->labelTitulo->Location = System::Drawing::Point(12, 55);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(119, 15);
			this->labelTitulo->TabIndex = 16;
			this->labelTitulo->Text = L"Título";
			this->labelTitulo->Visible = false;
			// 
			// labelAutor
			// 
			this->labelAutor->Location = System::Drawing::Point(12, 125);
			this->labelAutor->Name = L"labelAutor";
			this->labelAutor->Size = System::Drawing::Size(135, 17);
			this->labelAutor->TabIndex = 17;
			this->labelAutor->Text = L"Autor";
			this->labelAutor->Visible = false;
			// 
			// textBoxTitulo
			// 
			this->textBoxTitulo->Location = System::Drawing::Point(12, 90);
			this->textBoxTitulo->Name = L"textBoxTitulo";
			this->textBoxTitulo->Size = System::Drawing::Size(222, 20);
			this->textBoxTitulo->TabIndex = 18;
			this->textBoxTitulo->Visible = false;
			// 
			// textBoxAutor
			// 
			this->textBoxAutor->Location = System::Drawing::Point(11, 156);
			this->textBoxAutor->Name = L"textBoxAutor";
			this->textBoxAutor->Size = System::Drawing::Size(223, 20);
			this->textBoxAutor->TabIndex = 19;
			this->textBoxAutor->Visible = false;
			// 
			// labelEditora
			// 
			this->labelEditora->Location = System::Drawing::Point(9, 188);
			this->labelEditora->Name = L"labelEditora";
			this->labelEditora->Size = System::Drawing::Size(135, 19);
			this->labelEditora->TabIndex = 20;
			this->labelEditora->Text = L"Editora";
			this->labelEditora->Visible = false;
			// 
			// textBoxEditora
			// 
			this->textBoxEditora->Location = System::Drawing::Point(11, 223);
			this->textBoxEditora->Name = L"textBoxEditora";
			this->textBoxEditora->Size = System::Drawing::Size(223, 20);
			this->textBoxEditora->TabIndex = 21;
			this->textBoxEditora->Visible = false;
			// 
			// labelCota
			// 
			this->labelCota->Location = System::Drawing::Point(9, 255);
			this->labelCota->Name = L"labelCota";
			this->labelCota->Size = System::Drawing::Size(135, 21);
			this->labelCota->TabIndex = 22;
			this->labelCota->Text = L"Cota";
			this->labelCota->Visible = false;
			// 
			// textBoxCota
			// 
			this->textBoxCota->Location = System::Drawing::Point(11, 291);
			this->textBoxCota->Name = L"textBoxCota";
			this->textBoxCota->Size = System::Drawing::Size(223, 20);
			this->textBoxCota->TabIndex = 23;
			this->textBoxCota->Visible = false;
			// 
			// labelNúmero
			// 
			this->labelNúmero->Location = System::Drawing::Point(9, 324);
			this->labelNúmero->Name = L"labelNúmero";
			this->labelNúmero->Size = System::Drawing::Size(135, 21);
			this->labelNúmero->TabIndex = 24;
			this->labelNúmero->Text = L"Número";
			this->labelNúmero->Visible = false;
			// 
			// textBoxNr
			// 
			this->textBoxNr->Location = System::Drawing::Point(11, 363);
			this->textBoxNr->Name = L"textBoxNr";
			this->textBoxNr->Size = System::Drawing::Size(223, 20);
			this->textBoxNr->TabIndex = 25;
			this->textBoxNr->Visible = false;
			// 
			// buttonGuardar
			// 
			this->buttonGuardar->Location = System::Drawing::Point(25, 414);
			this->buttonGuardar->Name = L"buttonGuardar";
			this->buttonGuardar->Size = System::Drawing::Size(106, 23);
			this->buttonGuardar->TabIndex = 26;
			this->buttonGuardar->Text = L"Guardar";
			this->buttonGuardar->UseVisualStyleBackColor = true;
			this->buttonGuardar->Visible = false;
			this->buttonGuardar->Click += gcnew System::EventHandler(this, &MyForm::buttonGuardar_Click);
			// 
			// buttonVoltar
			// 
			this->buttonVoltar->Location = System::Drawing::Point(163, 414);
			this->buttonVoltar->Name = L"buttonVoltar";
			this->buttonVoltar->Size = System::Drawing::Size(106, 23);
			this->buttonVoltar->TabIndex = 29;
			this->buttonVoltar->Text = L"Voltar atrás";
			this->buttonVoltar->UseVisualStyleBackColor = true;
			this->buttonVoltar->Visible = false;
			this->buttonVoltar->Click += gcnew System::EventHandler(this, &MyForm::buttonVoltar_Click);
			// 
			// buttonSeguinte
			// 
			this->buttonSeguinte->Location = System::Drawing::Point(25, 414);
			this->buttonSeguinte->Name = L"buttonSeguinte";
			this->buttonSeguinte->Size = System::Drawing::Size(106, 23);
			this->buttonSeguinte->TabIndex = 30;
			this->buttonSeguinte->Text = L"Seguinte";
			this->buttonSeguinte->UseVisualStyleBackColor = true;
			this->buttonSeguinte->Visible = false;
			this->buttonSeguinte->Click += gcnew System::EventHandler(this, &MyForm::buttonSeguinte_Click);
			// 
			// labelVerifica
			// 
			this->labelVerifica->ForeColor = System::Drawing::Color::Red;
			this->labelVerifica->Location = System::Drawing::Point(281, 265);
			this->labelVerifica->Name = L"labelVerifica";
			this->labelVerifica->Size = System::Drawing::Size(245, 23);
			this->labelVerifica->TabIndex = 31;
			this->labelVerifica->Visible = false;
			// 
			// labelLevantar
			// 
			this->labelLevantar->ForeColor = System::Drawing::Color::Red;
			this->labelLevantar->Location = System::Drawing::Point(281, 288);
			this->labelLevantar->Name = L"labelLevantar";
			this->labelLevantar->Size = System::Drawing::Size(245, 23);
			this->labelLevantar->TabIndex = 32;
			this->labelLevantar->Visible = false;
			// 
			// buttonPesq
			// 
			this->buttonPesq->Location = System::Drawing::Point(25, 414);
			this->buttonPesq->Name = L"buttonPesq";
			this->buttonPesq->Size = System::Drawing::Size(106, 23);
			this->buttonPesq->TabIndex = 33;
			this->buttonPesq->Text = L"Pesquisar";
			this->buttonPesq->UseVisualStyleBackColor = true;
			this->buttonPesq->Visible = false;
			this->buttonPesq->Click += gcnew System::EventHandler(this, &MyForm::buttonPesq_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(122, 68);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(600, 277);
			this->listBox1->TabIndex = 34;
			this->listBox1->Visible = false;
			// 
			// labelResultados
			// 
			this->labelResultados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelResultados->ForeColor = System::Drawing::Color::Red;
			this->labelResultados->Location = System::Drawing::Point(117, 30);
			this->labelResultados->Name = L"labelResultados";
			this->labelResultados->Size = System::Drawing::Size(397, 30);
			this->labelResultados->TabIndex = 35;
			this->labelResultados->Text = L"Resultados da pesquisa:";
			this->labelResultados->Visible = false;
			// 
			// buttonRemove
			// 
			this->buttonRemove->Location = System::Drawing::Point(25, 414);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(106, 23);
			this->buttonRemove->TabIndex = 36;
			this->buttonRemove->Text = L"Remover";
			this->buttonRemove->UseVisualStyleBackColor = true;
			this->buttonRemove->Visible = false;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::buttonRemove_Click);
			// 
			// labelRemover
			// 
			this->labelRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRemover->ForeColor = System::Drawing::Color::Black;
			this->labelRemover->Location = System::Drawing::Point(202, 113);
			this->labelRemover->Name = L"labelRemover";
			this->labelRemover->Size = System::Drawing::Size(436, 180);
			this->labelRemover->TabIndex = 37;
			this->labelRemover->Visible = false;
			this->labelRemover->Click += gcnew System::EventHandler(this, &MyForm::labelRemover_Click);
			// 
			// buttonSim
			// 
			this->buttonSim->Location = System::Drawing::Point(284, 304);
			this->buttonSim->Name = L"buttonSim";
			this->buttonSim->Size = System::Drawing::Size(106, 23);
			this->buttonSim->TabIndex = 38;
			this->buttonSim->Text = L"Sim";
			this->buttonSim->UseVisualStyleBackColor = true;
			this->buttonSim->Visible = false;
			this->buttonSim->Click += gcnew System::EventHandler(this, &MyForm::buttonSim_Click);
			// 
			// buttonNao
			// 
			this->buttonNao->Location = System::Drawing::Point(457, 304);
			this->buttonNao->Name = L"buttonNao";
			this->buttonNao->Size = System::Drawing::Size(106, 23);
			this->buttonNao->TabIndex = 39;
			this->buttonNao->Text = L"Não";
			this->buttonNao->UseVisualStyleBackColor = true;
			this->buttonNao->Visible = false;
			this->buttonNao->Click += gcnew System::EventHandler(this, &MyForm::buttonNao_Click);
			// 
			// labelAviso
			// 
			this->labelAviso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAviso->Location = System::Drawing::Point(201, 76);
			this->labelAviso->Name = L"labelAviso";
			this->labelAviso->Size = System::Drawing::Size(245, 29);
			this->labelAviso->TabIndex = 40;
			this->labelAviso->Text = L"Deseja remover este livro\?";
			this->labelAviso->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 459);
			this->Controls->Add(this->labelAviso);
			this->Controls->Add(this->buttonNao);
			this->Controls->Add(this->buttonSim);
			this->Controls->Add(this->labelRemover);
			this->Controls->Add(this->buttonRemove);
			this->Controls->Add(this->labelResultados);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->buttonPesq);
			this->Controls->Add(this->labelLevantar);
			this->Controls->Add(this->labelVerifica);
			this->Controls->Add(this->buttonSeguinte);
			this->Controls->Add(this->buttonVoltar);
			this->Controls->Add(this->buttonGuardar);
			this->Controls->Add(this->textBoxNr);
			this->Controls->Add(this->labelNúmero);
			this->Controls->Add(this->textBoxCota);
			this->Controls->Add(this->labelCota);
			this->Controls->Add(this->textBoxEditora);
			this->Controls->Add(this->labelEditora);
			this->Controls->Add(this->textBoxAutor);
			this->Controls->Add(this->textBoxTitulo);
			this->Controls->Add(this->labelAutor);
			this->Controls->Add(this->labelTitulo);
			this->Controls->Add(this->labelOpcao);
			this->Controls->Add(this->buttonRemover);
			this->Controls->Add(this->buttonPesquisar);
			this->Controls->Add(this->buttonLevantar);
			this->Controls->Add(this->buttonInserir);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelBiblioteca);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		string letrasMaiusculas(string palavra)
		{
			int index = 0;
			while (index < palavra.size())
			{

				palavra[index] = toupper(palavra[index]);

				index++;
			}

			return palavra;
		}


		struct livro*inserir(struct livro*LL)
		{
			struct livro*newLivro = new livro;
			newLivro->next = NULL;
			struct livro*aux = LL;
			newLivro->titulo=letrasMaiusculas(newLivro->titulo= msclr::interop::marshal_as<std::string>(textBoxTitulo->Text));
			newLivro->autor=letrasMaiusculas(newLivro->autor = msclr::interop::marshal_as<std::string>(textBoxAutor->Text));
			newLivro->editora=letrasMaiusculas(newLivro->editora = msclr::interop::marshal_as<std::string>(textBoxEditora->Text));
			newLivro->cota=letrasMaiusculas(newLivro->cota = msclr::interop::marshal_as<std::string>(textBoxCota->Text));
			newLivro->numero=letrasMaiusculas(newLivro->numero = msclr::interop::marshal_as<std::string>(textBoxNr->Text));
			newLivro->estado=letrasMaiusculas(newLivro->estado = "NA PARTELEIRA");
			if (LL == NULL)
			{
				return newLivro;
			}
			else
			{
				while (aux->next != NULL)
				{
					aux = aux->next;
				}
				aux->next = newLivro;
				newLivro->next = NULL;
			}
			return LL;
		}


		struct livro*levantarLivro(struct livro*LL)
		{
			struct livro*aux = LL;
			string nr= msclr::interop::marshal_as<std::string>(textBoxNr->Text);
			while (aux != NULL)
			{
				if (nr.compare(aux->numero) == 0)
				{
					aux->estado = "LIVRO A SER UTILIZADO";
					labelLevantar->Visible = true;
					labelLevantar->Text = "Livro marcado como levantado!";
					return LL;
				}
				aux = aux->next;
			}
			labelLevantar->Visible = true;
			labelLevantar->Text = "Livro não encontrado!";
			return LL;
		}


		void pesquisar(struct livro*LL)
		{
			struct livro*aux = LL;
			string vazia;
			string titulo = letrasMaiusculas(msclr::interop::marshal_as<std::string>(textBoxTitulo->Text));
			string autor= letrasMaiusculas(msclr::interop::marshal_as<std::string>(textBoxAutor->Text));
			string editora = letrasMaiusculas(msclr::interop::marshal_as<std::string>(textBoxEditora->Text));
			string cota = letrasMaiusculas(msclr::interop::marshal_as<std::string>(textBoxCota->Text));
			string nr = letrasMaiusculas(msclr::interop::marshal_as<std::string>(textBoxNr->Text));
			bool estado1 = true;
			while (aux != NULL)
			{
				if (((titulo.compare(aux->titulo) == 0) && (vazia.compare(titulo)!=0)) || ((autor.compare(aux->autor) == 0) && (vazia.compare(autor)!=0)) || ((editora.compare(aux->editora) == 0) && (vazia.compare(editora)!=0)) || ((cota.compare(aux->cota) == 0) && (vazia.compare(cota)!=0)) || ((nr.compare(aux->numero) == 0) && (vazia.compare(nr)!=0)))
				{
					labelResultados->Visible = true;
					labelResultados->Text = "Resultados da pesquisa: ";
					listBox1->Visible = true;
					buttonVoltar->Visible = true;
					listBox1->Items->Add("Título: "+ gcnew String(aux->titulo.c_str()));
					listBox1->Items->Add("Autor: "+ gcnew String(aux->autor.c_str()));
					listBox1->Items->Add("Editora: "+ gcnew String(aux->editora.c_str()));
					listBox1->Items->Add("Cota: "+ gcnew String(aux->cota.c_str()));
					listBox1->Items->Add("Número: "+ gcnew String(aux->numero.c_str()));
					listBox1->Items->Add("Estado: "+ gcnew String(aux->estado.c_str()));
					listBox1->Items->Add("");
					estado1 = false;
				}
				aux = aux->next;
			}
			if (estado1 == true)
			{
				labelResultados->Visible = true;
				labelResultados->Text = "Nenhum resultado encontrado!";
				buttonVoltar->Visible = true;
			}
		}


		struct livro*PesquisaNr(struct livro*LL)
		{
			struct livro*aux = LL;
			string nr = msclr::interop::marshal_as<std::string>(textBoxNr->Text);
			while (aux != NULL) 
			{
				if (nr.compare(aux->numero) == 0)
				{
					labelRemover->Text= "Título: " + gcnew String(aux->titulo.c_str()) + "\n" + "Autor: " + gcnew String(aux->autor.c_str()) + "\n" + "Editora: " + gcnew String(aux->editora.c_str()) + "\n" + "Cota: " + gcnew String(aux->cota.c_str()) + "\n"+ "Número: " + gcnew String(aux->numero.c_str()) + "\n"+ "Estado: " + gcnew String(aux->estado.c_str()) + "\n";
					return LL;
				}
				aux = aux->next;
			}
			labelAviso->Visible = false;
			buttonSim->Visible = false;
			buttonNao->Visible = false;
			buttonVoltar->Visible = true;
			labelResultados->Visible = true;
			labelResultados->Text = "Nenhum resultado encontrado!";
			return LL;
		}


		struct livro*remover(struct livro*LL)
		{
			struct livro*aux = LL;
			struct livro*anterior = LL;
			struct livro*seguinte = anterior->next;
			string nr = msclr::interop::marshal_as<std::string>(textBoxNr->Text);
			if (LL == NULL)
			{
				labelLevantar->Visible = true;
				labelLevantar->Text = "Nenhum resultado encontrado para esse número!";
				return LL;
			}
			if (anterior->numero.compare(nr)==0)
			{
				delete anterior;
				LL = seguinte;
				labelLevantar->Visible = true;
				labelLevantar->Text = "Livro removido com sucesso!";
				return LL;
			}
			else
			{
				while (seguinte != NULL)
				{
					if (seguinte->numero.compare(nr) == 0)
					{
						anterior->next = seguinte->next;
						delete seguinte;
						labelLevantar->Visible = true;
						labelLevantar->Text = "Livro removido com sucesso!";
						return LL;
					}
					anterior = seguinte;
					seguinte = seguinte->next;
				}
			}
			labelLevantar->Visible = true;
			labelLevantar->Text = "Nenhum livro encontrado para esse número!";
			return LL;
		}

		void guardarDadosTxt(struct livro*LL)
		{
			string vazia;
			ofstream ficheiro("livro.txt");
			struct livro*aux = LL;
			while (aux != NULL)
			{
				ficheiro << aux->titulo << endl;
				ficheiro << aux->autor << endl;
				ficheiro << aux->editora << endl;
				ficheiro << aux->cota << endl;
				ficheiro << aux->numero << endl;
				ficheiro << aux->estado << endl;

				aux = aux->next;

			}
			ficheiro.close();
		}
#pragma endregion
		
	private: System::Void buttonInserir_Click(System::Object^  sender, System::EventArgs^  e) {
		
		labelBiblioteca->Visible = false;
		label1->Visible = false;
		buttonInserir->Visible = false;
		label2->Visible = false;
		buttonLevantar->Visible = false;
		label3->Visible = false;
		buttonPesquisar->Visible = false;
		label4->Visible = false;
		buttonRemover->Visible = false;
		labelOpcao->Visible = true;
		labelOpcao->Text = "Inserir livro:";
		labelTitulo->Visible = true;
		textBoxTitulo->Visible = true;
		textBoxTitulo->Text = "";
		labelAutor->Visible = true;
		textBoxAutor->Visible = true;
		textBoxAutor->Text = "";
		labelEditora->Visible = true;
		textBoxEditora->Visible = true;
		textBoxEditora->Text = "";
		labelCota->Visible = true;
		textBoxCota->Visible = true;
		textBoxCota->Text = "";
		labelNúmero->Visible = true;
		textBoxNr->Visible = true;
		textBoxNr->Text = "";
		buttonGuardar->Visible = true;
		buttonVoltar->Visible = true;
		buttonSeguinte->Visible = false;
		labelVerifica->Visible = false;
		labelLevantar->Visible = false;
		buttonPesq->Visible = false;
		labelResultados->Visible = false;
		listBox1->Visible = false;
		buttonRemove->Visible = false;
		labelAviso->Visible = false;
		labelRemover->Visible = false;
		buttonSim->Visible = false;
		buttonNao->Visible = false;
	}
			 
private: System::Void buttonGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
	
	LL = inserir(LL);

	labelBiblioteca->Visible = true;
	label1->Visible = true;
	buttonInserir->Visible = true;
	label2->Visible = true;
	buttonLevantar->Visible = true;
	label3->Visible = true;
	buttonPesquisar->Visible = true;
	label4->Visible = true;
	buttonRemover->Visible = true;
	labelOpcao->Visible = false;
	labelTitulo->Visible = false;
	textBoxTitulo->Visible = false;
	labelAutor->Visible = false;
	textBoxAutor->Visible = false;
	labelEditora->Visible = false;
	textBoxEditora->Visible = false;
	labelCota->Visible = false;
	textBoxCota->Visible = false;
	labelNúmero->Visible = false;
	textBoxNr->Visible = false;
	buttonGuardar->Visible = false;
	buttonVoltar->Visible = false;
	buttonSeguinte->Visible = false;
	labelVerifica->Visible = true;
	labelLevantar->Visible = false;
	labelVerifica->Text = "Livro inserido com sucesso!";
	buttonPesq->Visible = false;
	labelResultados->Visible = false;
	listBox1->Visible = false;
	buttonRemove->Visible = false;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
	guardarDadosTxt(LL);
}
private: System::Void buttonVoltar_Click(System::Object^  sender, System::EventArgs^  e) {

	labelBiblioteca->Visible = true;
	label1->Visible = true;
	buttonInserir->Visible = true;
	label2->Visible = true;
	buttonLevantar->Visible = true;
	label3->Visible = true;
	buttonPesquisar->Visible = true;
	label4->Visible = true;
	buttonRemover->Visible = true;
	labelOpcao->Visible = false;
	labelTitulo->Visible = false;
	textBoxTitulo->Visible = false;
	labelAutor->Visible = false;
	textBoxAutor->Visible = false;
	labelEditora->Visible = false;
	textBoxEditora->Visible = false;
	labelCota->Visible = false;
	textBoxCota->Visible = false;
	labelNúmero->Visible = false;
	textBoxNr->Visible = false;
	buttonGuardar->Visible = false;
	buttonVoltar->Visible = false;
	buttonSeguinte->Visible = false;
	labelVerifica->Visible = false;
	labelLevantar->Visible = false;
	buttonPesq->Visible = false;
	labelResultados->Visible = false;
	listBox1->Visible = false;
	buttonRemove->Visible = false;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
}
private: System::Void buttonLevantar_Click(System::Object^  sender, System::EventArgs^  e) {

	labelBiblioteca->Visible = false;
	label1->Visible = false;
	buttonInserir->Visible = false;
	label2->Visible = false;
	buttonLevantar->Visible = false;
	label3->Visible = false;
	buttonPesquisar->Visible = false;
	label4->Visible = false;
	buttonRemover->Visible = false;
	labelOpcao->Visible = true;
	labelOpcao->Text = "Levantar livro:";
	labelNúmero->Visible = true;
	textBoxNr->Visible = true;
	textBoxNr->Text = "";
	buttonGuardar->Visible = false;
	buttonSeguinte->Visible = true;
	buttonVoltar->Visible = true;
	labelVerifica->Visible = false;
	labelLevantar->Visible = false;
	buttonPesq->Visible = false;
	labelResultados->Visible = false;
	listBox1->Visible = false;
	buttonRemove->Visible = false;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
}
private: System::Void buttonSeguinte_Click(System::Object^  sender, System::EventArgs^  e) {
	
	LL = levantarLivro(LL);

	labelBiblioteca->Visible = true;
	label1->Visible = true;
	buttonInserir->Visible = true;
	label2->Visible = true;
	buttonLevantar->Visible = true;
	label3->Visible = true;
	buttonPesquisar->Visible = true;
	label4->Visible = true;
	buttonRemover->Visible = true;
	labelNúmero->Visible = false;
	textBoxNr->Visible = false;
	buttonGuardar->Visible = false;
	buttonVoltar->Visible = false;
	buttonSeguinte->Visible = false;
	labelVerifica->Visible = false;
	buttonPesq->Visible = false;
	labelResultados->Visible = false;
	listBox1->Visible = false;
	buttonRemove->Visible = false;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
	labelOpcao->Visible = false;
}
private: System::Void buttonPesquisar_Click(System::Object^  sender, System::EventArgs^  e) {
	labelBiblioteca->Visible = false;
	label1->Visible = false;
	buttonInserir->Visible = false;
	label2->Visible = false;
	buttonLevantar->Visible = false;
	label3->Visible = false;
	buttonPesquisar->Visible = false;
	label4->Visible = false;
	buttonRemover->Visible = false;
	labelOpcao->Visible = true;
	labelOpcao->Text = "Pesquisar livro:";
	labelTitulo->Visible = true;
	textBoxTitulo->Visible = true;
	textBoxTitulo->Text = "";
	labelAutor->Visible = true;
	textBoxAutor->Visible = true;
	textBoxAutor->Text = "";
	labelEditora->Visible = true;
	textBoxEditora->Visible = true;
	textBoxEditora->Text = "";
	labelCota->Visible = true;
	textBoxCota->Visible = true;
	textBoxCota->Text = "";
	labelNúmero->Visible = true;
	textBoxNr->Visible = true;
	textBoxNr->Text = "";
	buttonGuardar->Visible = true;
	buttonVoltar->Visible = true;
	buttonSeguinte->Visible = false;
	labelVerifica->Visible = false;
	labelLevantar->Visible = false;
	buttonPesq->Visible = true;
	buttonGuardar->Visible = false;
	labelResultados->Visible = false;
	listBox1->Visible = false;
	buttonRemove->Visible = false;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
}
private: System::Void buttonPesq_Click(System::Object^  sender, System::EventArgs^  e) {

	labelBiblioteca->Visible = true;
	label1->Visible = true;
	buttonInserir->Visible = true;
	label2->Visible = true;
	buttonLevantar->Visible = true;
	label3->Visible = true;
	buttonPesquisar->Visible = true;
	label4->Visible = true;
	buttonRemover->Visible = true;
	labelOpcao->Visible = false;
	labelTitulo->Visible = false;
	textBoxTitulo->Visible = false;
	labelAutor->Visible = false;
	textBoxAutor->Visible = false;
	labelEditora->Visible = false;
	textBoxEditora->Visible = false;
	labelCota->Visible = false;
	textBoxCota->Visible = false;
	labelNúmero->Visible = false;
	textBoxNr->Visible = false;
	buttonGuardar->Visible = false;
	buttonVoltar->Visible = false;
	buttonSeguinte->Visible = false;
	labelVerifica->Visible = false;
	labelLevantar->Visible = false;
	buttonPesq->Visible = false;
	labelResultados->Visible = false;
	labelBiblioteca->Visible = false;
	label1->Visible = false;
	buttonInserir->Visible = false;
	label2->Visible = false;
	buttonLevantar->Visible = false;
	label3->Visible = false;
	buttonPesquisar->Visible = false;
	label4->Visible = false;
	buttonRemover->Visible = false;
	buttonVoltar->Visible = true;
	buttonRemove->Visible = false;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
	listBox1->Items->Clear();
	pesquisar(LL);
}
private: System::Void buttonRemover_Click(System::Object^  sender, System::EventArgs^  e) {
	labelBiblioteca->Visible = false;
	label1->Visible = false;
	buttonInserir->Visible = false;
	label2->Visible = false;
	buttonLevantar->Visible = false;
	label3->Visible = false;
	buttonPesquisar->Visible = false;
	label4->Visible = false;
	buttonRemover->Visible = false;
	labelOpcao->Visible = true;
	labelOpcao->Text = "Remover livro:";
	labelNúmero->Visible = true;
	textBoxNr->Visible = true;
	textBoxNr->Text = "";
	buttonGuardar->Visible = false;
	buttonSeguinte->Visible = true;
	buttonVoltar->Visible = true;
	labelVerifica->Visible = false;
	labelLevantar->Visible = false;
	buttonPesq->Visible = false;
	labelResultados->Visible = false;
	listBox1->Visible = false;
	buttonRemove->Visible = true;
	buttonSeguinte->Visible = false;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
}
private: System::Void buttonRemove_Click(System::Object^  sender, System::EventArgs^  e) {
	labelNúmero->Visible = false;
	textBoxNr->Visible = false;
	buttonGuardar->Visible = false;
	buttonVoltar->Visible = false;
	buttonSeguinte->Visible = false;
	labelVerifica->Visible = false;
	labelLevantar->Visible = false;
	buttonPesq->Visible = false;
	labelResultados->Visible = false;
	listBox1->Visible = false;
	buttonRemove->Visible = false;
	labelAviso->Visible = true;
	labelRemover->Visible = true;
	buttonSim->Visible = true;
	buttonNao->Visible = true;
	labelOpcao->Visible = false;
	LL = PesquisaNr(LL);
	
}
private: System::Void buttonNao_Click(System::Object^  sender, System::EventArgs^  e) {
	labelBiblioteca->Visible = true;
	label1->Visible = true;
	buttonInserir->Visible = true;
	label2->Visible = true;
	buttonLevantar->Visible = true;
	label3->Visible = true;
	buttonPesquisar->Visible = true;
	label4->Visible = true;
	buttonRemover->Visible = true;
	labelAviso->Visible = false;
	labelRemover->Visible = false;
	buttonSim->Visible = false;
	buttonNao->Visible = false;
	labelOpcao->Visible = false;
}
	private: System::Void buttonSim_Click(System::Object^  sender, System::EventArgs^  e) {
		labelBiblioteca->Visible = true;
		label1->Visible = true;
		buttonInserir->Visible = true;
		label2->Visible = true;
		buttonLevantar->Visible = true;
		label3->Visible = true;
		buttonPesquisar->Visible = true;
		label4->Visible = true;
		buttonRemover->Visible = true;
		labelAviso->Visible = false;
		labelRemover->Visible = false;
		buttonSim->Visible = false;
		buttonNao->Visible = false;
		labelOpcao->Visible = false;
		LL = remover(LL);

	}
private: System::Void labelRemover_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}
