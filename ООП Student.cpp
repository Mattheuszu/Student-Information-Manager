/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Students {
    
    string name;
    int age;
    int scores[5];
    float avarage_score;
    
public:

void setName(string name)
    {
        this->name = name;
    }

void setAge(int age)
    {
    this->age = age;
    }

void setAverageScore(float average_score)
    {
        this->avarage_score = average_score;
    }
    
void setScores(int scores[])
    {
        for (int i = 0; i < 5; i++)
            this->scores[i] = scores[i];
    }
    
    string getName()
    {
        return this->name;
    }
    
    int getAge()
    {
        return this->age;
    }
    
     void getScores()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << this->scores[i] << endl;
        }
    }
    
    float getAvaragescore()
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum+=scores[i];
        }
        return sum/5.00;
    }
    
};


int main()
{
    Students student;
    
    int scores[] {1,2,3,4,5};
    
    student.setName("Nikita");
    student.setAge(35);
    
    student.setScores(scores);
    
    student.setAverageScore(5);
    student.getScores();
    cout << student.getAvaragescore() << endl;
    
    cout << student.getName() << endl;
    cout << student.getAge() << endl;
    
    return 0;
}
