#include <iostream>
using namespace std;

int main()
{
    int number_of_students;

    cout << "Enter number of students: ";
    cin >> number_of_students;

    int *scores = new int[number_of_students];

    for (int i = 0; i < number_of_students; i++)
    {
        cout << "Enter the exam scores of student " << i + 1 << ": ";
        cin >> scores[i];
    }

    double average_score;
    double sum;

    for (int i = 0; i < number_of_students; i++)
    {
        sum += scores[i];
    }

    average_score = sum / number_of_students;

    cout << "Average score = " << average_score << endl;
    delete[] scores;
    scores = nullptr;

    return 0;
}
