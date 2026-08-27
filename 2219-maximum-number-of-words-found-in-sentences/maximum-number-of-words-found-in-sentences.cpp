class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mostwords=0;
        for(int i=0;i<sentences.size();i++){
            int wordcount=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    wordcount++;
                }
            }
            mostwords=max(mostwords,wordcount);
        }
        return mostwords;
    }
};