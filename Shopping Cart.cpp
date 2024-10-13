#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age;
    float item1, item2, total, avg, q1, q2, finalbill, discount;
    string name;
    cout<<"Enter name: "<<endl;
    getline(cin, name);
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Welcome! "<<name<<", you are "<<age<<" years old!"<<endl;
    cout<<"Enter the price of first item = " << endl;
    cin>>item1;
    cout<<"Enter the quantity of item 1 = "<<endl;
    cin>>q1;
    q1 = (q1>0)?q1:0;
    cout<<"Enter the price of second item = "<<endl;
    cin >> item2;
    cout<<"Enter the quantity of item 2 = "<<endl;
    cin>>q2;
    q2=(q2 > 0) ? q2 : 0; 
    total = item1*q1 + item2*q2;
    cout<<"The Total Bill is = $"<<total<<endl;
    avg = total/2;
    cout<<"The average price is = $" <<avg<<endl;
    cout<<((item1>item2) ? "The first item is more expensive" : 
             (item1<item2) ? "The second item is more expensive" : 
             "Both items are same in terms of price") << endl;
    discount = (total>200) ? total*0.10 : 0;  
    finalbill = total - discount; 
    cout<<"------------ Carefour ------------"<<endl;
    cout<<"The price of item#1 is = $"<<item1<<" , quantity = "<<q1<<endl;
    cout<<"The price of item#2 is = $"<<item2<<" , quantity = "<<q2<<endl;
    cout<<"Total = $" <<total<<endl;
    cout<<((total > 200) ? "You have a 10 percent discount!" : "You have no discount.")<<endl;
    cout<<"Discount: $" <<discount<<endl;
    cout<<"Your bill after discount is = $" <<finalbill<<endl;

    return 0;
}
