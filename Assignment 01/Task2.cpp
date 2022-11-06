#include<iostream>
#include<string>

using namespace std;

class DFA
{
private:

     string b;
     bool a=false;
 
public:
 	
 	void string_get()
 	{
 		cout<<"Enter the string starts with 0 & have another 0 & viceversa with 1"<<endl;
 		cin>>s;
	}
	
	
    void string_check()
    {
    	
        if(b[0]=='0')
        {
        	for(int i=1; i<b.size();i++)
        	{
        		if(b[i]=='0')
        		{
        			a=true;
        		}	
        	}
        }
    	
        if(b[0]=='1')
        {
        	for(int i=1; i<b.size();i++)
        	{
        		if(b[i]=='1')
        		{
        			a=true;
        		}	
        		
        	}
        }			
    
        if(a==true)
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
