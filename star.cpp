#include<iostream>

using namespace std;

class Star{
    int lines=0;
    char ch='*';
    public:
        Star(int Lines=1,char ch='*'){
            lines = Lines;
            
            for(int i =0;i <(lines-1)/2;i++){
                for(int j=0;j<(lines-1)/2-i;j++)
                    cout<<" ";
                for(int k=0;k<2*i+1;k++)
                    cout<<ch;
                cout<<endl;
            }
            
            for(int i =0;i<(lines+1)/2;i++){
                for(int j=0;j<i;j++)
                    cout<<" ";
                for(int k=0;k<lines-2*i;k++)
                    cout<<ch;
                cout<<endl;
                }
        }
        ~Star(){
            cout<<endl;
        }
        
};

int main(){
    //Star a(39,'*');
    for(int i =1;i<30;i+=2)
        Star a(i);
    return 0;
}