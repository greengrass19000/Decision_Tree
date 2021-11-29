//There's nothing here
#include <bits/stdc++.h>

using namespace std;
const int Attribute = 4;


double Gini();
struct Node{
    char type;
    int x[Attribute];
    Node* left;
    Node* right;

    //Constructor
    Node(char type, int x1, int x2, int x3, int x4) {
        type = type;
        x[0] = x1;
        x[1] = x2;
        x[2] = x3;
        x[3] = x4;
    }

    Node(char type, int x[]) {
        type = type;
        for (int i = 0; i < 4; ++i) {
            this->x[i] = x[i];
        }
    }

    bool hasLeft() {
        return left != NULL;
    }

    bool hasRight() {
        return right != NULL;
    }

    char getType() {
        return type;
    }

};

vector<Node*> group[4];

struct Tree{
    Node* root;

    //constructor
    Tree() {
        root = NULL;
    }

    Tree(Node* r) {
        root = r;
    }

    bool isEmpty() {
        return root == NULL;
    }


    //Show the tree on the screen
    void ShowTree() {

    }

    void BuildTree(char *filename) {
        freopen(filename, "r", stdin);
        //example : "R,1,1,2,4"
        char ch;
        vector<int> x;
        x.resize(Attribute);
        while(cin >> ch) {
            char uselessInput;
            for (int i = 0; i < Attribute; ++i) {
                cin >> uselessInput;
                cin >> x[i];
            }
        }
        Node *tmpNode;
        tmpNode = new Node(ch, x[0], x[1], x[2], x[3]);
        //random condition
        switch (tmpNode->type) {
            case 'L' :
                group[0].push_back(tmpNode);
                break;
            case 'B' :
                group[1].push_back(tmpNode);
                break;
            case 'R' :
                group[2].push_back(tmpNode);
                break;
        }
    }
};

int main() {

}
