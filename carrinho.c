#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Configurando o idioma para português
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis necessárias
    char nome[20];
    int rodando;
    int senha, quantidade, decisao_sessao, escolha_produto, verifica_usuario;
    float carrinho;
    float preco1 = 8.3;
    float preco2 = 9.4;
    float preco3 = 4.3;
    float preco4 = 15.6;
    

    // Mensagem de boas vindas
    printf("\n------ MERCADINHO BUG DA FOME ------\n");
    printf("  Bem-vindo ao Sistema de Compras!\n");

    do
    {
        // Verificando se cliente ou funcionário
        int verifica_usuario = 0;
        while (verifica_usuario != 1 && verifica_usuario != 2)
        {
            printf("\nDigite o número correspondente: \n 1 -> Funcionário \n 2 -> Cliente\n");
            printf("Resposta: ");
            scanf("%d", &verifica_usuario);
        }

        // Diálogo com o cliente
        printf("\nQual é o seu nome? ");
        scanf("%s", nome);

        // Sessão funcionário
        if (verifica_usuario == 1)
        {   
            printf("\nÓtimo! %s, Agora informe a senha do sistema.", nome);

            printf("\nDigite a senha: ");
            scanf("%d", &senha);

            // Se a senha estiver correta entrará em loop
            if (senha == 1234)
            {
                do
                {
                    printf("\n\t---- Acesso Liberado ----\n");
                    printf("\nEscolha o produto que deseja alterar o valor:\n");
                    printf(" 1 -> 'Arroz': R$%.2f\n", preco1);
                    printf(" 2 -> 'Feijão': R$%.2f\n", preco2);
                    printf(" 3 -> 'Farinha': R$%.2f\n", preco3);
                    printf(" 4 -> 'Carne': R$%.2f\n", preco4);

                    escolha_produto = 0;
                    while (escolha_produto != 1 && escolha_produto != 2 && escolha_produto != 3 && escolha_produto != 4)
                    {
                        printf("Escolha: ");
                        scanf("%d", &escolha_produto);
                    }

                    // Condição para cada produto
                    if (escolha_produto == 1)
                    {
                        printf("Digite o novo preço do 'Arroz': ");
                        scanf("%f", &preco1);
                        printf("Preço do 'Arroz' alterado com sucesso!\n");
                    }

                    else if (escolha_produto == 2)
                    {
                        printf("Digite o novo preço do 'Feijão': ");
                        scanf("%f", &preco2);
                        printf("Preço do 'Feijão' alterado com sucesso!\n");
                    }

                    else if (escolha_produto == 3)
                    {
                        printf("Digite o novo preço da 'Farinha': ");
                        scanf("%f", &preco3);
                        printf("Preço da 'Farinha' alterado com sucesso!\n");
                    }

                    else if (escolha_produto == 4)
                    {
                        printf("Digite o novo preço da 'Carne': ");
                        scanf("%f", &preco4);
                        printf("Preço da 'Carne' alterado com sucesso!");

                    }

                    else
                    {
                        printf("Produto inválido!");
                    }

                    // Funcionário decide se quer ou não sair da sessão
                    decisao_sessao = 0;
                    while (decisao_sessao != 1 && decisao_sessao != 2)
                    {
                    printf("\nDeseja continuar alterando?\n");
                    printf(" 1 -> para 'SIM'\n 2 -> para 'NÃO'\n");
                    printf("Escolha: ");
                    scanf("%d", &decisao_sessao);
                    }

                } while (decisao_sessao != 2);

            }

            // Se a senha estiver incorreta feedback
            else
            {
                printf("\n\t---- Senha incorreta ----");
                printf("\nTente acessar novamente mais tarde.\n");
            }
        }

        // Sessão cliente
        else if (verifica_usuario == 2)
        {   
            // Dialogo com o cliente
            printf("\nPerfeito! %s, Agora vamos as compras.", nome);

            do
            {
                printf("\nEscolha o produto para adiciona-lo ao carrinho de compras: \n");
                printf(" 1 -> 'Arroz': R$%.2f\n", preco1);
                printf(" 2 -> 'Feijão': R$%.2f\n", preco2);
                printf(" 3 -> 'Farinha': R$%.2f\n", preco3);
                printf(" 4 -> 'Carne': R$%.2f\n", preco4);

                escolha_produto = 0;
                while (escolha_produto != 1 && escolha_produto != 2 && escolha_produto != 3 && escolha_produto != 4)
                {
                    printf("Escolha: ");
                    scanf("%d", &escolha_produto);
                }

                printf("Quantidade: ");
                scanf("%d", &quantidade);

                // Prevenindo a quantidade de produto ser igual a 0
                if (quantidade == 0)
                {
                    quantidade = 1;
                }

                // Condição para cada produto
                if (escolha_produto == 1)
                {
                    carrinho += (preco1 * quantidade);
                    printf("%dx 'Arroz' Adicionado ao carrinho!\n", quantidade);
                }

                else if (escolha_produto == 2)
                {
                    carrinho += (preco2 * quantidade);
                    printf("%dx 'Feijão' Adicionado ao carrinho!\n", quantidade);
                }

                else if (escolha_produto == 3)
                {
                    carrinho += (preco3 * quantidade);
                    printf("%dx 'Farinha' Adicionado ao carrinho!\n", quantidade);
                }

                else if (escolha_produto == 4)
                {
                    carrinho += (preco4 * quantidade);
                    printf("%dx 'Carne' Adicionado ao carrinho!\n", quantidade);
                }

                // Mostrando carrinho
                printf("Valor total: R$%.2f\n", carrinho);

                // Cliente decide se quer ou não sair da sessão
                decisao_sessao = 0;
                while (decisao_sessao != 1 && decisao_sessao != 2)
                {
                    printf("\nDeseja continuar comprando?\n");
                    printf(" 1 -> para 'SIM'\n 2 -> para 'NÃO'\n");
                    printf("Escolha: ");
                    scanf("%d", &decisao_sessao);
                }

                // Mostrando valor gasto antes do loop finalizar
                if (decisao_sessao == 2)
                {
                    printf("\nVALOR TOTAL DO CARRINHO: R$%.2f\n", carrinho);
                }

                } while (decisao_sessao != 2);
        }

        // Finalizar programa
        printf("\nDeseja continuar no nosso sistema?\n 1 -> 'Sim'\n 2 -> 'Não'\n");
        printf("Escolha: ");
        scanf("%d", &rodando);

    } while (rodando != 2);

    // Mensagem de despedidas
    printf("\n ------ Agradecemos a sua preferência! ------\n");
    printf("\n Código: Victor, Priscila e Luan.");

    return 0;
}
