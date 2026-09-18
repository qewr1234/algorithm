#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student {
public:
    string name;
    int height, weight;

    Student(string name = "", int height = 0, int weight = 0) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp(Student a, Student b) {
    return a.height < b.height;
}

int main() {
    int N = 0;
    cin >> N;
    Student student[N];

    for(int i = 0; i < N; i++) {
        string name;
        int height, weight;

        cin >> name >> height >> weight;

        student[i] = Student(name, height, weight);
    }
    
    sort(student, student + N, cmp);

    for(int i = 0; i < N; i++) {
        cout << student[i].name << " "
             << student[i].height << " "
             << student[i].weight << endl;
    }

    return 0;
}