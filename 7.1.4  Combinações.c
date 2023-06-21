#include <stdio.h>

int fatorial(int v){
int f;

for(int f = (v-1); f > 0; f --)
v *=  f;

return v;
}

int combinacao(int n, int p, int *cnp){

	int fatn, fatp, fatpn, den;
	if(n < 0 || p < 0 || p > n){
		return 0;
	}

    if(n == p){
       *cnp = 1;
       return 1;
    }

	fatn = fatorial(n);
	fatp = fatorial(p);
	den = n - p;
	fatpn = fatorial(den);
	*cnp = fatn/(fatp*fatpn);

	return 1;
}

int main(){
	int n, p, cnp;
	scanf ("%d", &n);
	scanf ("%d", &p);
	if (combinacao(n, p, &cnp) == 0){
	    printf("Parametro invalido!\n");
	}

	if (combinacao(n, p, &cnp) == 1){
	    printf("Combinacao: %d\n", cnp);
	}
}
