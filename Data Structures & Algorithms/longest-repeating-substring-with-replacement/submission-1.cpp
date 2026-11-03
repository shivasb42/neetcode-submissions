class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int>freq(26,0);


        int l=0;
        int r=0;
        int max_l=INT_MIN;

        char max_c='\0';


        while(l<=r && r<s.length()){

            freq[s[r]-'A']++;

            if(max_c=='\0' || freq[s[r]-'A']>freq[max_c-'A']){
                max_c=s[r];
            }

            while(r-l+1-freq[max_c-'A']>k){

                char removed = s[l];
                freq[s[l]-'A']--;
                l++;
                



                if(max_c==removed){
                    int indx= max_element(freq.begin(),freq.end())-freq.begin();

                    
                        max_c=indx+'A';
                    

                }

                


               

                


            }
            max_l=max(r-l+1,max_l);
             r++;




        }

        return max_l;
        
    }
};
