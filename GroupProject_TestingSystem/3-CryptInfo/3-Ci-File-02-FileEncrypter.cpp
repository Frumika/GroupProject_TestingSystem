#include "3-Ci-File-01-Header.h"
#include "string"
#include "fstream"
#include "iostream"

using namespace std;

void fileEncrypter(string studentFile, string questionFile)
{
    ifstream students("1-WorkWithStudentsList/"+studentFile);
    ofstream studentsEncrypted("1-WorkWithStudentsList/C"+studentFile);
    ifstream questions("2-WorkWithQuestionsList/"+questionFile);
    ofstream questionsEncrypted("2-WorkWithQuestionsList/C"+questionFile);

    char line[1000];
    string data, newline;
    
    while(students.getline(line, 1000))
    {
        for(int i = 0, var = 0; line[i] != '\0'; i++)
        {
            if(line[i] == '|')
            {
                if(!data.empty())
                {
                    newline += encrypt(data);
                    data.clear();
                }
                newline += '|';
                var++;
            }
            else if(var >= 2 && var <= 5)
            {
                data += line[i];
            }
            else
            {
                newline += line[i];
            }
        }
        studentsEncrypted << newline << endl;
        newline.clear();
    }
    
    while(questions.getline(line, 1000))
    {
        for(int i = 0, var = 0; line[i] != '\0'; i++)
        {
            if(line[i] == '|')
            {
                if(!data.empty())
                {
                    newline += encrypt(data);
                    data.clear();
                }
                newline += '|';
                var++;
            }
            else if(var >= 2 && var <= 8)
            {
                data += line[i];
            }
            else
            {
                newline += line[i];
            }
        }
        questionsEncrypted << newline << endl;
        newline.clear();
    }
    students.close();
    studentsEncrypted.close();
    questions.close();
    questionsEncrypted.close();
}

void fileDecrypter(string studentFile, string questionFile)
{
    ifstream students("1-WorkWithStudentsList/C"+studentFile);
    ofstream studentsEncrypted("1-WorkWithStudentsList/R"+studentFile);
    ifstream questions("2-WorkWithQuestionsList/C"+questionFile);
    ofstream questionsEncrypted("2-WorkWithQuestionsList/R"+questionFile);

    char line[1000];
    string data, newline;
    
    while(students.getline(line, 1000))
    {
        for(int i = 0, var = 0; line[i] != '\0'; i++)
        {
            if(line[i] == '|')
            {
                if(!data.empty())
                {
                    newline += decrypt(data);
                    data.clear();
                }
                newline += '|';
                var++;
            }
            else if(var >= 2 && var <= 5)
            {
                data += line[i];
            }
            else
            {
                newline += line[i];
            }
        }
        studentsEncrypted << newline << endl;
        newline.clear();
    }
    
    while(questions.getline(line, 1000))
    {
        for(int i = 0, var = 0; line[i] != '\0'; i++)
        {
            if(line[i] == '|')
            {
                if(!data.empty())
                {
                    newline += decrypt(data);
                    data.clear();
                }
                newline += '|';
                var++;
            }
            else if(var >= 2 && var <= 8)
            {
                data += line[i];
            }
            else
            {
                newline += line[i];
            }
        }
        questionsEncrypted << newline << endl;
        newline.clear();
    }
    students.close();
    studentsEncrypted.close();
    questions.close();
    questionsEncrypted.close();
}