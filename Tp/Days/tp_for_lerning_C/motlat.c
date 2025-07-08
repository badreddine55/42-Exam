#include <unistd.h>
int main(){
	int c,b,i,j;
	c =42;
	i =0;
	j =0;
	b=21;
	while(j < 21){	
		while(i < b){
			write(1, &c,1);
			i++;
		}
		write(1, "\n",1);
		b--;
		i=0;
		j++;
	}
}
