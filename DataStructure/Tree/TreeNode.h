#ifndef __TREE_NODE_H__
#define __TREE_NODE_H__

template <typename T>
class TreeNode {
public:
    TreeNode(T value) : value(value), left(nullptr), right(nullptr) {}
    ~TreeNode() {}

    T getValue() const { return this->value; }
    void setValue(T value) { this->value = value; }

protected:
    T value;
    TreeNode *left;
    TreeNode *right;
};

#endif