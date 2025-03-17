#include <iostream>
using namespace std;

double average(int score[], int numScores){
    int sum;
    for (int a = 1; a < numScores; a++){
        sum += score[a];
    }
    return sum / numScores;
}

string letterGrade(int score){
    if (score >= 90){
        return "A";
    } else if (score >= 80){
        return "B";
    } else if (score >= 70){
        return "C";
    } else if (score >= 60){
        return "D";
    } else{
        return "F";
    }
}
void displayResults(string name, double avg){
    string grade = letterGrade(avg);
    cout << "student: " << name << endl;
    cout  << "Average: " << avg << endl;
    cout << "Letter Grade: " << grade << endl;
}

int main(){
    int numstudents, numScores;
    string name;

        cout << "Enter number of students: ";
        cin >> numstudents;

        for (int x = 0; x < numstudents; x++){
            cout << "Enter student name: " << endl;
            cin >> name;
            cout << "Enter number of scores: "<<endl;
            cin >> numScores;

            int* scores = new int[numScores];
                for (int i = 0; i < numScores; i++){
                    cout << "Enter student scores: " << i + 1 << endl;
                    cin >> scores[i];
                }
                double avg = average(scores, numScores);
                displayResults(name, avg);
            }
    return 0;
}