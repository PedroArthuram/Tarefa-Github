int main() {
    int N;
    printf("Digite o numero de filhos: ");
    if(scanf("%d", &N) != 1) {
        printf("Erro na leitura de N\n");
        return 1;
    }

    int netos = 0;
    for (int i = 0; i < N; i++) {
        int filhos;
        printf("Digite o numero de filhos do filho %d: ", i+1);
        if(scanf("%d", &filhos) != 1) {
            printf("Erro na leitura de filhos\n");
            return 1;
        }
        netos += filhos;
    }

    printf("Total de netos: %d\n", netos);
    return 0;
}