#include "flames.hpp"



std::string flames(std::string a,std::string b){
    
    for(int i=0;i<a.length();i++){
        for(int j=0;j<b.length();j++){
            if(a[i] == b[j]){
                a.erase(i,1);
                b.erase(j,1);
                i -= 1;
                break;
            }
        }
    }
    
    int number = a.length() + b.length();
    std::string FLAMES = "flames";

    while(FLAMES.length() > 1){
        int split_index = (number % FLAMES.length()) - 1;
        if(split_index >= 0){
           std::string right = FLAMES.substr(split_index + 1,FLAMES.length());
           std::string left = FLAMES.substr(0,split_index);
           FLAMES = right.append(left);
        }
        else{
            FLAMES = FLAMES.substr(0,FLAMES.length() - 1);
        }
    }

   if(FLAMES.compare("f") == 0) return "friends";
   else if(FLAMES.compare("l") == 0) return "lovers";
   else if(FLAMES.compare("a") == 0) return "affection";
   else if(FLAMES.compare("m") == 0) return "marriage";
   else if(FLAMES.compare("e") == 0) return "enemy";
   else if(FLAMES.compare("s") == 0) return "sibilings";

}


