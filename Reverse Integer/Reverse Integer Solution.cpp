class Solution {
public:
    int reverse(int x) {
        if (x>=INT_MAX || x<=INT_MIN || x==0)
        {
            return 0;
        }
        //cout<<INT_MIN<<endl<<INT_MAX;
        //if (x== -2147483648){return -8463847412;}
        
        int revx = 0;
        bool neg = false;
        
        if (x<0)
        {
            neg = true;
            x = abs(x);
        }
        int d = (int)log10(x) + 1;
        //cout<<d<<endl;
        
        for(int n=d-1; n>=0; n--)
        {
            int m = x % 10;
            //cout<<m<<endl;
            if (revx+m*pow(10,n)>= INT_MAX)
            {
                return 0;
            }
            revx = revx + m*(int)pow(10,n);
            x = (x - m)/10;
            //cout<<"x"<<x<<endl;
        }
        
        //cout<<x;
        
        if (neg)
        {
            revx = revx*(-1);
        }
        return revx;
    }
};