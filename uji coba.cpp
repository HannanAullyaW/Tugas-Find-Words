#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};
 

char *getWordVertical(int bagian);
char *reverse(char *carikata);
bool searchVertical(char *carikata);
bool searchHorizontal(char *carikata);


int main()
{
    char word[16];
    int x;
    cin>>x;
    cin.ignore(1,'\n');
    for (int i=0;i<x;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}
char *getWordVertical(int bagian){
    static char carikataCol[cols];
    for (int i = 0; i < rows; i++){
        carikataCol[i] = *(*(words+i)+bagian);
    }

    return carikataCol;
}
