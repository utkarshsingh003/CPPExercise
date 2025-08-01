#include <iostream>
#include <vector>
using namespace std;
int main (){
    cout<<"-----------------------------------------------------"<<endl;
    vector <char> find_vowel {'a','l','l','u','o'};
    
    //finding the first vowel in the vector
    
    int i {0};
    bool vowel_found {false};
    
        
        do{
            if(find_vowel.at(i)=='a' || find_vowel.at(i)=='e' || find_vowel.at(i)=='i' || find_vowel.at(i)=='o' || find_vowel.at(i)=='u'){
                vowel_found = true;
            }
            else{
                i++;
                }
            }
        while(!vowel_found && static_cast <unsigned int> (i) < find_vowel.size());
        
        if(vowel_found){
            cout<<"vowel found "<<find_vowel.at(i)<<" at index "<<i<<endl;
        }
        else{
            cout<<"No vowel was found"<<endl;
            }
    
    return 0;
}