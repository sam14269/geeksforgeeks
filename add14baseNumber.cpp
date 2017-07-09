#include <bits/stdc++.h>
# define bool int
using namespace std;
int getNumeralValue(char num)
{
  if( num >= '0' && num <= '9')
    return (num - '0');
  if( num >= 'A' && num <= 'D')  
    return (num - 'A' + 10);
  //assert(0);
}
char getNumeral(int val)
{
  if( val >= 0 && val <= 9)
    return (val + '0');
  if( val >= 10 && val <= 14)  
    return (val + 'A' - 10);
  //assert(0);
}
char *sumBase14(char *num1,char *num2)
{
    int len1=strlen(num1);
    int len2=strlen(num2);
    int digsum;
    bool carry=0;
    //stack <char> s;
    char *res ;
    res= (char *)malloc(sizeof(char)*(len1 + 1));
    for(int i = len1-1; i >= 0; i--)
        {
           digsum=getNumeralValue(num1[i])+getNumeralValue(num2[i])+carry;
           if(digsum>=14)
            {
                carry=1;
                digsum=digsum-14;
                //s.push(getNumeral(digsum));
            }
            else
               {
                   carry=0;
                  //s.push(getNumeral(digsum));
               }
               res[i+1]=getNumeral(digsum);
        }
        if(carry == 0)
          return res+1;
        res[0]='1';
        return res;
}
int main(int argc, char **argv)
{
    char *num1 = "12A";
    char *num2 = "CD3";
    cout<<sumBase14(num1,num2);
    return 0;
}
