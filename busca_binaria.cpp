int buscab(int x){ // declaro a função buscab, que recebe um int como parâmetro

	// declaro os inteiros ini, meio e fim
	int ini=1, fim=n, meio; // ini já começa com 1 e fim com n

	while(ini<=fim){ // enquanto houver algum elemento no intervalo

		meio=(ini+fim)/2; // meio recebe a posição do meio

		if(vetor[meio]==x) return meio; // se achei o número, retorno o valor de meio
		if(vetor[meio]<x) ini=meio+1; // se o número está na frente, olho para a metade depois de meio
		if(vetor[meio]>x) fim=meio-1; // se o número está atrás, olho para a metade antes de meio
	}

	return -1; // se o while terminar sem a função retornar, o número não está no vetor
}
