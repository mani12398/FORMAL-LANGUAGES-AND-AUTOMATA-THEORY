#include<iostream>
#include<string>

using namespace std;

 class DFA
 {
private:

 	string aq;
 	
public:
 
 		void string_get()
 		{
 			cout<<"Enter String"<<endl;
 			cin>>aq;
		}
 	
 	    void string_check()
 	    {
     		if(aq=="a"||aq=="b"||aq=="cb"||aq="cc")
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
