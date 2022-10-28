// storing marks of students in marks greater than to less than order. if 2 students have same marks then their names are also store in dictionary order
/*
Input : 
5 <-- No of students
98
Akash
67
Yash
78
Rohit
78
Raj
98
Akash

Output:
Akash 98
Akash 98
Raj 78
Rohit 78
Yash 67
*/ 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> marks_student;   // multiset is used to store names in dictionary order
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int marks;
        string student;
        cin >> marks >> student;
        marks_student[(-1) * marks].insert(student);    // (-1) is multiplied to sort the map in reverse order --> -98 < -78 < -67
    }                                                   // now no need to reverse the for loop

    for (auto &value : marks_student)
    {
        auto &num = value.first;
        auto &students = value.second;
        for (auto &class_student : students)
        {
            cout << class_student << " " << (-1) * num << endl;     // at last (-1) is multiplied again to get marks in positive form as inputted
        }
    }
}