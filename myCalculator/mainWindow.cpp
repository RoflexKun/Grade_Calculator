#include "mainWindow.h"
#include <fstream> 
#include <msclr/marshal_cppstd.h> 

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO; 

void SaveCoursesToFile(Dictionary<String^, List<int>^>^ myCourses)
{
    try
    {
        StreamWriter^ writer = gcnew StreamWriter("courses.txt");

        for each (KeyValuePair<String^, List<int>^> ^ kvp in myCourses)
        {
            writer->WriteLine(kvp->Key); 
            for each (int grade in kvp->Value)
            {
                writer->WriteLine(grade); 
            }
            writer->WriteLine(); 
        }

        writer->Close();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error saving courses: " + ex->Message);
    }
}


void LoadCoursesFromFile(Dictionary<String^, List<int>^>^ myCourses)
{
    try
    {
        myCourses->Clear(); 

        StreamReader^ reader = gcnew StreamReader("courses.txt");

        while (!reader->EndOfStream)
        {
            String^ courseName = reader->ReadLine();
            List<int>^ grades = gcnew List<int>();

            String^ line;
            while ((line = reader->ReadLine()) != nullptr && line != "")
            {
                int grade;
                if (Int32::TryParse(line, grade))
                {
                    grades->Add(grade);
                }
            }

            myCourses->Add(courseName, grades);
        }

        reader->Close();
    }
    catch (Exception^ ex)
    {
        ///MessageBox::Show("Error loading courses: " + ex->Message);
    }
}


void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Dictionary<String^, List<int>^>^ myCourses = gcnew Dictionary<String^, List<int>^>();

    LoadCoursesFromFile(myCourses);
    myCalculator::mainWindow^ form = gcnew myCalculator::mainWindow(myCourses);
    Application::Run(form);
    SaveCoursesToFile(myCourses);
}