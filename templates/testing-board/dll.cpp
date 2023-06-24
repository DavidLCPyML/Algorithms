#include <iostream>
using namespace std;

struct dllNode {
    dllNode* next;
    dllNode* prev;
    int val;
};

dllNode* initNode(int n) {
    dllNode* res = (dllNode*) malloc(sizeof(dllNode));
    res->val = n;
    res->next = nullptr;
    res->prev = nullptr;
    return res;
}

void append(dllNode** head, int val) {
    dllNode* node = initNode(val);
    node->next = *head;
    node->prev = nullptr;
    (*head)->prev = node;
    *head = node;
}

signed main() {
    dllNode* root = initNode(0);
    dllNode* tmp = root;
    for(int i=1;i<=10;i++)
        append(&tmp, i);

    while(tmp != nullptr) {
        dllNode* old = tmp;        
        cout << tmp->val << " ";
        tmp = tmp->next;
        free(old);
    }
    cout << endl;
    
    return 0;
}