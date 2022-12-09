#include <iostream>
using namespace std;

//P1+P2+P3
// int main(){

//     struct student_tag{
//         int rno;
//         char name[20];
//         int m[6];
//     }stu;

//     cout<<"Enter Details Now "<<endl;
//     cout<<"Enter Roll Number : ";
//     cin>>stu.rno;
//     cout<<"Enter Name : ";
//     cin>>stu.name;
//     cout<<"Enter Marks of six subject : ";
//     for(int i=0 ; i<6 ; i++){
//     cin>>stu.m[i];
//     }

//     int min=stu.m[0];
//     for(int i=0 ;i<6 ; i++){
//         if(stu.m[i]<min){
//             min=stu.m[i];
//         }
//     }
//     int min1=min;
//     int min2 = 101;
//     for(int i=0 ;i<6 ; i++){
//         if(stu.m[i]==min1){
//             continue;
//         }
//         if(stu.m[i]<min2){
//             min2=stu.m[i];
//         }
//     }

//     int sum=0;
//     for(int i=0 ; i<6 ; i++){
//         if(i==min1 || i==min2){
//             continue;
//         }
//         sum+=stu.m[i];
//     }
//     float per=(sum/4);
//     if(per>=95){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
// }


//P4
// int main(){

//     struct distance{
//         int feet;
//         int inches;
//     }d;

//     cout<<"Enter Feet : ";
//     cin>>d.feet;
//     cout<<"Enter Inches : ";
//     cin>>d.inches;

//     if (d.inches>12){
//     d.inches=d.inches%12;
//     d.feet=d.feet+d.inches;
//     }
//     if(d.inches==12){
//         d.inches=0;
//         d.feet=d.feet+1;
//     }

//     cout<<"The Distance is : "<<d.feet<<" Foot and "<<d.inches<<" inches.";
// }


//P5
// int main(){
//     struct cmplx{
//         int r1;
//         int img1;
//         int r2;
//         int img2;
//     }c;

//     cout<<"Enter Real Part Of First Complex number : ";
//     cin>>c.r1;
//     cout<<"Enter Imaginary Part Of First Complex number : ";
//     cin>>c.img1;
//     cout<<"Enter Real Part Of Second Complex number : ";
//     cin>>c.r2;
//     cout<<"Enter Imaginary Part Of First Complex number : ";
//     cin>>c.img2;

//     int r3,img3,n;
//     cout<<"1.Addition"<<endl;
//     cout<<"2.Subtraction"<<endl;
//     cout<<"3.Multiplication"<<endl;
//     cout<<"Enter a operation : ";
//     cin>>n;

//     switch(n){
//         case 1:
//         r3=c.r1+c.r2;
//         img3=c.img1+c.img2;
//         cout<<"The Complex Number After Addition is : "<<r3<<" (+) "<<img3<<"i.";
//         break;

//         case 2:
//         r3=c.r1-c.r2;
//         img3=c.img1-c.img2;
//         cout<<"The Complex Number After Subtraction is : "<<r3<<" (+) "<<img3<<"i.";
//         break;

//         case 3:
//         r3=c.r1*c.r2-c.img1*c.img2;
//         img3=c.r1*c.img2+c.r2*c.img1;
//         cout<<"The Complex Number After Multiplication is : "<<r3<<" (+) "<<img3<<"i.";
//         break;
//     }
// }


//P6
// int main(){

//     struct time{
//         int hour;
//         int min;
//         int sec;
//     }t;

//     cout<<"Enter Hour : ";
//     cin>>t.hour;
//     cout<<"Enter Minutes : ";
//     cin>>t.min;
//     cout<<"Enter Seconds : ";
//     cin>>t.sec;

//     if(t.sec>60){
//         t.sec=t.sec%60;
//         t.min=t.min+t.sec;
//         if(t.min>60){
//             t.min=t.min%60;
//             t.hour=t.hour+t.min;
//         }
//     }

//     if(t.sec==60){
//         t.sec=0;
//         t.min+=1;
//         if(t.min>60){
//             t.min=t.min%60;
//             t.hour=t.hour+t.min;
//         }
//         else if(t.min==60){
//             t.min=0;
//             t.hour+=1;
//         }
//     }
    
//     if(t.min==60){
//         t.min=0;
//         t.hour+=1;
//     }
//     cout<<"The Hour is : "<<t.hour<<" Minutes are "<<t.min<<" and the seconds are : "<<t.sec;
// }    



//P7
// int main(){
//     struct Marks{
//         int rno[5];
//         char name[5][20];
//         int phy[5];
//         int chem[5];
//         int maths[5];
//     }m;

//     for(int i=0 ; i<5 ; i++){
//         cout<<"Enter Roll No. : "; cin>>m.rno[i];
//         cout<<"Enter Name : "; cin>>m.name[i];
//         cout<<"Enter Physics Marks : "; cin>>m.phy[i];
//         cout<<"Enter Chem Marks : "; cin>>m.chem[i];
//         cout<<"Enter Maths Marks : "; cin>>m.maths[i];
//         cout<<endl;
//     }

//     int sum[5];
//     for(int i=0 ; i<5; i++){
//         sum[i]=(m.phy[i]+m.chem[i]+m.maths[i])/3;
//     }
//     for(int i=0 ; i<5; i++){
//         cout<<"Percentages Are : "<<sum[i]<<endl;
//     }
// }



//PTR APPROACH
// int main(){
//     struct student{
//         int rno;
//         string name;
//         int marks;
//     }s[3],*st;

//     st=s;
//     for(int i=0 ; i<3 ; i++){
//         cout<<"Enter R.No. : ";
//         cin>>(st+i)->rno;
//         cout<<"Enter Name : ";
//         cin>>(st+i)->name;
//         cout<<"Enter Marks : ";
//         cin>>(st+i)->marks;
//     }
    
