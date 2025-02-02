#include<iostream>
#include<cmath>

using namespace std;
class cylinder {
	public :
		double radius;
		double height;
		
		double calculatevolume(){
			return M_PI * radius * radius * height;
		}
		double calculatearea(){
			return 2*M_PI*radius *radius;
		}
} ;

int main (){
	cylinder c1,c2;
	c1.height =10;
	c1.radius = 5;
	
	double vol,area;
	vol=c1.calculatevolume ();
	area=c1.calculatearea();
	cout<<"volume : "<<vol<<endl;
	cout<<"Area : "<<area<<endl;
	
	return 0;
}