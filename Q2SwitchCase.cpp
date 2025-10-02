//Programmer: Irfan Aiman Zuraidi, 21DIT25F1411
//QUESTION: 2, CASE STATEMENT, 02Oct2025
#include <iostream>
using namespace std;

int main(){
    
    int item;
    double discountrate,discountprice,price,netprice;
    
    cout<<"==========================================================="<<endl;
    cout<<" 1.Food Item  2.Health Item  3.Electric Item  4.Cloth Item"<<endl;
    cout<<"==========================================================="<<endl;
    cout<<" Please select the item and enter the number [1-4]: ";
    cin>>item;
    
    switch (item){
        
        case 1: discountrate= 0.05;
        cout<<" You choose Food Item, Discount =5%"<<endl;
        break;
        
        case 2: discountrate= 0.06;
        cout<<" You choose Health Item, Discount =6%"<<endl;
        break;
        
        case 3: discountrate= 0.09;
        cout<<" You choose Electric Item, Discount =9%"<<endl;
        break;
        
        case 4: discountrate= 0.04;
        cout<<" You choose Cloth Item, Discount =4%"<<endl;
        break;
        
        default:
      cout << " Invalid item!! Please entered 1-4" << endl;
      return 0;
    }
    
    cout<<" Please enter the price RM";
    cin>>price;
    
    discountprice= price*discountrate;
    netprice= price-discountprice;
    
    cout<<" Discount Price =RM"<<discountprice<<endl;
    cout<<" Net Price =RM"<<netprice<<endl;
    
}
