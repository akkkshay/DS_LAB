// #include<iostream>
// using namespace std;
// #define SIZE 5

// struct Stack{
//     int front;
//     int rear;
//     int arr[SIZE];

// }q;

// void initialize(){
//     q.front=0;
//     q.rear=0;
// }

// bool isEmpty(){
//     if(q.front==q.rear) return true;
//     else return false;
// }

// void enQueue(int ele){
//     if(q.rear==SIZE) cout<<"Queue Is Full"<<endl;
//     else{
//         q.arr[q.rear]=ele;
//         q.rear++;
//     }
// }

// int deQueue(){
//     if(q.front==q.rear) cout<<"Queue Underflows";
//     else{
//         int x=q.arr[q.front];
//         q.arr[q.front]=-1;
//         q.front++;
//         if(q.front==q.rear){
//             q.front=0;
//             q.rear=0;
//         }
//         return x;
//     }
// }

// int main(){
//     initialize();
//     enQueue(1);
//     enQueue(2);
//     enQueue(3);
//     enQueue(4);
//     enQueue(5);
//     enQueue(6);
//     int x = deQueue();
//     int y = deQueue();
//     cout<<"First Element Removed is : "<<x<<endl;
//     cout<<"Second Element Removed is : "<<y<<endl;
// }


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//


// CIRCULAR QUEUE

// #include<bits/stdc++.h>
// using namespace std;
// # define SIZE 5

// struct CQueue{
//     int arr[SIZE];
//     int rear;
//     int front;
// }cq;

// void Initialize(){
//     cq.front=0;
//     cq.rear=0;
// }

// void enQueue(int x){
//     if(cq.front==(cq.rear+1)%cq.rear){
//         cout<<"Queue Overflows";
//     }
//     cq.rear=(cq.rear+1) % SIZE;
//     cq.arr[cq.rear]=x;
// }

// int deletion(){
//     int x;
//     if(cq.rear==cq.front){
//         cout<<"Queue Underflows";
//     }
//     cq.front=(cq.front+1) % SIZE;
//     x=cq.arr[cq.front];
//     return x;
// }

// void display(){
//     for(int i=cq.front+1;i<=cq.rear;i++){
//         cout<<cq.arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     Initialize();
//     enQueue(1);
//     enQueue(2);
//     enQueue(3);
//     enQueue(4);
//     enQueue(5);
//     display();
//     cout<<"Deleted Element Is : "<<deletion();
// }


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//



// #include<bits/stdc++.h>
// typedef long long int ll;
// using namespace std;
// #define n 10
// struct Dequeue
// {
//     int a[n];
//     int f,r;

// }dq;

// void initialize(){
//   dq.f=-1;
//   dq.r=0;
// }

// bool isFull(){
//     return((dq.f == 0 && dq.r == n - 1) || dq.f == dq.r + 1);
// }

// bool isEmpty(){
//   return (dq.f == -1);
// }

// void insertfront(int key){
//     if (isFull()) {
//         cout << "Overflow"
//         << endl;
//         return;
//     }

//     if (dq.f == -1) {
//         dq.f = 0;
//         dq.r = 0;
//     }

//     else if (dq.f == 0) dq.f = n - 1;

//     else dq.f = dq.f - 1;

//     dq.a[dq.f] = key;
// }

// void insertrear(int key)
// {
//         if (isFull()) {
//         cout <<" Overflow"<< endl;
//         return;
//     }

//     if (dq.f == -1) {
//         dq.f = 0;
//         dq.r = 0;
//     }

//     else if (dq.r== n-1) dq.r=0;

//     else dq.r= dq.r + 1;

//     dq.a[dq.r] = key;
// }

// int deletefront(){
//     if (isEmpty()) {
//     cout << "Queue Underflow"<< endl;
//     exit(1);
//   }

//   int x=dq.a[dq.f];

//   if (dq.f==dq.r) {
//     dq.f= -1;
//     dq.r=-1;
//   } 

//   else if (dq.f== n-1) dq.f=0;

//   else dq.f=dq.f+1;
  
//   return x;
// }

// int deleterear()
// {
//     if (isEmpty()) {
//         cout <<"Underflow"<< endl;
//         exit(1);
//     }
//     int y=dq.a[dq.r];

//     if (dq.f ==dq.r) {
//         dq.f = -1;
//         dq.r = -1;
//     }

//     else if (dq.r== 0) dq.r= n-1;

//     else dq.r = dq.r-1;

//     return y;
// }

// int main(){  
//   initialize();
//   insertfront(1);
//   insertfront(2);
//   insertrear(3);
//   insertrear(4);
//   insertrear(5);
//   cout<<deleterear()<<endl;
//   cout<<deletefront()<<endl;
//   return 0;
// }


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//


// #include<bits/stdc++.h>
// typedef long long int ll;
// using namespace std;
// #define n 10
// struct priorityQueue
// {
//     int arr[n];
//     int idx;
// }pq;

// void initialize(){
//     pq.idx=-1;
// }

// void insert(int ele){
//     if(pq.idx==-1){
//         pq.idx++;
//         pq.arr[pq.idx]=ele;
//     }
//     else{
//         for(int i=pq.idx ; i>=0 ; i--){
//             if(ele<pq.arr[i]){
//                 pq.arr[i+1]=pq.arr[i];
//                 pq.arr[i]=ele;
//             }
//         }
//         pq.idx++;
//     }
// }

// void deletion(){
//     int x;
    
// }

// void display(){
//     for(int i=0;i<=pq.idx;i++){
//         cout<<pq.arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     initialize();
//     insert(5);
//     insert(3);
//     insert(2);
//     insert(1);
//     insert(4);
//     display();
// }