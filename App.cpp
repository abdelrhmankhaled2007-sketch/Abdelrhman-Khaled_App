#include <iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;
struct Question{
    string prompt;
    string choices[4];
    int correct_answer;
};


void quiz(){
    Question questions[3] = {
        {"What is the capital of France?", {"1. Berlin", "2. Madrid", "3. Paris", "4. Rome"}, 3},
        {"What is 2 + 2?", {"1. 3", "2. 4", "3. 5", "4. 6"}, 2},
        {"What is the largest planet in our solar system?", {"1. Earth", "2. Mars", "3. Jupiter", "4. Saturn"}, 3}
    };
int correct_answers = 0;
int answer;
int questions_answered = 3;
for(int i = 0; i < questions_answered; i++) {
        cout << questions[i].prompt << endl;
        for (int j = 0; j < 4; j++) {
            cout << questions[i].choices[j] << endl;
        }
        cin >> answer;
        while(answer < 1 || answer > 4) {
    cout << "Invalid choice! Enter a number from 1 to 4: ";
    cin >> answer;
        }
        if (answer == questions[i].correct_answer) {
    cout << "Correct Answer!\n";
    correct_answers++;
}
else {
    cout << "Wrong Answer!\n";
}
    } 
    cout << "\n===== Quiz Complete =====\n";

    cout << "You got " << correct_answers << " out of " << questions_answered << " questions correct." << endl;


}
       
   


int main ( ){
quiz();

    return 0 ;
}