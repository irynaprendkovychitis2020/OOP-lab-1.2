#include "Students.h"
#include <iostream>
using namespace std;


void Students::SetName(string student_name)
{
    name = student_name;
}
void Students::SetLastName(string student_last_name)
{
    last_name = student_last_name;
}
void Students::SetScores(int student_scores[])
{
    for (int i = 0; i < 5; i++)
    {
        scores[i] = student_scores[i];
    }
}
void Students::CalcAverageBall()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += scores[i];
    }
    average_ball = sum / 5;
}
void Students::Badscores() const
{
    int k = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (scores[i] < 3)
            k++;

}
    cout << "неудовлетворительных оценок: " << k << endl;
}