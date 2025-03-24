class node
{
private:
public:
    node* left;
    node* right;
    int value;
    node(int value, node* left=nullptr, node*right=nullptr): value(value), left(left), right(right){}
};


class binary_tree
{
private:
    node* root;
    node* ptr;  // element, if it exists, or its supposed parent, if dont

    
    bool find(int value, node *sub_root, bool last = false){
        if (sub_root == nullptr)
        {
            return false;
        }
        ptr = sub_root;
        if (value < sub_root->value)
        {
            return find(value, sub_root->left, last);
        }
        else if (value > sub_root->value)
        {
            return find(value, sub_root->right, last);
        }
        else if (last && sub_root->right!=nullptr)
        {
            return find(value, sub_root->right, last);
        }
        else
        {
            return true;
        }
        
        
    }

    int get_height(node *sub_root){
        if (sub_root==nullptr)
        {
            return 0;
        }
        
        return std::max(get_height(sub_root->left), get_height(sub_root->right))+1;
    }

    void print_preorder(node* root){
        cout << root->value << " ";
        if (root->left!=nullptr)
        {
            print_preorder(root->left);
        }
        if (root->right!=nullptr){
            print_preorder(root->right);
        }
    }
    void print_inorder(node* root){
        if (root->left!=nullptr){
            print_inorder(root->left);
        }

        cout << root->value << " ";
        
        if (root->right!=nullptr){
            print_inorder(root->right);
        }
    }
    void print_posorder(node* root){
        if (root->left!=nullptr){
            print_posorder(root->left);
        }
        if (root->right!=nullptr){
            print_posorder(root->right);
        }
        cout << root->value << " ";
    }

public:

    bool find(int value){

        return find(value, root);
    }

    void insert(int value){
        if (root == nullptr)  // empty tree
        {
            root = new node(value);
        }
        else
        {
            find(value, root, true);

            if (value < ptr->value)
            {
                ptr->left = new node(value);
            }
            else
            {
                ptr->right = new node(value);
            }
        }
        


    }

    void print_preorder(){
        if (root!=nullptr)
        {
            print_preorder(root);
        }
        cout << '\n';
    }

    void print_inorder(){
        if (root!=nullptr)
        {
            print_inorder(root);
        }
        cout << '\n';
    }

    void print_posorder(){
        if (root!=nullptr)
        {
            print_posorder(root);
        }
        cout << '\n';
    }

    int get_height(){
        return get_height(root);
    }

    binary_tree(){
        root = nullptr;
        ptr = root;
    }
};
