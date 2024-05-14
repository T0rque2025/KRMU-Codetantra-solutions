#include <iostream>

#include <vector>

using namespace std;



// Function to calculate total marks for each subject

int totalMarks(int internalMarks, int externalMarks) {

	    return internalMarks + externalMarks;

}



// Function to check if a subject is passed or not

bool isPassed(int internalMarks, int externalMarks) {
  return externalMarks >= 26 && totalMarks(internalMarks, externalMarks) >= 40;

}



int main() {

	    vector<int> internalMarks(3);

	    vector<int> externalMarks(3);

	    int subjectsPassed = 0;



	    cout << "Enter maths, science and social internal marks (Max. marks: 30) : ";

	    for (int i = 0; i < 3; ++i) {
cin >> internalMarks[i];

		}



	    cout << "Enter maths, science and social external marks (Max. marks: 70) : ";

	    for (int i = 0; i < 3; ++i) {

			        cin >> externalMarks[i];

		}
for (int i = 0; i < 3; ++i) {

			        int total = totalMarks(internalMarks[i], externalMarks[i]);

			        cout << "External " << (i == 0 ? "maths" : (i == 1 ? "science" : "social")) << " marks = " << externalMarks[i] 

						             << " Total " << (i == 0 ? "maths" : (i == 1 ? "science" : "social")) << " marks = " << total << endl;

			        if (isPassed(internalMarks[i], externalMarks[i])) {

						            subjectsPassed++;

					}

		}



	    cout << "Number of subjects passed = " << subjectsPassed << endl;



	    return 0;

}
