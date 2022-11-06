#include<iostream>
#include<string>

using namespace std;

 class DFA
 {
private:

 	string a;
 	int a1=0,a2=0;
 	
public:
 		void string_get()
 		{
 			cout<<"Enter string (0 & 1 only)"<<endl;
 			cin>>a;
		 }
 	
 	void string_check()
 	{
 		for(int i=0;i<a.size();i++)
 		{
 			if(a[i]==0)
 			{
 				a1++;
			}
 			else
 			{
 				a2++;
			}
 			
	    }
 		
 		if(a1%2==0 && a2%2==0)
 		{
 			cout<<"Accepted";
		}
 		else
 		{
 			cout<<"Not Accepted";
		}
 		
 		
	}
 	
 	
 };
 
 
 int main()
 {
 	DFA d;
 	d.string_get();
	d.string_check();
 	
 }
