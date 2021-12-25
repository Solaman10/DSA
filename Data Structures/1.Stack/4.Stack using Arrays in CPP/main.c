#include<iostream>
#include<iomanip>
using namespace std;
#define null - 1
#define max 5
//class definition
class stacks
{
private:
 int stack[max];
 int top;
public:
stacks();
void push();
void pop();
void display();
};
//constuctor
 stacks:: stacks()
 {
  top=null;
 }
 //addition of elements
 void stacks::push()
   {
    int temp;
    cout<<"\n\n\t enter the element:";
    cin>>temp;
    if(top==max-1)
     {
       cout<<"\n\n\t over flow stack is full:";
       return;
    }
      top++;
      stack[top]=temp;
cout<<"\n\n\t element"<<temp<<"is pushed in to stack";
}
  // deletion of elements
  void stacks::pop()
    {
    if(top==null)
     {
      cout<<"\n\n\t underflow stack is empty:";
      return;
          }
    cout<<"\n\n\t the popped element is:"<<stack[top];
     top--;
   }  
//display
void stacks::display()
  {
  int i;
  cout<<"\n\n\t the array elements are:";
  if(top==null)
  {
  cout<<"\n\n\t stack is empty";
  }
  for(i=top;i>null;i--)
   {
    cout<<stack[i]<<" ";
       }
}
int main()
{
int choice;
stacks stacksobj;
cout<<"\n\n\t push and pop operation of stacks using arrays";
while(1)
{
cout<<"\n\n\t MENU";
cout<<"\n\n\t  1.push    :";
cout<<"\n\n\t  2.pop     :";
cout<<"\n\n\t  3.display :";
cout<<"\n\n\t  4.exit    :";
cout<<"\n\n\t  Enter your choice:";
cin>>choice;
switch(choice)
  {
   case 1:stacksobj.push();
   break;
   case 2:stacksobj.pop();
   break;
   case 3:stacksobj.display();
   break;
   default:cout<<"bye";
   break;
  }
}
}
