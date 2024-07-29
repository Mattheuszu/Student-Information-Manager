/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

class Student {
    string Name;
    string LastName;
    string Gender;
    float Age;

public:

    void setName(string Name)
    {
        this->Name = Name;
    }
    
    void setLastName(string LastName)
    {
        this->LastName = LastName;
    }
    
    void setGender(string Gender)
    {
        this->Gender = Gender;
    }
    
    void setAge(float Age)
    {
        this->Age = Age;
    }
    
    string getName()
    {
        return this->Name;
    }
    
    string getLastName()
    {
        return this->LastName;
    }
    
    string getGender()
    {
        return this->Gender;
    }
    
    float getAge()
    {
        return this->Age;
    }

};
int main()
{
    vector <Student> students;
    
    for (int i = 0; i < 10; i++)
    {
        Student student;
        student.setName("Sergey");
        student.setLastName("Konashenko");
        student.setGender("Male");
        student.setAge(19);
        students.push_back(student);
    }
    for (int i = 0; i < 1; i++)
    {
        cout << "Name: " << students[i].getName() << endl;
        cout << "Last Name: " << students[i].getLastName() << endl;
        cout << "Gender: " << students[i].getGender() << endl;
        cout << "Age: " << students[i].getAge() << endl;
    }
    
    return 0;
}
