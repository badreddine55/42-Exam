#include <unistd.h>
void ft_print_numbers(void){

	int c;
	c = 47;
	while(++c < 58){
		write(1, &c,1);
	}
}
int main(){
	ft_print_numbers();
}
