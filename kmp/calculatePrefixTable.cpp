vector<int>p;
void calcPT(string str){

    int n=str.length();
    vector<int>resize(n+5,0);
    int j=0;
    for(int i=1;i<n;i++)
    {
        while(j>0&&(str[i]!=str[j]))
                  j=p[j-1];

        if(str[i]==str[j])
                j++;
        p[i]=j;
    }
}

