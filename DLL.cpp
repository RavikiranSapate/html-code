#include<iostream>
using namespace std; 

void display();
void insert_beg(int);
void insert_end(int);
void insert_mid(int,int);

typedef struct node {
    int data;
    struct node* next; 
    struct node* prev; 
};
struct node *head = NULL;



int main()
{
    int value,ch;
    do
    {
        cout<<"please enter your choice:\n\t1. Insert at begin\n\t2. insert at end\n\t3. insert at give position\n\t4. delete beginning node.\n\t5. delete ending node\n\t6. delete node at given position\n\t7. exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"please enter the value you want insert at beginning in LL : ";
                cin>>value;
                insert_beg(value);
                display();
                break;
            case 2:
                cout<<"please enter the value you want insert at end in LL : ";
                cin>>value;
                insert_end(value);
                display();
                break;               
        }

    }while(ch != 7);

}



void insert_beg(int value)
{
    node *temp;
    temp = new node();
    temp->data = value;

    if(head == NULL)
    {
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;

    }
    else
    {
        temp->prev = NULL;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insert_end(int value)
{
    node *temp,*p;
    temp = new node();
    temp->data = value; 
    if(head == NULL)
    {
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;

    }   
    else
    {
        p = head;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
        temp->next = NULL;
    }
}
void insert_mid(int value,int pos)
{
    node *temp,*p;
    temp = new node();
    temp->data = value; 
    if(head == NULL)
    {
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;

    }   
    else
    {
        p = head;
        for(int i=2;i<pos;i++)
        {
            
        }
    }
}


void display()
{
    node *ptr;  
    if(head == NULL)  
    {  
        cout<<"\nEmpty List\n";  
    }  
    else   
    {  
        cout<<"\n";
        ptr = head;  
        while(ptr != NULL)  
        {  
            cout<<"\t"<<ptr->data;  
            ptr=ptr->next;  
        }  
        cout<<"\n";
    }  
 
}


