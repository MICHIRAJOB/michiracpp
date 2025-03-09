/*Name:Job Michira
Reg no: BBIT-05-0028/2024
Git username:Michira
Campus:TRC*/

#include<iostream>
using namespace std;
//parent class:Person
class Person {
	protected:
		string name;
		public:
			void SetName(string n){
				name=n;
			}
			string getName(){
				return name;
			}
};

//derived class:LibraryMember
class LibraryMember:public Person{
	private:
		int memberID;
		int booksBorrowed;
		
		public:
			LibraryMember(string n,int ID,int books){
				name=n;
				memberID=ID;
				booksBorrowed =books;
			}
			int getMemberID(){
				return memberID;
			}
			int getbooksBorrowed(){
				return booksBorrowed;
			}
};

//derived class:PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() {
        return membershipFee;
    }
};


//Main Function
int main(){
	//create a PremiumMember object
	  
       PremiumMember p1("job", 64, 4, 69.54);
        
//displaying details
    cout << "Name: " << p1.getName() << endl;
    cout << "Member ID: " << p1.getMemberID() << endl;
    cout << "Books Borrowed: " << p1.getbooksBorrowed() << endl;
    cout << "Membership Fee: " << p1.getMembershipFee() << endl;
return 0;       
};