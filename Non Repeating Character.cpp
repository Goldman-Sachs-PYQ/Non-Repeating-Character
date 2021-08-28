class Solution
{
    public:
    int NO_OF_CHARS=256;
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string str)
    {
       char ans;
       
       // Define an unordered_map
    unordered_map<char, int> M;
 
    // Traverse string str check if
    // current character is present
    // or not
    for (int i = 0; i<str.length(); i++)
    {
        M[str[i]]++;
    }
    
    // Traverse the map to print the
    // frequency
    int flag=0;
    for (int i = 0; i<str.length(); i++) 
    {
        if(M[str[i]]==1)
        {
            ans=str[i];
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        ans='$';
    }
    return ans;
    }

};
