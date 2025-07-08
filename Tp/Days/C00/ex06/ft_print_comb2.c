#include <unistd.h>

void ft_print_comb2(void){
	int a,b,c,d;
	a = 47;
	b = 47;
	c = 47;
	d = 48;
	while(++a < 58){
		while(++b < 58){
			while(++c < 58){
				while(++d < 58){
					write(1, &a,1);
					write(1, &b,1);
					write(1, " ",1);
					write(1, &c,1);
					write(1, &d,1);
					if(!(a == 57 && b == 56 && c == 57 && d == 57))
                                		write(1, ",",1);
        			}
				d =47;
        		}
			c = 47;
			d = 49;
			if(a == 57 && b == 56)
                        	break;
        	}
		b =47;
	}
}
int main(){
	ft_print_comb2();
}	
