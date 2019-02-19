std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int max =inputArray[0].size();
for( int i=0;i<inputArray.size();i++)
{
    if(inputArray[i].size()>max) max=inputArray[i].size();
}

std::vector<std::string> longest;
for(int i=0;i<inputArray.size();i++)
{
    if(inputArray[i].size()==max) 
    {
        longest.push_back(inputArray[i]);
    }
}
 for(int i=0;i<longest.size();i++)
 {
     return longest;
 }
}   	
