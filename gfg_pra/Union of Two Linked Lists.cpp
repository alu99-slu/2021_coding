#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node* next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        printList(makeUnion(first,second));
    }
    return 0;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    Node* t1,*t2;
    t1=head1;
    t2=head2;

    set<int> s;

    while(t1!=NULL){
        s.insert(t1->data);
        t1=t1->next;
    }

    while(t2!=NULL){
        s.insert(t2->data);
        t2=t2->next;
    }

    auto it = s.begin();
    Node* head = new Node(*it);
    Node* temp = head;
    it++;

    for(;it!=s.end();it++){
        // cout<<*it<<" ";
        temp->next= new Node(*it);
        temp=temp->next;
    }

    
   // cout<<endl;

    return head;
}