#include <unistd.h>

void ft_print_comb(void){
	int a,b,c;
	a = 47;
	b = 48;
	c = 49;
	while(++a < 56){
		while(++b <57){
			while(++c <58){
				write(1, &a,1);
				write(1, &b,1);
				write(1, &c,1);
				if (!(a == 55 && b == 56 && c == 57))
					write(1, ", ", 2);
                	}
			c = 49;
		}
		b = 48;
	}
}
int main(){
	ft_print_comb();
}
