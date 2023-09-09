//virtual

#include<iostream>
using namespace std;

class stud_info
{
	protected:
		int no;
	public:
	     void get_info()
		 {
		 	cout << " enter the number :" << endl ;
		 	cin >> no ;
        }
        void put_info()
        {
        	cout << endl << " number is : " << no <<endl;
		}
    };
class marks : public virtual stud_info
{
	protected:
		int m[3];
		public:
			void get_marks()
			{
				for( int i=0;i<3;i++)
				{
					cout << " enter mark " << i+1 << " : " ;
					cin >> m[i];
				}
			}
			void put_marks()
			{
				for(int i=0;i<3;i++)
				{
					cout << "mark" << i+1 << " = " << m[i] << endl;
					
				}
			}
	};
	class sports : virtual public stud_info
	{
		protected:
			int sm;
		public:
		void get_sm()
		{
			cout << " enter sports marks :" ;
			cin >> sm ;
			}	
			void put_sm()
			{
				cout << " sports marks : " << sm << endl;
			}
		};
		 class per : public  marks, public sports
		 {
		 	float per;
		 	int tot;
		 	public:
		 		void calculate()
		 		{
		 			per=0;
		 			tot=0;
		 			for(int i=0;i<3;i++)
		 			{
		 				tot+=m[i];
					 }
					 tot=tot+sm;
					 per=tot/4;
					 
				 }
				 void put_per()
				 {
				 	cout << " total = " << tot << endl;
				 	cout << " per = " << per << endl;
				 	
				 }
			};
				 int main()
				 {
				 	per obj;
				 	obj.get_info();
				 	obj.get_marks();
				 	obj.get_sm();
				 	
				 	obj.put_info();
				 	obj.put_marks();
				 	obj.put_sm();
				 	obj.calculate();
				 	obj.put_per();
				 	return 0;
				  
			 }    
