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
        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
        }
 
        // Else update the frequency
        else if(M.find(str[i]) != M.end())
        {
            M[str[i]]++;
        }
    }
    
    // Traverse the map to print the
    // frequency
    for (auto it : M) 
    {
        if(it.second==1)
        {
            ans=it.first;
            break;
        }
    }
    
    return ans;
    }

};
