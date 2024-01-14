int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
         int t=a[i+1]-a[i];
         if(t%k==0)
         {
             int g=t/k;
             count+=(g);
                a[i+1]=a[i+1]-(g*k);
             count=count%1000000007;
         }
         else
         {
             int g=t/k+1;
             count+=g;
             a[i+1]=a[i+1]-(g*k);
             count=count%1000000007;
         }
        }
    }
    return (count%1000000007);
