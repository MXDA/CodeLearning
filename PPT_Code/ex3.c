#include <stdio.h>
#include <pthread.h>
typedef struct {
	int x;
	int y;
} FuncArguments;

void *func(void *arg) {
	FuncArguments *args = (FuncArguments*)arg;
	printf("x=%d,y=%d\n", args->x, args->y);
}
void main() {
	pthread_t t0, t1, t2;
	FuncArguments args[3] = {{1, 2}, {3, 4}, {5, 6}};
	pthread_create(&t0, NULL, func, &args[0]);
	pthread_create(&t1, NULL, func, &args[1]);
	pthread_create(&t2, NULL, func, &args[2]);
	pthread_join(t0, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return ;
}
