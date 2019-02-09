/*
  @author: Sean Ebanks
  @Descr: Removes all even instances of a character in a string. i.e. "you got beautiful eyes" -> "you gtbeaiful es"
          O(n) time complexity, O(1) space complexity
*/

#include<iostream>
void removeEvenDuplicates(char str[],int n){
	int alph[256];
	for(int i = 0; i < 256; ++i) {
	    alph[i] = 0;
	}
	int index = 0;
	for(int i = 0; i < n; ++i) {
	    if(str[i] != 0){
    	    ++alph[str[i]];
    	    if(alph[str[i]]%2 != 0) {
    	        str[index++] = str[i];
    	    }
	    }
	}
	for(int i = index; i < n; ++i) {
	    str[index++] = 0;
	}
}
int main(){
	  char str[]="you got beautiful eyes";
    removeAlternateDuplicates(str,24);
    printf("%s\n",str );
	
	return 0;


}
