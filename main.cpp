#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

struct ReviewNode {
    double rating;
    string comment;
    ReviewNode* next;
};
//function prototypes
void addNodeToHead(ReviewNode*& head, ReviewNode*& tail, double rating, const string& comment);
void addNodeToTail(ReviewNode*& head, ReviewNode*& tail, double rating, const string& comment);
void printListAndAverage(ReviewNode* head);
void cleanup(ReviewNode*& head);

int main() {
    //pointer settings
    ReviewNode* head = nullptr;
    ReviewNode* tail = nullptr;

    int choice = 0;
    cout << "Which linked list method should we use?" << endl;
    cout << "[1] New nodes are added at the head of the linked list" << endl;
    cout << "[2] New nodes are added at the tail of the linked list" << endl;
    cout << "Choice: ";
    cin >> choice;
    // input verification
    while (cin.fail() || (choice != 1 && choice != 2)){
        cout << "Invalid input. Please enter 1 or 2: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;    
    }
    char another = 'y';
    do {
        double rating = -1.0;
        string comment;

        // get the review rating from the user with validation
        cout << "Enter review rating 0-5: ";
        cin >> rating;
        while (cin.fail() || rating < 0 || rating > 5) {
             cout << "Invalid rating. Please enter a number between 0 and 5: ";
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
             cin >> rating;
        }

        // get the review comment
        cout << "Enter review comments: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the newline character left by cin
        getline(cin, comment);

        // add the new node based on the user's initial choice
        if (choice == 1) {
            addNodeToHead(head, tail, rating, comment);
        } else { 
            addNodeToTail(head, tail, rating, comment);
        }

        // ask if the user wants to enter another review
        cout << "Enter another review? Y/N: ";
        cin >> another;

    } while (another == 'y' || another == 'Y');

    
    printListAndAverage(head);

    
    cleanup(head);

    return 0;
}


void addNodeToTail(ReviewNode*& head, ReviewNode*& tail, double rating, const string& comment) {
    
}