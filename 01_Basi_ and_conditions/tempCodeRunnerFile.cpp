#include<iostream>
#include<cctype>
int main(){
    char ch;
    std::cout<<"Enter a Character : ";
    std::cin>>ch;
    if(!isalpha(static_cast<unsigned char>(ch))){
        std::cout<<"Invalid Character ! Its not Aplhabetic Character \n";

    }
    else{
        char lowerCh=tolower(static_cast<unsigned char>(ch));
        if(lowerCh=='a' || lowerCh=='e' || lowerCh=='i' || lowerCh=='o' || lowerCh=='u'  ){
            std::cout<<ch<<" is Vowel \n";
        }
        else{
            std::cout<<ch<<" is Consonent \n";
        }
    }
    return 0;
}