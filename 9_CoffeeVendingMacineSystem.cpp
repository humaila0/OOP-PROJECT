#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std; 

		class worker{
			public:
			     	static int sugar;
					static int cups;
					static	int milk;
	             	static	int beans;
		
			int refillcups(int takec){
			cups+=takec;
         	return cups;
	
		}
			int refillsugar(int takec){
			sugar+=takec;
			return sugar;	
		}
			int refillmilk(int takec){
			milk+=takec;
			return milk;	
		}
	    	int refillbeans(int takec){
			beans+=takec;
			return beans;	
		}
		};
		worker w;
		
class vendingmachine{
	
		public:	
		static string order;
		static int amount;
		static int price;
		
			int remain(){
			cout<<"remain cups "<<w.cups<<endl;
	    	cout<<"remain milk in milliltres "<<w.milk<<endl;
			cout<<"remain beans in grams "<<w.beans<<endl;
	    	cout<<"remain sugar in grams "<<w.sugar<<endl;
		} 
		int Coffeeprice(){
			int amount;
			int R5000,R1000,R500,R200,R100,R50,R1;
			cout<<order;
			cout<<"Pay amount "<< price<<" rupees for your coffees\n";
			cin>>amount;
			if(amount==price){
					cout<<"                  Enjoy your your coffee!\n";
			}
			else if(amount>price){
				amount=amount-price;
				cout<<"your remainings rupees= "<<amount<<endl;
				cout<<"your change\n";
            	R5000=amount/5000;
             	amount=amount%5000;
		    	R1000=amount/1000;
		    	amount=amount%1000;
		    	R500=amount/500;
		    	amount=amount%500;
		    	R200=amount/200;
		    	amount=amount%200;
		    	R100=amount/100;
		    	amount=amount%100;
		    	R50=amount/50;
		    	amount=amount%50;
             	R1=amount;
	            cout<<"Rs.5000 : "<<R5000<<"\nRs.1000 : "<<R1000<<"\nRs. 500 : "<<R500<<
	         	"\nRs. 200 : "<<R200<<"\nRs. 100 : "<<R100<<"\nRs.  50 : "<<R50<<"\nRe.  1 : "<<R1;
				cout<<"                  Enjoy your your coffee!\n";
			
			}
			else{
					cout<<"                 Sorry!  your money is not enough to buy a coffee!\n";
			}
		}
			
	};
	vendingmachine v1;
	class cofee{
	
				public:
	
				int takec,take,myc,my,t;
			
	};
	
	class turkish:public cofee{
		public:
		virtual int addcups(int take)=0;
		virtual int addmilk(int take)=0;
		virtual int addbean(int take)=0;
	virtual int addsugar(int take)=0;
	};
	
	
	class american:public cofee{
		public:
			virtual int addcups(int take)=0;
			virtual int addmilk(int take)=0;
	     	virtual int addbean(int take)=0;
	virtual int addsugar(int take)=0;
		
	};
	
	
	
	class coldbrew:public american{
		public:
	 	
		int addcups(int take){
			if(w.cups>=take){
			w.cups-=take;
		 }
	  else{	
	    cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much cups you wanna add? \n";
		cin>>takec;
	       w.refillcups(takec);
	     	w.cups-=take;
	  }}
	  
	  	int addsugar(int take){
	  	char sugar1;

     	cout<<"press f:for sugarfree coffee\npress s:for sugar coffee\n";
	    cin>>sugar1;
		switch(sugar1){
			case 's':
					t=5*take;
					if(w.sugar>=t){
			     	w.sugar-=t;
		  	        cout<<"sugar added in coldbrew \n";
		}
	   else{
		
		cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much sugar you wanna add? \n";
		cin>>takec;
		w.refillsugar(takec);
		w.sugar-=t;
		}
		  break;
		case 'f':

		cout<<"sugar is not added in your coldbrew \n";
		default:
			break;
				cout<<"Not valid option!\n";
		  	break;
		  
		  	
		  }}
		  
		int addmilk(int take){
			t=15*take;
			if(w.milk>=t){
			w.milk-=t;
			cout<<"milk added in coldbrew \n";
	}
	else{	
    	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much milk you wanna add? \n";
		cin>>takec;
     	w.refillmilk(takec);
     	w.milk-=t;
 	}
	}
	
	 int addbean(int take){
			t=3*take;
			
			if(w.beans>=t){
			w.beans-=t;
			cout<<"beans added in coldbrew \n";
	}
	else{	
    	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much beans you wanna add? \n";
		cin>>takec;
	    w.refillbeans(takec);
	   	w.beans-=t;
	}
	 }

	};
	
	
	
	class expresso:public american{
	public:
	
		
		int addcups(int take){
			if(w.cups>=take){
			w.cups-=take;
		 }
	  else{	
	    cout<<"the container is empty you want to refill it..!!\n";
	   	cout<<"How much cups you wanna add? \n";
		cin>>takec;
	    w.refillcups(takec);
	   	w.cups-=take;
	  }}
	  
	 
	  	int addsugar(int take){
	  	char sugar1;
     	cout<<"press f:for sugarfree coffee\npress s:for sugar coffee\n";
		cin>>sugar1;
		switch(sugar1){
		case 's':
					t=5*take;
					cout<<"take "<<take<<endl;
					if(w.sugar>=t){
			     	w.sugar-=t;
		  	        cout<<"sugar added in expresso \n";
		}
	   else{
		
		cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much sugar you wanna add? \n";
		cin>>takec;
		w.refillsugar(takec);
		w.sugar-=t;
		}
		  break;
		case 'f':

		cout<<"sugar is not added in your expresso \n";
		default:
				break;
			cout<<"Not valid option!\n";
		  	break;
		  
		  	
		  }}
	
	  
	  	  
		int addmilk(int take){
				t=15*take;
			if(w.milk>=t){
		
			w.milk-=t;
	
			cout<<"milk added in expresso \n";
	}
	else{	
	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much milk you wanna add? \n";
		cin>>takec;
   	 w.refillmilk(takec);
		w.milk-=t;
	}
	
	}
	 int addbean(int take){

			t=3*take;
			if(w.beans>=t){
			w.beans-=t;
			cout<<"beans added in expresso \n";
	}
	else{	
	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much beans you wanna add? \n";
		cin>>takec;
	     w.refillbeans(takec);
      	w.beans-=t;
	}
 }
	
	
	};
	
	
	class capicanno:public turkish{
     	public:
	
		int addcups(int take){
			if(w.cups>=take){
			w.cups-=take;
		 }
	     else{	
	     cout<<"the container is empty you want to refill it..!!\n";
		 cout<<"How much cups you wanna add? \n";
	    cin>>takec;
	     w.refillcups(takec);
	     	w.cups-=take;
	  }}
	  
	  	int addsugar(int take){
	  	char sugar1;
     	cout<<"press f:for sugarfree coffee\npress s:for sugar coffee\n";
		 cin>>sugar1;
		switch(sugar1){
			case 's':
					t=5*take;
					cout<<"take "<<take<<endl;
					if(w.sugar>=t){
			     	w.sugar-=t;
		  	        cout<<"sugar added in capicanno \n";
		}
	   else{
		
		cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much sugar you wanna add? \n";
		cin>>takec;
		w.refillsugar(takec);
		w.sugar-=t;
		}
		break;
		case 'f':

		cout<<"sugar is not added in your capicanno \n";
		default:
				break;
			cout<<"Not valid option!\n";
		break;
		  
		  }}
	  
		int addmilk(int take){
			t=15*take;
			if(w.milk>=t){
			
			w.milk-=t;
	
		
			cout<<"milk added in capicanno \n";
	}
	else{	
	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much milk you wanna add? \n";
		cin>>takec;
	 w.refillmilk(takec);
	 	w.milk-=t;
	}
	
	}
	 int addbean(int take){
	 	
			t=3*take;
			if(w.beans>=t){
			w.beans-=t;
	
	
			cout<<"beans added in capicanno \n";
	}
	else{	
	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much beans you wanna add? \n";
		cin>>takec;
	 w.refillbeans(takec);
	 			w.beans-=t;

	}
	 }
	
	
	};
	
	
	     class latte:public turkish{
		public:
	
		int addcups(int take){
			if(w.cups>=take){
			w.cups-=take;
		 }
		 
	     else{	
	     cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much cups you wanna add? \n";
	   	cin>>takec;
	     w.refillcups(takec);
	     	w.cups-=take;
	  }}
	  
	  
	  	int addsugar(int take){
	  	char sugar1;
     	cout<<"press f:for sugarfree coffee\npress s:for sugar coffee\n";
		 cin>>sugar1;
		switch(sugar1){
			case 's':
					t=5*take;
					cout<<"take "<<take<<endl;
					if(w.sugar>=t){
			     	w.sugar-=t;
		  	        cout<<"sugar added in capicanno \n";
		}
	   else{
		
		cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much sugar you wanna add? \n";
		cin>>takec;
		w.refillsugar(takec);
		w.sugar-=t;
		}
		  break;
		case 'f':

		cout<<"sugar is not added in your capicanno \n";
		default:
			break;
			cout<<"Not valid option!\n";
		  	break;
		  
		  	
		  }}
		int addmilk(int take){
			t=15*take;
			if(w.milk>=t){
			w.milk-=t;
			cout<<"milk added in the latte \n";
	}
	else{	
	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much milk you wanna add? \n";
		cin>>takec;
	 w.refillmilk(takec);
	 	w.milk-=t;
	}
	
	}
	 int addbean(int take){
				t=3*take;
			if(w.beans>=t){
			w.beans-=t;
	
			cout<<"beans added in the latte \n";
	}
	else{	
	cout<<"the container is empty you want to refill it..!!\n";
		cout<<"How much beans you wanna add? \n";
		cin>>takec;
	 w.refillbeans(takec);			
	 w.beans-=t;

	}
	 }
	
	};
	 int worker::sugar=150;
	int worker::cups=1500;
	int vendingmachine::amount=0;
	int vendingmachine::price=0;
	int worker::milk=800;
	int worker::beans=500;
    string vendingmachine::order="YOUR ORDER: \n";
	
	
	int main(){
	
	american *a=new coldbrew;
	american *a1=new expresso;
	turkish  *t=new capicanno;
	turkish  *l=new latte;
	
	int take,takec,take1;
	int price1,price2,price3,price4;
		string order1,order2,order3,order4;
	
		int input2,i;
		char input1;
		char input;
		cout<<"                !!!.....Welcome to a coffee vending machine.....!!!\n\n\n";
		cout<<"   For refilling must fill greater than equals to 2000 \n";
		while(input1!='c'){
		cout<<"\n\n\t\t\tpress#a: for take coffee\n\t\t\tpress#b: for remainings of coffee\n\t\t\tpress#c: for pay and get coffee\n";
		cin>>input1;
		system("CLS");
	
		switch(input1){   //1st switch statement
	 case 'a':		
	
		cout<<"\n\n\tI have a varities of types of coffee what you want?\npress#1: for American\n\npress#2: for turkish\n\n";
		cin>>input2;
		system("CLS");
			
			switch(input2){   //second switch statement
	         case 1:
				cout<<"\n\n\t for American i have a Coldbrew of rupees 299,exprsso  of rupees 399\n\npress#c: for Coldbrew\npress#e: for exprsso\n\n";
				cin>>input;
				
					switch(input){
				 case 'c':	
			
				cout<<" How many cups you want?\n";
				cin>>take;
					a->addcups(take);
					a->addsugar(take);
					a->addmilk(take);
			    	a->addbean(take);
					price1=299*take;
					v1.price+=price1;
		     order1="coldbrew cofee \n";
	     	v1.order+=order1;
	     	
				break;
			    case 'e':
				cout<<" How many cups you want?\n";
				cin>>take;
					a1->addcups(take);
						a1->addsugar(take);
					a1->addmilk(take);
				    a1->addbean(take);
					price2=399*take;
					v1.price+=price2;
			    	 order2="Expresso cofee \n";
		            v1.order+=order2;
						break;
							
					default:
			break;
		cout<<"No input detetected!..\n";
			
				}
	getch();
		system("CLS");
	
			break;
				case 2:
					cout<<" \n\n\tfor Turkish i have a capicanno of rupees 310,latte  of rupees 350\npress#p: for capicanno\n\npress#l: for  latte\n\n";
				cin>>input;
				
					switch(input){//third switch statement
				 case 'p':	
			
				cout<<" How many cups you want?\n";
				cin>>take;
					t->addcups(take);
					t->addsugar(take);
					t->addmilk(take);
			    	t->addbean(take);
					price3=310*take;
					v1.price+=price3;
					order3="Capiccano cofee \n";
	             	v1.order+=order3;
				break;
				 case 'l':
				cout<<" How many cups you want?\n";
				cin>>take;
					l->addcups(take);
					l->addsugar(take);
					l->addmilk(take);
			    	l->addbean(take);
		 			price4=350*take;
					v1.price+=price4;
					order4="Latte cofee \n";
	            	v1.order+=order4;
	     	break;
				default:
			break;
			
		cout<<"No input detetected!..\n";}}
     	getch();
		system("CLS");
		break;
	case 'b':
	
		v1.remain();
		getch();
		system("CLS");		
		break;	
		case 'c':
	v1.Coffeeprice();

		exit(0);
		break;
	default:
		cout<<"No input detetected!...try again!!.. \n\n";
		break;
	}
}
	
	}
	
