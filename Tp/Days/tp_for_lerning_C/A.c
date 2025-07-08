#include<unistd.h>
int main(){
	int a,b,e,d;
	char c;
	c = 42;
	e =5;
	d = 5;
	a = 1;
	b =1;
	while(a <= 5){
		while(b <=9){
			if(!( a==5 )){
				if(b==e||b==d){
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
		e++;
		a++;
		d--;
	}
}


