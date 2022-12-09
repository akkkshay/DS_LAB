#include<iostream>
using namespace std;


///DECIMAL to OCTAL
// struct Stack
// {
//     int top=-1;
//     int arr[100];

// }s;
 
// int pop(){
//     int del=s.arr[s.top];
//     s.top=(s.top)-1;
//     return del;
// }

// void push(int r){
//     s.top=s.top+1;
//     s.arr[s.top]=r;
// }

// int main(){  
//    int n;
//    cin>>n;
//    while(n!=0){
//     int r=n%8;
//     push(r);
//     n=n/8;
//    }
//    while(s.top!=-1){
//    int x=pop();
//     cout<<x;
//    }
//    return 0;
// }


/////DECIMAL TO BINARY
// struct Stack
// {
//     int top=-1;
//     int arr[100];

// }s;
 
// int pop(){
//     int del=s.arr[s.top];
//     s.top=(s.top)-1;
//     return del;
// }

// void push(int r){
//     s.top=s.top+1;
//     s.arr[s.top]=r;
// }

// int main(){  
//    int n;
//    cin>>n;
//    while(n!=0){
//     int r=n%2;
//     push(r);
//     n=n/2;
//    }
//    if(s.top!=-1){
//     for(int i=s.top ; i>=0 ; i--){
//         cout<<s.arr[i];
//     }
//    }
//    return 0;
// }


/////DECIMAL TO HEXA
// struct Stack
// {
//     int top=-1;
//     int arr[100];

// }s;
 
// int pop(){
//     int del=s.arr[s.top];
//     s.top=(s.top)-1;
//     return del;
// }

// void push(int r){
//     s.top=s.top+1;
//     s.arr[s.top]=r;
// }

// int main(){  
//    int n;
//    cin>>n;
//    while(n!=0){
//     int r=n%16;
//     if(r>9){
//         if(r==10){
//             r=='A';
//             push(r);
//         }
//         if(r==11){
//             r=='B';
//             push(r);
//         }
//         if(r==12){
//             r=='C';
//             push(r);
//         }
//         if(r==13){
//             r=='D';
//             push(r);
//         }
//         if(r==14){
//             r=='E';
//             push(r);
//         }
//         if(r==15){
//             r=='F';
//             push(r);
//         }
//     }
//     else push(r);
//     n=n/16;
//    }
//    if(s.top!=-1){
//         for(int i=s.top ; i>=0 ; i--){
//         cout<<s.arr[i];
//     }
//    }
//    return 0;
// }


////DECIMAL TO ANY BASE
// struct Stack
// {
//     int top=-1;
//     int arr[100];

// }s;
 
// int pop(){
//     int del=s.arr[s.top];
//     s.top=(s.top)-1;
//     return del;
// }

// void push(int r){
//     s.top=s.top+1;
//     s.arr[s.top]=r;
// }

// int main(){  
//    int n,b;
//    cin>>n>>b;
//    while(n!=0){
//     int r=n%b;
//     push(r);
//     n=n/b;
//    }
//    while(s.top!=-1){
//     for(int i=s.top ; i>=0 ; i++){
//         cout<<s.arr[i];
//     }
//    }
//    return 0;
// }


////////
// struct Stack
// {
//     int top=-1;
//     int arr[100];

// }s;
 
// int pop(){
//     int del=s.arr[s.top];
//     s.top=(s.top)-1;
//     return del;
// }

// void push(int r){
//     s.top=s.top+1;
//     s.arr[s.top]=r;
// }

// void empty(){
//     if(s.top==0){
//         cout<<"Balanced";
//     }
//     else {
//         cout<<"UnBalanced";
//     }
// }

// int main(){  
//    char j[100];
//    int n,i=0;
//    cin>>j;
//    while(j[i]!='\0'){
    
//     if(j[i]=='(' || j[i]=='[' || j[i]=='{'){
//         push(j[i]);
//     }

//     if(j[i]==')' || j[i]==']' || j[i]=='}'){
//         if(s.top==-1){
//             cout<<"UnBalanced";
//             exit(1);
//         }

//         char x=pop();
//         if(x!=j[i]){
//             cout<<"UnBalanced";
//             exit(1);
//         }
//     }

//    }
//    return 0;
// }


// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>


// #define max 30
// int stack[max];
// int top=-1;
// void push(char a);
// char pop();
// int check(char []);
// int match(char a,char b);

// int main(){
//     char exp[30];
//     gets(exp);
//     int result=check(exp);
//     if(result)
//         printf("Valid Expression");
//     else
//         printf("Invalid Expression");
//     return 0;
// }

// int check(char exp[]){
//     char temp;
//     for(int i=0;i<strlen(exp);i++){
//         if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
//             push(exp[i]);

//         if(exp[i]=='}'||exp[i]==']'||exp[i]==')'){
//             if(top==-1)
//                 return 0;
//             else{
//                 temp=pop();
//                 if(!match(temp,exp[i]))
//                     return 0;
//             }
//         }
//     }
//     if(top==-1)
//         return 1;
//     else
//         return 0;
// }

// int match(char a,char b){
//     if(a=='['&& b==']')
//         return 1;
//     if(a=='('&& b==')')
//         return 1;
//     if(a=='{'&& b=='}')
//         return 1;
//     return 0;
// }

// char pop(){
//     if(top==-1){
//         printf("Stack Underflow");
//         exit(1);
//     }
//     return stack[top--];
// }

// void push(char a){
//     if(top==max-1){
//         printf("Stack Overflow");
//         return;
//     }
//     top+=1;
//     stack[top]=a;
// }
