#include <iostream>
#include "vector"
#include "queue"
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Function to create a new node
Node *newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

// Function to insert a node in a binary search tree (BST)
void insert(Node *&root, int data)
{
    if (root == nullptr)
    {
        root = newNode(data);
        return;
    }

    if (root->left == nullptr)
    {
        insert(root->left, data);
    }
    else
    {
        insert(root->right, data);
    }
}

int sum_leaves_depth(Node *root)
{
    int answer = 0;
    int depth = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int levels = q.size();
        for (int i = 0; i < levels; ++i)
        {
            Node *node = q.front();
            q.pop();

            if (node->left == nullptr && node->right == nullptr)
            {
                answer += depth;
            }

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        depth++;
    }
    return answer;
}

int main()
{
    Node *root = nullptr;
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        insert(root, v[i]);
    }

    cout << sum_leaves_depth(root) << endl;

    return 0;
}
