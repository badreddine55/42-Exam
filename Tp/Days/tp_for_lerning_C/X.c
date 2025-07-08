#include<unistd.h>
int main(){
	int a,b,d;
	char c;
	c = 42;
	d = 10;
	a = 1;
	b =1;
	while(a <= 9){
		while(b <= 9){
			if(!(a==1 || a==9 )){
				if(b==1 || b==9 || b==a||b==d-1){
					write(1, &c,1);
				 }else{
					write(1, " ",1);
				 }
			}else{
				write(1, &c,1);
			}
			b++;
		}
		write(1, "\n",1);
		b=1;
		a++;
		d--;
	}
}

