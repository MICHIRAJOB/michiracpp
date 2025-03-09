//c 2D ARRAYS
/*
c redefined functions
Name:Job Michira
Reg no: BBIT-05-0028/2024
Git username:Michira
Campus:TRC
version
*/
#include<iostream>
using namespace std;
int main(){
    int marks[2][3]={
	
	{10,20,30},
	 {40,50,60}
	};
    int i,j;
    for(i=0; i<2; i++){
    	for(j=0; j<3; j++){
		
        cout<<marks[i][j] <<"\t";
		}
    
    cout<<endl;}
    return 0;
}