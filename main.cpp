#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(nullptr)));

    // Step 1: Generate 40 random natural numbers
    int numbers[40];
    cout << "Generated numbers: ";
    for (int i = 0; i < 40; ++i) {
        numbers[i] = rand() % 100; // Generate a random number less than 100
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 2: Create a binary search tree (BST)
    BinaryTree tree;
    for (int i = 0; i < 40; ++i) {
        tree.insert(numbers[i]); // Insert each number into the BST
    }

    // Step 3: Create a linked list from the binary search tree
    LinkedList list;
    tree.createLinkedList(list);

    // Step 4: Traverse the binary tree and output the traversal results
    cout << "Pre-order traversal: ";
    tree.preorderTraversal();
    cout << endl;

    cout << "In-order traversal: ";
    tree.inorderTraversal();
    cout << endl;

    cout << "Post-order traversal: ";
    tree.postorderTraversal();
    cout << endl;

    return 0;
}
