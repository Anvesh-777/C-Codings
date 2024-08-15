#include <stdio.h>
int main()
{
    int height[] = {1,1,3};
    int len=sizeof(height)/sizeof(height[0]);
    
    int maxWater = 0;
    for(int i=0,j=len-1;i<j;(height[i] < height[j])?i++:j--)
    {
        int width = j - i;
        int containerHeight = height[i] < height[j] ? height[i] : height[j];
        int area = width * containerHeight;
        
        if (area > maxWater) 
        {
            maxWater = area;
        }
        
    }
    
    printf("%d\n",maxWater);
return 0;
}