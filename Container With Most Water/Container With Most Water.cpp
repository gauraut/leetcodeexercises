class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,m,maxarea=0;
        i = 0;
        m= height.size()-1;
        
        while(m-i>0)
        {
            if (height[i]<height[m])
            {
                if (height[i]*(m-i)>maxarea){maxarea=height[i]*(m-i);}
                i++;
            }
            else
            {
                if (height[m]*(m-i)>maxarea){maxarea=height[m]*(m-i);}
                m--;
            }
        }
        return maxarea;
    }
};