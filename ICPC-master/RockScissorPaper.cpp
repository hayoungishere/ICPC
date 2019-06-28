/*#include <iostream>
#include <string>

using namespace std;

int main(){
    int m,n; //m is length of machine made, n is length of mine
    cin>>m>>n;
    string machine,mine;
    cin>>machine>>mine;
    string *oppMac=new string[m];
    for(int i=0; i<m; i++){
        oppMac[i]=machine.substr(i,1);
        if(oppMac[i]=="R") oppMac[i]="P";
        else if(oppMac[i]=="P") oppMac[i]="S";
        else oppMac[i]="R";
    }
 
    string *speMine=new string[n];
    for(int i=0; i<n; i++)
        speMine[i]=mine.substr(i,1);
    int max=0;
    for(int i=0; i<m; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(i+j<m && oppMac[i+j]==speMine[j]) count++;
        }
        if(count>max)max=count;
    }
    cout<<max<<endl;
    delete[] speMine;
    delete[] oppMac;
    
    return 0;
}*/
