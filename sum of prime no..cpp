    #include<iostream>
    using namespace std;
    
    int Prime(int num)
    {
        int div=0;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0)
            div++;                
        }
        if(div==2)
        return 1;
        return 0;
    }
    
    int main()
    {
        int check = 0, n;
        cout<< "Enter a positive integer: ";
        cin>>n;
        for(int i = 1; i <= n/2;i++)
        {
		    if (Prime(i))
            {
                if(Prime(n-i))
                   {
                        cout<<n <<" = "<< i <<" + "<< n-i<< endl;
                        check = 1;
                   }
            }    
        }
        if (check == 0)
        cout<<"\n"<<n<<" cannot be expressed as the sum of two prime numbers.";
        return 0;
    }
