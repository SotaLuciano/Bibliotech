#include <iostream>
#include "functions.h"
using namespace std;
void SortWords(char **words, int N)
 {
	 char cur[30];
	 int i, j;
 for(i=0;i<N-1;i++)
        for(j=i+1;j<N;j++)
            if(strcmp(words[i],words[j])>0)
            {   strcpy(cur,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],cur);
            }
    cout<<"Результат:\n";
    for(i=0;i<N;i++)
        cout<<words[i]<<"\n";
    
    cin.sync(); 
	cin.get();
 }
//By Nazar