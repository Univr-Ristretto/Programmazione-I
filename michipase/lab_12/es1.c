#include <stdio.h>

typedef struct{
	int hh;
	int mm;
	int ss;
}time;

int valid_input (int hh, int mm, int ss) {
	if (hh >= 24 || hh < 0) return 0;
	if (mm >= 60 || mm < 0) return 0;
	if (ss >= 60 || ss < 0) return 0;
	return 1;
}

time time_init(int hh, int mm, int ss) {
	time t;
	t.hh = 0;
	t.mm = 0;
	t.ss = 0;

	if (valid_input(hh,mm,ss) == 0) return t;
	
	t.hh = hh;
	t.mm = mm;
	t.ss = ss;
	return t;
}

time sum_time(time a, time b) {
	int overflow_ss = 0;
	a.ss = a.ss + b.ss;
	while (a.ss >= 60) {
		a.ss -= 60;
		overflow_ss++;
	}
	
	int overflow_mm = 0;
	a.mm += b.mm + overflow_ss;
	while (a.mm >= 60) {
		a.mm -= 60;
		overflow_mm ++;
	}

	a.hh += b.hh + overflow_mm;
	while (a.hh >= 24) {
		a.hh -= 24;
	}
	
	return a;
}

time diff_time(time a, time b) {

	a.hh -= b.hh;
    if (a.hh < 0) {
        a.hh += 24;
    }
    
    a.mm -= b.mm;
    if(a.mm < 0) {
        a.mm += 60;
        a.hh --; 
    }
    
    a.ss -= b.ss;
    if(a.ss < 0) {
        a.ss += 60;
        a.ss --;
    }
	
	return a;
}

void print_time(time t) {
	if (t.hh < 10) printf("0");
	printf("%i:", t.hh);
	if (t.mm < 10) printf("0");
	printf("%i:", t.mm);
	if (t.ss < 10) printf("0");
	printf("%i\n", t.ss);
}

int main() {
	
	time a = time_init(0,0,0);
	time b = time_init(0,1,0);
	print_time(a);
	print_time(b);
	time diff = diff_time(a,b);
	print_time(diff);
}

