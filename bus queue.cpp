#include<iostream>
using namespace std;
class queue
{
    int q[20],n,front=-1,rear=-1;
public:
    void insert(int n);//enqueue
    void dequeue();
    void display();
};
void queue::insert(int n)
{
    if((front==0 && rear==20-1) || rear==front-1)
    {
        cout<<"Overflow"<<endl;
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
        q[rear]=n;
    }
    else if(rear==20-1)
    {
        rear=0;
        q[rear]=n;
    }
    else
    {
        rear++;
        q[rear]=n;
    }
}
void queue::dequeue()
{
    if(front==-1)
        cout<<"Underflow"<<endl;
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==20-1)
        front=0;
    else
        front=front+1;
}
void queue::display()
{
    int i;
    cout<<"ticket number is:"<<endl;
    if(rear>=front)
    {
        for(i=front;i<=rear;i++)
            cout<<q[i]<<endl;
    }
    else
    {
        for(i=front;i<=20-1;i++)
            cout<<q[i]<<endl;
        for(i=0;i<=rear;i++)
            cout<<q[i]<<endl;
    }
}
main()
{
    queue q1;
    int s,x,l,n,d,i,u=1;
        cout<<"passengers in bus:";
        cin>>n;
        for(i=0;i<n;i++)
        {
        q1.insert(u);
        u++;
        }
        cout<<"How many more stops to go:";
        cin>>s;
        for(x=0;x<s;x++)
        {
            cout<<"kinne utre?";
        cin>>d;
        for(i=0;i<d;i++)
    {
        q1.dequeue();
    }
    cout<<"kinne chde?";
    cin>>l;
    for(i=0;i<l;i++)
    {
        q1.insert(u);
        u++;
    }
    }
    q1.display();
}
