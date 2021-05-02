#include <iostream>
#include <conio.h>
#include <cstring>
#include <string.h>

using namespace std;
const int cols = 16, rows = 15;
int n,temp = 0, counterV = 0, counterH = 0;
    
    char word[16];
    
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

char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char*);
bool searchHorizontal(char*);

void Search()
{

         for (int x=0;x<rows;x++){
         	temp=0;
         
         	for (int y=0;y<cols;y++){
				// cout<<"counter H "<<(x+1)<<"|"<<(y+1)<<" : "<<counterH<<" | "<<words[x][y]<<" | "<<word[temp]<<endl;
			 	if(counterH != strlen(word)){
         				if(word[temp] == words[x][y]){
         					         				
         					if(word[temp] != words[x][y+1] || temp > 0){
         						temp++;
         						counterH++;
							 }				 	
         					         					 
						 }
						 else{
						 	counterH=0;
						 }					
				 }         		
        	}      
         }
        
     
         
        
         for (int x=0;x<rows;x++){
         	temp=0;
         	for (int y=0;y<cols;y++){
//				cout<<"counter H "<<(y+1)<<"|"<<(x+1)<<" : "<<counterV<<" | "<<words[y][x]<<" | "<<word[temp]<<endl;
         		if(counterV != strlen(word)){
//         			cout<<words[y][x]<<endl;
         				if(word[temp] == words[y][x]){
         					if(word[temp] != words[y+1][x] || temp > 0){
         						temp++;
         						counterV++;
							 }
         					 
						 }
						 else{
						 	counterV=0;
						 }
         		}
       
       		}    
 		}
         

         if(counterV == strlen(word) || counterH == strlen(word)){
         	cout<<"Ada"<<endl;
		 }
		 else{
		 	cout<<"Tidak Ada"<<endl;
		 }
//       if (searchVertical(word) || searchHorizontal(word))
//            cout << "Ada\n";
//        else 
//            cout << "Tidak Ada\n";
}

int main()
{
  
    
    cout<<"masukan banyak kata : ";cin>>n;
    string fword[n];
    for (int i=0;i<n;i++){
        //cin.getline(word,16,'\n');
		cin>>fword[i];
    }
    cout<<endl;
    for (int i=0;i<n;i++){
        strcpy(word, fword[i].c_str());
        Search();
    }
    getch();
    return 0;
}
