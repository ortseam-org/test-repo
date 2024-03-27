class Node_{
    public:
        int l_data;
        Node_* l_address;

        Node_(int data_)
            : l_data(data_), l_address(nullptr)
        {}

        Node_()
            : l_data(0), l_address(nullptr)
        {}
};

class LinkedList_{
    Node_* head;
    int length_ = 0;

    public:
        LinkedList_() 
            : head(nullptr)
        {}

        void append_(int data);
        void delete_();
        void insert_at(int data, int index_);
        void delete_at(int index_);
        void print_();
};

class Stack_{
    Node_* head;
    public:
        Stack_()
            : head(nullptr)
        {}

        Stack_(Node_& newNode)
            :head(&newNode)
        {}

        void append(int data);
        int top();
        void remove();
        void view();
};