using namespace std;

int main() 
{
   int t;
   cin >>t;
   while(t--)
   {
       int n;
       cin >>n;
       string s;
       cin >>s;
       int left=0;
       int right=0;
       int swap=0;
       int imbalance=0;
   
       for(int i=0;i<n;i++)
       {
           if(s[i]=='[')
           {
              left++;
              if(imbalance>0)
              {
                 swap = swap + imbalance;
                 imbalance--;
              }
           }
           else
           {
               right++;
               imbalance = right-left;
           }
       }
       cout<<swap;
       cout<<endl;
   }
}
