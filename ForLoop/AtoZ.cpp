// #include<bits/stdc++.h>
// using namespace std;
// int main(){
 

//  for(char name='a';name<='z';name++){

//     cout<<name<<" "<<endl;

//  }
  
// }




// number printing

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
 
//  cout<<"enter your number"<<endl;
//  int number;
//  cin>>number;

//  for(int i=number;i>0;i--){

//     cout<<i<<" "<<endl;

//  }
  
// }




// print table

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
 
//  cout<<"enter number for table"<<endl;
//  int number;
//  cin>>number;

//  for(int i=1;i<=10;i++){

//     cout<<number*i<<" "<<endl;

//  }
  
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
 
//  cout<<"enter number for table"<<endl;
//  int number;
//  cin>>number;

//  for(int i=number;i<=number*10;i=i+number){

//     cout<<i<<" "<<endl;

//  }
  
// }




// finding power

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  cout<<"enter base of number"<<endl;
//  int number;
//  cin>>number;
// cout<<"enter power of number you want";

// int pow;
// cin>>pow;

// int num=number;
//  for(int i=1;i<pow;i++){    
//     num=num*number;
//  }
//  cout<<num<<" "<<endl;
  
// }



// sum of square of all natural number 

#include<bits/stdc++.h>
using namespace std;
int main(){
   int num;
   cin>>num;

   int sum=0;

   for(int i=1;i<=num;i=i+1){
        sum=sum+i*i;
   }

   cout<<sum<<endl;
}