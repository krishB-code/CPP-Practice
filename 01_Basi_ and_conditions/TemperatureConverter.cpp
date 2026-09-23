#include<iostream>
#include<string>
int main(){
    double f,c;
    char choice;
    std::cout<<"*********************TEMPERATURE CONVERSION*********************\n\n";
    std::cout<<"Enter (F) for Fahrenheit conversion OR (C) for Celsius conversion : ";
    std::cin>>choice;
    if( choice == 'C' || choice=='c' ){
        std::cout<<"\nEnter Temperature in celsius : ";
        std::cin>>c;
        f=c*(9.0/5.0)+32.0;
        std::cout<<c<<" degree Celsius to Fahrenheit -> "<<f<<"\n";

    }
    else if(choice == 'F' || choice=='f' ){
         std::cout<<"\nEnter Temperature in Fahrenheit : ";
        std::cin>>f;
        c=(f-32.0)*5.0/9.0;
        std::cout<<f<<" Fahrenheit in Celsius -> "<<c<<"\n";
    }
    else{
        std::cout<<"Invalid Operation\n";
    }
    std::cout<<"\n****************************************************************";
    return 0;
}