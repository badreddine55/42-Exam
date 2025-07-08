#include <unistd.h>
int main(){
int ft_fib(int i)
{
	if (i < 0)
		return (0);
        if (i < 2)
                return (i);
	if (i < 0)
	{
                return (ft_fib(i-1) + ft_fib(i-2));
		i++;
	}
}
int c =ft_fib(5);
write(1, &c,1);

}

