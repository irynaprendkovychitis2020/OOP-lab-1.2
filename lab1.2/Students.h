#pragma once
#include <string>
using namespace std;

class Students
{
private:
    int scores[5];
    float average_ball;
    string name;
    string last_name;
public:
    void SetName(string name);
    string GetName()const { return name; }
    void SetLastName(string last_name);
    string GetLastName()const { return last_name; }
    void SetScores(int scores[]);
    void CalcAverageBall();
    float GetAverageBall() const { return average_ball; }
    void Badscores() const;

};


