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

    
    bool find(int value, node *sub_root){
        if (sub_root == nullptr)
        {
            return false;
        }
        ptr = sub_root;
        if (value > sub_root->value)
        {

            return find(value, sub_root->right);
        }
        else if (value < sub_root->value)
        {
            return find(value, sub_root->left);
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

    void rec_print_preorder(node* root){
        cout << root->value << " ";
        if (root->left!=nullptr)
        {
            rec_print_preorder(root->left);
        }
        if (root->right!=nullptr){
            rec_print_preorder(root->right);
        }
        
        
        
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
        
        if (!find(value)){
            if (value < ptr->value)
            {
                ptr->left = new node(value);
            }
            else if (value > ptr->value)
            {
                ptr->right = new node(value);
            }
            
        }

    }

    void print_preorder(){
        if (root!=nullptr)
        {
            rec_print_preorder(root);
        }
        
    }

    int get_height(){
        return get_height(root);
    }

    binary_tree(){
        root = nullptr;
        ptr = root;
    }
};