//     for(int i=0 ; i<3 ; i++){
//         cout<<"R.No. : ";
//         cout<<(st+i)->rno;
//         cout<<" Name : ";
//         cout<<(st+i)->name;
//         cout<<" Marks : ";
//         cout<<(st+i)->marks<<endl;
        
//     }
// }


//P9
// struct students{
//     int rno;
//     char name[10];
//     int age;
//     char add[10];
// };

// void agesrch(struct students s[],int n){
//     for(int i=1;i<=n;i++){
//         if (s[i].age>14){
//             cout<<s[i].name<<" ";
//             cout<<endl;
//         }
//     }
// }

// void evenrno(struct students s[],int n){
//     for(int i=1;i<=n;i++){
//         if(s[i].rno % 2==0)
//             cout<<s[i].name<<endl;
//     }
// }

// void rnosrch(struct students s[],int n,int x){
//     for(int i=1;i<=n;i++){
//         if(s[i].rno==x){
//             cout<<s[i].name<<endl;
//             cout<<s[i].age<<endl;
//             cout<<s[i].add<<endl;
//         }
//     }
// }

// int main(){
//     struct students s[100];
//     int n,x;
//     cout<<"Enter the numbers of students: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//     cout<<"Enter the roll no. : ";
//     cin>>s[i].rno;
//     cout<<"Enter the name: ";
//     cin>>s[i].name;
//     cout<<"Enter the age: ";
//     cin>>s[i].age;
//     cout<<"Enter the address: ";
//     cin>>s[i].add;
//     cout<<endl;
//     }
//     for(int i=1;i<=n;i++){
//         cout<<"Data of student "<<i<<endl;
//         cout<<"Roll number: "<<s[i].rno<<endl;
//         cout<<"Name: "<<s[i].name<<endl;
//         cout<<"Age: "<<s[i].age<<endl;
//         cout<<"Address: "<<s[i].add<<endl;
//     }

//     cout<<"Students having age greater than 14 are: ";
//     agesrch(s,n);
//     cout<<endl;
//     cout<<"Students having Even roll number: ";
//     evenrno(s,n);
//     cout<<endl;
//     cout<<"Enter the roll number to be searched: ";
//     cin>>x;
//     rnosrch(s,n,x);
// }



// //P10
// struct customers{
//     char name[10];
//     int accn;
//     int bal;
// }c;

// void lbal(struct customers c[],int n){
//     for(int i=1;i<=n;i++){
//         if(c[i].bal < 200)
//             cout<<c[i].name;
//     }
// }

// void hbal(struct customers c[],int n){
//     for(int i=1;i<=n;i++){
//         if(c[i].bal>1000){
//             cout<<c[i].name<<endl;
//             cout<<c[i].bal +100;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the enteries: ";
//     cin>>n;
//     struct customers c[n];
//     for(int i=1;i<=n;i++){
//         cout<<"Enter the name: ";
//         cin>>c[i].name;
//         cout<<"Enter the account number: ";
//         cin>>c[i].accn;
//         cout<<"Enter the balance: ";
//         cin>>c[i].bal;
//         cout<<endl;
//     }
//     cout<<"Data of the customers is : "<<endl;
//     for(int i=1;i<=n;i++){
//         cout<<"Name of customer "<<i<<" is: "<<c[i].name<<endl;
//         cout<<"Account number of customer "<<i<<" is: "<<c[i].accn<<endl;
//         cout<<"Balance of customer "<<i<<" is: "<<c[i].bal<<endl;
//     }
//     cout<<endl;
//     cout<<"Customers having bank balance less than $200 are: "<<endl;
//     lbal(c,n); 
//     cout<<endl;
//     cout<<"Updated list after adding $100 in the balance of all the customers having more than $1000 in their balance is: "<<endl;
//     hbal(c,n);
// }


//P11
// struct date{
//     int d;
//     int m;
//     int y;
// };
// void cmp(struct date d1,struct date d2){
//     if(d1.y==d2.y){
//         if(d1.m==d2.m){
//             if(d1.d==d2.d)
//                 cout<<"Dates are equal";
//         }
//         else
//             cout<<"Dates are not equal"; 
//     }
//     else
//         cout<<"Dates are not equal";   
// }
// int main(){
//     struct date d1;
//     struct date d2;
// cout<<"DD/MM/YYYY format only"<<endl;
//     cout<<"Enter the 1st date: ";
//     cin>>d1.d>>d1.m>>d1.y;
//     cout<<"Enter the 2nd date: ";
//     cin>>d2.d>>d2.m>>d2.y;
//     cmp(d1,d2);
// }


//P12
// struct emp{
//     char name[20];
//     int sal;
//     int time;
// };

// int main(){
//     int n;
//     cout<<"How many Employees :- ";
//     cin>>n;
//     emp st[n];

//     for(int i=1 ; i<=n ; i++){
//         cout<<"Details of Employee "<<i<<" : "<<endl;
//         cout<<"Name : ";
//         cin>>st[i].name;
//         cout<<"Salary : ";
//         cin>>st[i].sal;
//         cout<<"Work Hours : ";
//         cin>>st[i].time;
//     }

//     for(int i=0 ; i<=n ; i++){
//         st[i].sal+=50;
//     }

//     cout<<"Updated list is "<<endl;
//     for(int i=1 ; i<=n ; i++){
//         cout<<"Name: ";
//         cout<<st[i].name<<endl;
//         cout<<"Salary: ";
//         cout<<st[i].sal<<endl;
//         cout<<"Work Hours : ";
//         cout<<st[i].time<<endl;
//         cout<<endl;
//     }
    
// }


//////