#include<iostream>
using namespace std;
int main()
{
  int arr[2][4];
  for(int r=0;r<2;r++){

    for(int c=0;c<3;c++){
        cout<<"row "<<r<<", column "<<c<<":";
        cin>>arr[r][c];
    }
    cout<<endl;
  }
  int smallest=arr[0][1];
  int largest=arr[1][1];
  for(int i=0;i<3;i++){
  if(arr[0][i]<smallest){
    smallest=arr[0][i];
  }
  if(arr[1][i]>largest){
    largest=arr[1][i];
  }
  }
  cout<<"smallest from row 1:"<<smallest<<endl;
  cout<<"largest from row 2:"<<largest;
}
