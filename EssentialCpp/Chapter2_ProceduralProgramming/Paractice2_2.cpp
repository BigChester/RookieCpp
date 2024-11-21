#include <iostream>
#include <vector>
using namespace std;

void generatePentagonalSeq(vector<int> *penSeq) {
    if (!penSeq) {
        cout << "Sequence is NULL. Please check it!";
        return;
    }

    size_t n = penSeq->size(); // 提前获取固定大小，避免动态增长
    penSeq->clear();           // 清空当前 vector

    for (size_t i = 1; i <= n; i++) { // 五边形数公式通常从 i=1 开始
        penSeq->push_back(i * (3 * i - 1) / 2);
    }

    cout << "Finish generating Pentagonal sequence";
}

void checkSeq(vector<int> &seq, string &seqType) {
    cout << seqType << ":";

    for (size_t i = 0; i < seq.size(); i++) {
        cout << ' ' << seq[i];
    }
}

int main(void) {
    vector<int> penSeq(10);
    string seqType = "Pentagonal Sequence";

    generatePentagonalSeq(&penSeq);
    checkSeq(penSeq, seqType);
}

