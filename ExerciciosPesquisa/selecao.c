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

    // Selection sort
    for(i = 0; i < tamanho_vetor - 1; i++){
        auxiliar = i;
        for(j = i + 1; j < tamanho_vetor; j++){
            if(vetor[j] < vetor[auxiliar]){
                auxiliar = j;
                if(auxiliar != i){
                    int temp = vetor[auxiliar];
                    vetor[auxiliar] = vetor[i];
                    vetor[i] = temp;
                }
            }
            
        }
    }
    
    // Loop para mostrar o vetor ordenado
    for(int i = 0; i < tamanho_vetor; i++){
        printf("%d-", vetor[i]);
    }
    return 0;
}












//  Algoritmo em pseudocodigo:

//     Inicio
//         tamanho_vetor <- 0
//         auxiliar <- 0
//         i <- 0
//         j <- 0
//         vetor[15]

//         Escreva "Qual o tamanho do vetor?"
//         Leia tamanho_vetor

//         Para i de 0 até tamanho_vetor - 1 faça
//             Escreva "Insira a posicao", i, "do vetor: "
//             Leia vetor[i]
//         Fim-para

//         Para i de 0 até tamanho_vetor - 2 faça
//             auxiliar <- i
//             Para j de i+1 até tamanho_vetor - 1 faça
//                 Se a[j] < vetor[auxiliar] então
//                     auxiliar <- j
//                     Se aux != i então
//                         temp <- vetor[auxiliar]
//                         vetor[auxiliar] <- vetor[i]
//                         vetor[i] <- temp
//                     Fim-se
//                 Fim-se
//             Fim-para
//         Fim-para

//         Para i de 0 até tamanho_vetor - 1 faça
//             Escreva vetor[i], "-"
//         Fim-para
//     Fim

// Explicação do algoritmo textualmente
/*
    *O usuário é solicitado a inserir o tamanho do vetor.
    *Em seguida, o usuário insere os elementos do vetor um por um.
    *O algoritmo de ordenação "selection sort" é aplicado para ordenar o vetor.
    *O algoritmo percorre o vetor do início ao penúltimo elemento.
    *Para cada posição atual no vetor, o algoritmo encontra o elemento mínimo no restante do vetor não ordenado.
    *O elemento mínimo é trocado com o elemento na posição atual, colocando-o em sua posição correta.
    *O algoritmo continua percorrendo o vetor, repetindo os passos 5 e 6 até que todo o vetor esteja ordenado.
    *Em seguida, um loop é utilizado para mostrar o vetor ordenado.