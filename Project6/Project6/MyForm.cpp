#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Pode Ser int main Ou void main
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project6::MyForm form;
	Application::Run(%form);
}


