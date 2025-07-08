#include <unistd.h>
int main(){
	char nb;
	nb = 58;
	while (--nb > 47){
		write(1, &nb,1);
	}
	write(1, "\n",1);
}
