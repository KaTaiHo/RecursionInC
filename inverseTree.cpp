void treeInvert (Node* root) {
    if(root == nullptr) {
        return;
    }

    if (root->left == 0 && root->right == 0) {
        return;
    }

    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    if (root->left) {
        treeInvert (root->left);
    }
    if (root->right) {
        treeInvert (root->right);
    }
}

    