int main()
{
    int vetor[15], tamanho_vetor, auxiliar = 0, i = 0, j = 0;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tamanho_vetor);

    // Alimentação do vetor
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Insira a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 1; i < tamanho_vetor; i++){
        auxiliar = vetor[i];
        j = i-1;
        while(j >= 0 && vetor[j] > auxiliar){
            vetor[j+1] = vetor[j];
            j = j - 1;
        }
        vetor[j+1] = auxiliar;
    }
    
    // Loop para mostrar o vetor ordenado
    for(int i = 0; i < tamanho_vetor; i++){
        printf("%d-", vetor[i]);
    }
    return 0;
}

// Algoritmo em pseudocodigo:

//     tamanho_vetor <- 0
//     auxiliar <- 0
//     i <- 0
//     j <- 0
//     vetor[15]

//     Inicio
//         Escreva "Qual o tamanho do vetor?"
//         Leia tamanho_vetor 

//         Para i de 0 até tamanho_vetor  - 1 faça
//             Escreva "Insira a posicao", i, "do vetor: "
//             Leia vetor[i]
//         Fim-para

//         Para i de 1 até tamanho_vetor  - 1 faça
//             aux <- vetor[i]
//             j <- i - 1
//             Enquanto j >= 0 e vetor[j] > aux faça
//                 vetor[j+1] <- a[j]
//                 j <- j - 1
//             vetor[j+1] <- auxiliar
//         Fim-para

//         Para i de 0 até tamanho_vetor  - 1 faça
//             Escreva vetor[i], "-"
//         Fim-para
//     Fim

// Explicação do algoritmo textualmente
/*  *O usuário é solicitado a inserir o tamanho do vetor.
    *Em seguida, o usuário insere os elementos do vetor um por um.
    *O algoritmo de ordenação "insertion sort" é aplicado para ordenar o vetor.
    *Para cada elemento a partir do segundo (índice 1), o algoritmo armazena o elemento em uma variável  auxiliar.
    *O algoritmo compara o elemento auxiliar com os elementos anteriores no vetor. Ele desloca os elementos maiores para a direita até encontrar a posição correta para inserir o elemento auxiliar.
    *Após encontrar a posição correta, o elemento auxiliar é inserido no vetor.
    *O algoritmo continua percorrendo o vetor, repetindo os passos 4 a 6 até que todos os elementos estejam em suas posições corretas.
    *Em seguida, um loop é utilizado para mostrar o vetor ordenado.