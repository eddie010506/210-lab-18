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
        
    }
}