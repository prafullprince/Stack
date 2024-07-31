#include <iostream>
using namespace std;
#include <stack>



//             stack function using from STL




// int main() {
//   // stack creation    ,
//   stack<int> st;
//   // stack insertion
//   st.push(10);
//   st.push(20);
//   st.push(30);
//   // stack size
//   cout<<st.size()<<endl;
//   // stack deletion
//   cout<<st.top()<<endl;
//   st.pop();
//   // top element
//   cout<<st.top()<<endl;
//   st.pop();
//   cout<<st.top()<<endl;
//   st.pop();
//   cout<<st.top()<<endl;
//   cout<<st.size()<<endl;
//   // stack empty
//   if(st.empty()){
//     cout<<"stack is empty"<<endl;
//   }else{
//     cout<<"stack is not empty"<<endl;
//   }
// }




//         Stack function implementation from scratch


// class Stack {
//   public:
//     int* arr;
//     int size;
//     int top;

//     Stack(int size){
//       arr = new int[size];
//       this->size = size;
//       this->top = -1;
//     }

//     void push(int data){
//       if(top>size){
//         cout<<"Stack overflow"<<endl;
//         return;
//       }
//       else{
//         top++;
//         arr[top] = data;
//       }
//     }

//     void pop(){
//       if(top == -1){
//         cout<<"Stack is empty"<<endl;
//       }
//       else{
//         top--;
//       }
//     }

//     bool isEmpty(){
//       if(top == -1){
//         return true;
//       }
//       else{
//         return false;
//       }
//     }

//     int getTop(){
//       if(top == -1){
//         cout<<"Stack is empty"<<endl;
//         return 0;
//       }
//       else{
//         return arr[top];
//       }
//     }

//     int getSize(){
//       if(top == -1){
//         cout<<"Stack is empty"<<endl;
//         return 0;
//       }
//       else{
//         return top+1;
//       }

//     }

//     void print(){
//       cout<<"top element is: "<<getTop()<<endl;
//       for(int i=0;i<getSize();i++){
//         cout<<"Stack is: "<<arr[i]<<" ";
//       }
//       cout<<endl;
//     }


// };

// int main(){
//   Stack st(5);

//   st.push(60);
//   st.print();

//   st.push(70);
//   st.print();

//   st.push(80);
//   st.print();

//   st.push(90);
//   st.print();
  
// }


//             reverse string using stack

// int main(){
//   string str = "Hello";
//   stack<char> st;

//   for(int i=0;i<str.length();i++){
//     char ch = str[i];
//     st.push(ch);
//   }

//   while(!st.empty()){
//     cout<<st.top()<<"";
//     st.pop();
//   }
//   cout<<endl;
// }



//           Get Middle elements of stack

// void getMiddleElements(stack<int> &st,int &pos){
//   // base case
//   if(pos==1){
//     cout<<st.top()<<endl;
//     return;
//   }

//   // 1 case
//   int temp = st.top();
//   st.pop();
//   pos--;
//   getMiddleElements(st,pos);

//   // backtracking
//   st.push(temp);
  
// }

// int getMiddleElementsPos(stack<int> &st){
//   int size = st.size();
//   if(st.empty()){
//     return -1;
//   }

//   int pos = 0;
//   if(size%2==0){
//     pos = size/2;
//   }
//   else{
//     pos = size/2+1;
//   }
//   return pos;
// }

// void insertAtBottom(stack<int> &st,int &elements){
//   int size = st.size();
//   // base case
//   if(st.empty()){
//     st.push(elements);
//     return;
//   }

//   // 1 case
//   int temp = st.top();
//   st.pop();
//   size--;
//   insertAtBottom(st,elements);

//   cout<<st.top()<<" ";
//   // backtracking
//   st.push(temp);
// }

// void insertAtBottom(stack<int> &st,int &temp){
//   // base case
//   if(st.empty()){
//     st.push(temp);
//     return;
//   }

//   // 1 case
//   temp = st.top();
//   st.pop();
//   insertAtBottom(st,temp);

//   // backtracking
//   st.push(temp); 
// }

// void reverseStack(stack<int> &st){
//   // base case
//   if(st.empty()){
//     return;
//   }

//   // 1 case
//   int temp = st.top();
//   st.pop();

//   // recursion
//   reverseStack(st);

//   // backtracking
//   insertAtBottom(st,temp);
  
// }



// int main(){
//   stack<int> st;

//   st.push(10);
//   st.push(20);
//   st.push(30);
//   st.push(40);
//   st.push(50);
//   st.push(60);


//   // int elements = 400;
//   // insertAtBottom(st,elements);
//   // while(!st.empty()){
//   //   cout<<st.top()<<" ";
//   //   st.pop();
//   // }
  
//   reverseStack(st);
//   while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
//   }
  

//   //          get middle and middleElements
//   // int pos = getMiddleElementsPos(st);
//   // cout<<pos<<endl;
//   // getMiddleElements(st ,pos);
// }




class Stack{
  public:
    int* arr;
    int top1;
    int top2;
    int size;

  Stack(int size){
    arr = new int[size];
    this->size = size;
    top1 = -1;
    top2 = size;
  }

  void push1(int data){
    if(top2-top1==1){
      cout<<"Stack Overflow"<<endl;
      return;
    }
    else{
      top1++;
      arr[top1] = data;
    }
  }

  void push2(int data){
    if(top2-top1==1){
      cout<<"Stack Overflow"<<endl;
      return;
    }
    else{
      top2--;
      arr[top2] = data;
    }
  }

  void pop1(){
    if(top1==-1){
      cout<<"Stack Underflow"<<endl;
      return;
    }
    else{
      arr[top1] = 0;
      top1--;
    }
  }

  void pop2(){
    if(top2==size){
      cout<<"Stack Undeflow"<<endl;
      return;
    }
    else{
      arr[top2] = 0;
      top2++;
    }
  }

  void print(){
    cout<<endl;
    cout<<"top1: "<<top1<<endl;
    cout<<"top2: "<<top2<<endl;
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};


int main(){
  Stack st(6);
  // st.print();

  st.push1(10);
  st.push2(20);
  st.print();
  
}