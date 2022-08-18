class Solution {
public:
    int romanChar(char c){
        switch(c){
            case 'I':return 1;
                break;
            case 'V': return 5;
                break;
            case 'X':return 10;
                break;
            case 'L':return 50;
                break;
            case 'C':return 100;
                break;
            case 'D':return 500;
                break;
            case 'M':return 1000;
                break;
                
        }
        return 0;
    }

    int romanToInt(string s) {
        
         
        int value=0;
        for(int i=0;i<s.size();i++){
            
            if(i==(s.size()-1)|| romanChar(s[i]) >= romanChar(s[i+1])) {
                    value += romanChar(s[i]);
                }
                else {
                    value += romanChar(s[i + 1]) - romanChar(s[i]);
                    i++;
                }
        
        }
    return value;
    }
    
   };