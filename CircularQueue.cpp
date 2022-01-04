#include <iostream>
using namespace std;
#define n 5
class Cqueue
{
    public:
    int front=-1;
    int rear=-1;
    int q[n];
    bool is_full_Cqueue();
    bool is_empty_Cqueue();
    void AddCQ(int);
    int delCQ();
    void displayCQ();
};


bool Cqueue::is_full_Cqueue()
{
  if((rear+1)%n == front)
      return true;
  else
      return false;
}


bool Cqueue::is_empty_Cqueue()
{
  if(front == -1 && rear == -1) 
      return true;
  else
      return false;
}


void Cqueue::AddCQ(int add)
{
    if(rear== -1 && front ==-1)
    {
        rear=0;
        front=0;
        q[rear] = add; 
        
    }
    else if(is_full_Cqueue())
    {
        cout<<"Circular Queue is Full"<<endl;
    }
    else
    {
        rear = (rear + 1) % n;
        q[rear] = add; 
    }
}


int Cqueue::delCQ()
{
    int data;
  if(is_empty_Cqueue())
  {
      cout<<" Circular Queue is empty"<<endl;
      
  }
  else if(front==rear)
  {
      data=q[front];
      front=rear=-1;
  }
  else
  {
    data = q[front];
    front =(front + 1) % n;
      
  }

  return data;
}




void Cqueue::displayCQ()
{
    int i=front;
    if(is_empty_Cqueue())
    cout<<"Circular Queue is Empty"<<endl;
    else
    {
        while(i != rear)
        {
            cout<<q[i]<<" ";
            i=(i+1)%n;
        }
        cout<<q[rear]<<endl;
    }
}

int main()
{
    
    Cqueue obj;
    cout<<"Press 1 for Addition"<<endl<<"Press 2 for Deletion"<<endl<<"Press 3 to Display"<<endl<<"Press -1 to End"<<endl;
    int qt=0;
    while(qt!=-1)
        {
            cout<<"Enter Choice:";
            cin>>qt;
            int add,a;
            switch(qt)
                {
                    case 1:
                    cout<<"Enter Number to be added: ";
                    cin>>add;
                    obj.AddCQ(add);
                    break;
                    case 2:
                    a=obj.delCQ();
                    cout<<"Number deleted is: "<<a<<endl;
                    break;
                    case 3:
                    obj.displayCQ();
                    break;
                    case -1:
                    cout<<"Thank You"<<endl;
                    break;
                    default:
                    cout<<"Enter Valid Choice"<<endl;
                }
        }
           
}
