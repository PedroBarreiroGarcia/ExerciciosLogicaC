#include <stdio.h>

int main()
{
    int inicio = 0, fim = 0, encontrado = 0, meio = 0, pesquisa = 0, vetor[15], parar_loop = 0, tamanho_vetor, auxiliar = 0;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tamanho_vetor);

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Insira a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho_vetor; i++)
    {
        for (int j = 0; j < tamanho_vetor; j++)
        {
            if (vetor[i] < vetor[j])
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }

    printf("Insira o elemento de busca\n");
    scanf("%d", &pesquisa);

    inicio = 0;
    fim = tamanho_vetor - 1;
    encontrado = 0;
    do
    {
        meio = (inicio + fim) / 2;

        if (pesquisa == vetor[inicio])
        {
            encontrado = 1;
            printf("O numero %d foi encontrado na posicao %d\n", pesquisa, inicio);
            break;
        }
        if (pesquisa == vetor[fim])
        {
            encontrado = 1;
            printf("O numero %d foi encontrado na posicao %d\n", pesquisa, fim);
            break;
        }
        if (pesquisa == vetor[meio])
        {
            encontrado = 1;
            printf("O numero %d foi encontrado na posicao %d\n", pesquisa, meio);
            break;
        }
        else if (pesquisa > vetor[meio])
        {
            inicio = meio++;
        }
        else
        {
            fim = meio--;
        }
        if (((inicio == meio) || (fim == meio)) && (encontrado == 0))
        {
            parar_loop = 1;
        }
    } while (parar_loop == 0);
    if (encontrado != 1)
    {
        printf("\nO elemento nao foi encontrado");
    }
    return 0;
}

// Explicação do algoritmo textualmente
    // *   O usuário é solicitado a inserir o tamanho do vetor.
    // *   Em seguida, o usuário insere os elementos do vetor um por um.
    // *   O vetor é ordenado em ordem crescente usando o algoritmo de ordenação de seleção (bubble sort).
    // *   O usuário insere o elemento que deseja procurar no vetor.
    // *   O algoritmo de busca binária começa definindo os índices iniciais e finais.
    // *   Em um loop do-while, o algoritmo verifica se o elemento de busca é igual ao elemento nos índices inicial, final ou meio. Se sim, o elemento é encontrado e sua posição é exibida.
    // *   Caso contrário, o algoritmo verifica se o elemento de busca é maior ou menor do que o elemento no índice do meio. Com base nessa verificação, os índices inicial ou final são atualizados para dividir o espaço de busca ao meio.
    // *   O loop continua até que o elemento seja encontrado ou até que os índices inicial e final se tornem adjacentes e o elemento não seja encontrado.
    // *   Se o elemento não for encontrado após o loop, uma mensagem informando que o elemento não foi encontrado é exibida.
// Algoritmo em pseudocodigo:
// inicial <- 0
// final <- 0
// encontrado <- 0
// meio <- 0
// pesquisa <- 0
// vetor <- [15]
// parar_loop <- 0
// tamanho_vetor <- 0
// auxiliar <- 0

// Inicio

//     Escreva "Qual o tamanho do vetor?"
//     Leia tamanho_vetor

//     Para i de 0 até tamanho_vetor - 1 faça
//         Escreva "Insira a posicao", i, "do vetor: "
//         Leia vetor[i]
//     Fim-para

//     Para i de 0 até tamanho_vetor faça
//         Para j de 0 até tamanho_vetor faça
//             Se vetor[i] < vetor[j] então
//                 auxiliar <- vetor[i]
//                 vetor[i] <- vetor[j]
//                 vetor[j] <- auxiliar
//             Fim-se
//         Fim-para
//     Fim-para

//     Escreva "Insira o elemento de busca"
//     Leia pesquisa

//     inicial <- 0
//     final <- tamanho_vetor - 1
//     encontrado <- 0

//     Faça
//         meio <- (inicial + final) / 2
        
//         Se pesquisa = vetor[inicial] então
//             encontrado <- 1
//             Escreva "O numero", pesquisa, "foi encontrado na posicao", inicial
//             Parar
//         Fim-se
        
//         Se pesquisa = vetor[final] então
//             encontrado <- 1
//             Escreva "O numero", pesquisa, "foi encontrado na posicao", final
//             Parar
//         Fim-se
        
//         Se pesquisa = vetor[meio] então
//             encontrado <- 1
//             Escreva "O numero", pesquisa, "foi encontrado na posicao", meio
//             Parar
        
//         Senão, se pesquisa > vetor[meio] então
//             inicial <- meio + 1
        
//         Senão
//             final <- meio - 1
//         Fim-se
        
//         Se (inicial = meio ou final = meio) e encontrado = 0 então
//             parar_loop <- 1
//         Fim-se

//     Enquanto parar_loop = 0

//     Se encontrado != 1 então
//         Escreva "O elemento nao foi encontrado"
//     Fim-se
    
// Fim

