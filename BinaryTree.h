#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include "LinkedList.h"

using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

    void insert(TreeNode*& node, int value) {
        if (node == nullptr) {
            node = new TreeNode(value);
            return;
        }
        if (value < node->data) {
            insert(node->left, value);
        } else {
            insert(node->right, value);
        }
    }

    void preorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }

    void inorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void postorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        cout << node->data << " ";
    }

    void createLinkedList(TreeNode* node, LinkedList& list) {
        if (node == nullptr) return;
        createLinkedList(node->left, list);
        list.insert(node->data);
        createLinkedList(node->right, list);
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        insert(root, value);
    }

    void createLinkedList(LinkedList& list) {
        createLinkedList(root, list);
    }

    void preorderTraversal() {
        preorderTraversal(root);
    }

    void inorderTraversal() {
        inorderTraversal(root);
    }

    void postorderTraversal() {
        postorderTraversal(root);
    }
};

#endif // BINARY_TREE_H
