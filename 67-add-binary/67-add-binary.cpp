class Solution {
public:
    void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
string addBinary(string a, string b)
{
    string sum="";

    if(a.length()<b.length())
    {
        string temp=a;
        a=b;
        b=temp;
    }
    char carry='0';
    int k=0;
    int j=b.length()-1;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(j>=0)
        {
            if(a[i]=='0' && b[j]=='0' && carry=='0')
            {
                sum=sum+'0';
                 carry='0';
                j--;

            }
            else if(a[i]=='0' && b[j]=='1' && carry=='0')
            {
                sum=sum+'1'; carry='0';
                j--;

            }
            else if(a[i]=='1' && b[j]=='0' && carry=='0')
            {
                sum=sum+'1'; carry='0';
                j--;

            }
            else if(a[i]=='1' && b[j]=='1' && carry=='0')
            {
                sum=sum+'0';
                carry='1';
                j--;

            }
            else if(a[i]=='0' && b[j]=='0' && carry=='1')
            {
                sum=sum+'1';
                carry='0';
                j--;

            }
            else if(a[i]=='0' && b[j]=='0' && carry=='1')
            {
                sum=sum+'1';
                carry='0';
                j--;

            }
            else if(a[i]=='1' && b[j]=='0' && carry=='1')
            {
                sum=sum+'0';
                carry='1';
                j--;

            }
            else if(a[i]=='0' && b[j]=='1' && carry=='1')
            {
                sum=sum+'0';
                carry='1';
                j--;

            }
            else if(a[i]=='1' && b[j]=='1' && carry=='1')
            {
                sum=sum+'1';
                carry='1';
                j--;

            }

        }
        else{
            if(carry=='0')
                sum=sum+a[i];
            else{
                if(a[i]=='1'){
                    sum=sum+'0';
                    carry='1';
                }
                else{

                    sum=sum+carry;
                    carry='0';
                }
            }
        }




    }
    if(carry=='1')
        sum=sum+'1';
    reverseStr(sum);
    return sum;
}
};