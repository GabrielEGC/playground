#include <math.h>
#include <iostream>
using namespace std;
int n;
int contador=0;
int c1=0;
int c2=0;
int c3=0;
int c4=0;
int  main()
{
cin>>n;
int A[n];

      for (int i=0;i<n;i++)
          cin>>A[i];
      
      for (int i=0;i<n;i++)
      {
          if(A[i]==4)
                     contador++;
          if(A[i]==3)
                     c3++;
          if(A[i]==1)
                     c1++;
          if(A[i]==2)
                     c2++;
      }
      if(c3>c1-1)
      {          
                 contador+=c3;
                 contador += (c2>>1)+c2%2;
      }
      else
         contador+=c1;
      if (c2%2==0)
         contador += (c2)/2+ceil((c1-c3)/4);
      else
          contador=contador+(c2)/2;
      contador=contador+1
      if((c1-c3)>2)
      contador+=ceil((c1-c3-2)/4);


//      for (int k=0;k<n;k++)
//      {cout<<A[k]<<" ";
//      }
}
