#include <iostream> 
#include <vector>
using namespace std;

class Solution{
    private:
        vector<int> a;
        int ring_i=0;
        int out_i=0;
    public:
        Solution(int total,int ring,int rest){
            for(int i = 0;i <total;i++)
                a.push_back(0);
                
            vector<int>::iterator v= a.begin();
            
            for(;;){
                if (out_i == total - rest)
                    break;
                else
                    {
                        if (!*v)
                            if(++ring_i == ring){
                                ring_i = 0;
                                *v = ++out_i;
                            }
                            if(++v==a.end())
                                v = a.begin();
                    }
            }
        }
        
        void look_out(){
            for(int i = 0;i <a.size();i++)
                if(a[i])
                    cout<<i+1<<'\t'<<a[i]<<endl;
        }
        
        void look_rest(){
            for(int i =0; i<a.size();i++)
                if(!a[i])
                    cout<<i+1<<'\t'<<a[i]<<endl;
        }
};

int main()
{
    Solution a(100,3,1);
    a.look_rest();

    cout<<endl;

    Solution b(30,9,15);
    b.look_out();
        
    return 0;
}