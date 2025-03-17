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

    
    bool rec_find(int value, node *sub_root){
        if (sub_root == nullptr)
        {
            return false;
        }
        ptr = sub_root;
        if (value > sub_root->value)
        {

            return rec_find(value, sub_root->right);
        }
        else if (value < sub_root->value)
        {
            return rec_find(value, sub_root->left);
        }
        else
        {

            return true;
        }
    }

public:

    bool find(int value){

        return rec_find(value, root);
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

    binary_tree(){
        root = nullptr;
        ptr = root;
    }
};
