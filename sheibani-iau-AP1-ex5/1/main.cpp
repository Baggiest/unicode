#include <iostream>
using namespace std;

class Student
{

private:
    const int number_of_subjects = 5;

public:
    string first_name;
    string last_name;
    int student_id;
    int age;

    int score_array[5];

    float calculate_average()
    {
        int sum = 0;
        for (int i = 0; i < number_of_subjects; i++)
        {
            sum += score_array[i];
        }
        return sum / number_of_subjects;
    }
    void display()
    {
        cout << "first name: " << first_name << endl;
        cout << "last name: " << last_name << endl;
        cout << "student id: " << student_id << endl;
        cout << "age: " << age << endl;
        cout << "average score: " << calculate_average() << endl;
    }
};

int main()
{
    Student student;
    
    cout << "Enter first name: ";
    cin >> student.first_name;

    cout << "Enter last name: ";
    cin >> student.last_name;

    cout << "Enter student id: ";
    cin >> student.student_id;

    cout << "Enter age: ";
    cin >> student.age;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your score for subject " << i + 1 << ": ";
        cin >> student.score_array[i];
    }

    student.display();
}