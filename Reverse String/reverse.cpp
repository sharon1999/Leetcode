void reverseString(vector<char>& s) {
        int size=s.size()-1;
        for(int i=0,j=size ; i<=size/2; i++,j--){
            int t=s[i];
            s[i]=s[j];
            s[j]=t;                    
        }
    }     