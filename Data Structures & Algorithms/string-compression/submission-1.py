class Solution:
    def compress(self, chars: List[str]) -> int:

        c=1
        ch=chars[0]
        temp=""

        for i in range(1,len(chars)):
            if(chars[i]==ch):
                c+=1
            else:
                if(c==1):
                    temp+=chars[i-1]
                else:

                    temp+=chars[i-1]+str(c)
                    c=1; 
            ch=chars[i]        

        if(c==1):
                temp+=chars[len(chars)-1]
        else:
                temp+=chars[len(chars)-1]+str(c);



        


        for i in range(len(temp)):
            chars[i]=temp[i]


        return len(temp)            




        