//Ceil in BST

int findCeil(struct Node* root, int input) {
    // your code here
    int ans = -1;
    struct Node* temp = root;
    while(temp!=NULL){
        int data = temp->data;
        if(data == input)
            return input;
        if(data < input){
            temp = temp -> right;
        }
        else{
            temp = temp->left;
            ans = data;
        }
    }
    return ans;
}