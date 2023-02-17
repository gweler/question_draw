#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> students = {
        "1 - First", "2 - Second", "3 - Third",
        "4 - Fourth", "5 - Fifth", "6 - Sixth",
        "7 - Seventh", "8 - Eigth", "9 - Ninth",
        "10 - Tenth", "11 - Eleventh", "12 - Twelfth"};

    vector<string> sections = {"Loops", "Strings"};

    vector<vector<int> > questions = {
        {2, 2, 5, 5, 5, 6, 7},
        {1, 2}
    };

    vector<string> loops = {"for loop", "while loop", "do-while loop"};

    srand(time(NULL));

    int drawn_student = rand() % students.size();
    cout << "Drawn student: " << students[drawn_student] << endl;

    int section = rand() % questions.size();
    cout << "Section: " << sections[section] << endl;

    int question = rand() % questions[section].size();
    cout << "Question: " << (question + 1) << endl;

    int loop_type = rand() % loops.size();
    cout << "Loop type (if applicable): " << loops[loop_type];

    cout << endl;

    return 0;
}
