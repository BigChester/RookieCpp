#ifndef SEGMENT_TREE_H
#define SEGMENT_TREE_H

#include "../Tree/TreeNode.h"

#define TEST_SEGMENT_TREE

class SegmentTreeNode : public TreeNode<int> {
public:
    SegmentTreeNode(int value) : TreeNode<int>(value) {}
    ~SegmentTreeNode() {}

    int lazy;
};

/**
 * @brief `Segment Tree` is a tree data structure used to store intervals or segments.
 * @details It allows querying which segments contain a given point.
 * It is composed of a segment and two children segments.
 * Each node represents an interval.
 * The root represents the whole range.
 * The leaves represent single points.
 */
class SegmentTree {
public:
    SegmentTree() : size(0), tree(nullptr) {}
    SegmentTree(int size);
    ~SegmentTree();

    void build(int index, int left, int right);
    void update(int index, int left, int right, int value);
    int query(int index, int left, int right, int value);
    void pushDown(int index, int left, int right);
    void pushUp(int index);
    void pushDown(int index);

private:
    int size;
    SegmentTreeNode *tree;
};

#endif