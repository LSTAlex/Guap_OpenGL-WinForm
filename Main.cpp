#include "Locale"
#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ argv) {
    setlocale(LC_ALL, "rus");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    CGkontrol::MainForm form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
    return 0;
}