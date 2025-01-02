#include "SegmentTree.h"
#include <iostream>

SegmentTree::SegmentTree(int size) {
    this->size = size;
    this->tree = new SegmentTreeNode(size * 4);
    for(int i = 0; i < size * 4; i++) {
        this->tree[i] = SegmentTreeNode(0);
        this->tree[i].lazy = 0;
    }
}

SegmentTree::~SegmentTree() {
    delete[] this->tree;
}

void SegmentTree::build(int index, int left, int right) {
    if (left == right) {
        this->tree[index] = SegmentTreeNode(0);
        this->tree[index].lazy = 0;
        return;
    }

    int mid = (left + right) / 2;
    build(index * 2, left, mid);
    build(index * 2 + 1, mid + 1, right);

    pushUp(index);
}

void SegmentTree::update(int index, int left, int right, int value) {
    if (left == right) {
        this->tree[index] = SegmentTreeNode(value);
        this->tree[index].lazy = 0;
        return;
    }

    pushDown(index, left, right);
    int mid = (left + right) / 2;
    if (value <= mid) {
        update(index * 2, left, mid, value);
    } else {
        update(index * 2 + 1, mid + 1, right, value);
    }

    pushUp(index);
}

int SegmentTree::query(int index, int left, int right, int value) {
    if (left == right) {
        return this->tree[index].getValue() + this->tree[index].lazy;
    }

    pushDown(index, left, right);
    int mid = (left + right) / 2;
    if (value <= mid) {
        return query(index * 2, left, mid, value);
    } else {
        return query(index * 2 + 1, mid + 1, right, value);
    }
}

void SegmentTree::pushDown(int index, int left, int right) {
    if (this->tree[index].lazy != 0) {
        int mid = (left + right) / 2;
        this->tree[index * 2].lazy += this->tree[index].lazy;
        this->tree[index * 2 + 1].lazy += this->tree[index].lazy;
        this->tree[index].setValue(this->tree[index].getValue() + (right - left + 1) * this->tree[index].lazy);
        this->tree[index].lazy = 0;
    }
}

void SegmentTree::pushUp(int index) {
    this->tree[index].setValue(this->tree[index * 2].getValue() + this->tree[index * 2 + 1].getValue());
    this->tree[index].lazy = 0;
}

void SegmentTree::pushDown(int index) {
    if (this->tree[index].lazy != 0) {
        this->tree[index * 2].lazy += this->tree[index].lazy;
        this->tree[index * 2 + 1].lazy += this->tree[index].lazy;
        this->tree[index].lazy = 0;
    }
}

#ifdef TEST_SEGMENT_TREE
int main() {
    std::cout << "=== Segment Tree Test ===" << std::endl;
    
    // Test Constructor
    std::cout << "\nTesting Constructor:" << std::endl;
    SegmentTree segTree(10);
    
    // Test Build
    std::cout << "\nTesting Build:" << std::endl;
    segTree.build(1, 0, 9);
    
    // Test Update
    std::cout << "\nTesting Update:" << std::endl;
    std::cout << "Updating position 5 with value 5" << std::endl;
    segTree.update(1, 0, 9, 5);
    std::cout << "Updating position 3 with value 3" << std::endl;
    segTree.update(1, 0, 9, 3);
    std::cout << "Updating position 7 with value 7" << std::endl;
    segTree.update(1, 0, 9, 7);
    
    // Test Query
    std::cout << "\nTesting Query:" << std::endl;
    std::cout << "Query value at position 5: " << segTree.query(1, 0, 9, 5) << std::endl;
    std::cout << "Query value at position 3: " << segTree.query(1, 0, 9, 3) << std::endl;
    std::cout << "Query value at position 7: " << segTree.query(1, 0, 9, 7) << std::endl;
    
    // Test PushDown with range
    std::cout << "\nTesting PushDown with range:" << std::endl;
    std::cout << "Before pushDown(1, 0, 9):" << std::endl;
    std::cout << "Value at root: " << segTree.query(1, 0, 9, 0) << std::endl;
    segTree.pushDown(1, 0, 9);
    std::cout << "After pushDown(1, 0, 9):" << std::endl;
    std::cout << "Value at root: " << segTree.query(1, 0, 9, 0) << std::endl;
    
    // Test PushDown without range
    std::cout << "\nTesting PushDown without range:" << std::endl;
    std::cout << "Before pushDown(1):" << std::endl;
    std::cout << "Value at root: " << segTree.query(1, 0, 9, 0) << std::endl;
    segTree.pushDown(1);
    std::cout << "After pushDown(1):" << std::endl;
    std::cout << "Value at root: " << segTree.query(1, 0, 9, 0) << std::endl;
    
    // Test PushUp
    std::cout << "\nTesting PushUp:" << std::endl;
    std::cout << "Before pushUp(1):" << std::endl;
    std::cout << "Value at root: " << segTree.query(1, 0, 9, 0) << std::endl;
    segTree.pushUp(1);
    std::cout << "After pushUp(1):" << std::endl;
    std::cout << "Value at root: " << segTree.query(1, 0, 9, 0) << std::endl;
    
    std::cout << "\n=== Test Complete ===" << std::endl;
    
    return 0;
}
#endif
