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


class Stack {
  public:
    int* arr;
    int size;
    int top;

    Stack(int size){
      arr = new int[size];
      this->size = size;
      this->top = -1;
    }

    void push(int data){
      if(top>size){
        cout<<"Stack overflow"<<endl;
        return;
      }
      else{
        top++;
        arr[top] = data;
      }
    }

    void pop(){
      if(top == -1){
        cout<<"Stack is empty"<<endl;
      }
      else{
        top--;
      }
      top--;
    }

    bool isEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }

    int getTop(){
      if(top == -1){
        cout<<"Stack is empty"<<endl;
        return 0;
      }
      else{
        return arr[top];
      }
    }

    int getSize(){
      if(top == -1){
        cout<<"Stack is empty"<<endl;
        return 0;
      }
      else{
        return top+1;
      }
    }

    void print(){
      cout<<"top element is: "<<getTop()<<endl;
      for(int i=0;i<getSize();i++){
        cout<<"Stack is: "<<arr[i]<<" ";
      }
      cout<<endl;
    }


};

int main(){
  Stack st(5);

  st.push(60);
  st.print();

  st.push(70);
  st.print();

  st.push(80);
  st.print();

  st.push(90);
  st.print();
  
}