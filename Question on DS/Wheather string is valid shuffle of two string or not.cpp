#include<iostream>
using namespace std;

int main(){

    string s1, s2;
    cout<<"Enter first string";
    getline(cin,s1);
    int l1 = s1.length();
    cout<<"Enter second string";
    getline(cin,s2);
    int l2 = s2.length();

    string res;
    cout<<"Enter resultant string";
    getline(cin,res);
    
    int lr = res.length();

    if((l1+l2)!=lr){
        cout<<"No";
    }else{

        int i=0,j=0,k=0;
        while(k<lr){

            if(i<l1 && s1[i] == res[k]) i++;
            else if(j<l2 && s2[j] == res[k]) j++;
            else {
                break;
            }
            k++;
        }
        if(i<l1 || j<l2){
            cout<<"no";
        }else{
            cout<<"Yes";
        }
    }
    


    return 0;
}