#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Configurando o idioma para português
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis necessárias
    int senha;
    float carrinho;
    float preco1 = 8.3;
    float preco2 = 9.4;
    float preco3 = 4.3;
    float preco4 = 15.6;
    //Sistema
    int rodando;
    // Decisões
    int decisao_sessao, escolha_produto, verifica_usuario;

    // Mensagem de boas vindas
    printf("\n------ MERCADINHO BUG DA FOME ------\n");
    printf("  Bem-vindo ao Sistema de Compras!\n");

    // Repetição do programa principal
    do
    {
        // Verificando se cliente ou funcionário
        int verifica_usuario = 0;
        while (verifica_usuario != 1 && verifica_usuario != 2)
        {
            printf("\nDigite o número correspondente: \n 1 - "
            "Funcionário \n 2 - Cliente\n");
            printf("Resposta Nº: ");
            scanf("%d", &verifica_usuario);
        }

        // Se resposta for igual a 1 entrará na sessão do funcionário
        if (verifica_usuario == 1)
        {
            // Vericação da senha
            printf("\nDigite sua senha: ");
            scanf("%d", &senha);

            // Se a senha estiver correta entra em um loop
            if (senha == 1234)
            {
                // Loop das alterações
                do 
                {
                    // Valores dos produtos
                    printf("\n----Acesso Liberado----\n");
                    printf("\nEscolha o produto que deseja alterar o valor:\n");
                    printf(" 1 -> 'Arroz': R$%.2f\n", preco1);
                    printf(" 2 -> 'Feijão': R$%.2f\n", preco2);
                    printf(" 3 -> 'Farinha': R$%.2f\n", preco3);
                    printf(" 4 -> 'Carne': R$%.2f\n", preco4);

                    // Escolha do produto e alteração do preço com filtragem da entrada
                    escolha_produto = 0;
                    while (escolha_produto != 1 && escolha_produto != 2 && escolha_produto != 3 && escolha_produto != 4)
                    {
                        printf("Escolha: ");
                        scanf("%d", &escolha_produto);
                    }

                    // Condições da escolha do produto e alteração do valor
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
                        printf("Preço da 'Carne' alterada com sucesso!");

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
                // Feedback negativo
                printf("\n----Senha incorreta----\n");
                printf("\nTente acessar novamente mais tarde.\n");
            }
        }

        // Se resposta for 2 entrará na sessão do cliente
        else if (verifica_usuario == 2)
        {
            // Mensagem inicial
            printf("\nOlá, Cliente amigo! ");

            // Loop das compras
            do
            {
                // Listagem de produtos
                printf("\nEscolha o produto para adiciona-lo ao carrinho de compras: \n");
                printf(" 1 -> 'Arroz': R$%.2f\n", preco1);
                printf(" 2 -> 'Feijão': R$%.2f\n", preco2);
                printf(" 3 -> 'Farinha': R$%.2f\n", preco3);
                printf(" 4 -> 'Carne': R$%.2f\n", preco4);

                // Escolha do produto com filtragem da entrada
                escolha_produto = 0;
                while (escolha_produto != 1 && escolha_produto != 2 && escolha_produto != 3 && escolha_produto != 4)
                {
                    printf("Escolha: ");
                    scanf("%d", &escolha_produto);
                }

                // Condições da escolha do produto e soma do valor
                if (escolha_produto == 1)
                {
                    carrinho += preco1;
                    printf("'Arroz' Adicionado ao carrinho!\n");
                }

                else if (escolha_produto == 2)
                {
                    carrinho += preco2;
                    printf("'Feijão' Adicionado ao carrinho!\n");
                }

                else if (escolha_produto == 3)
                {
                    carrinho += preco3;
                    printf("'Farinha' Adicionado ao carrinho!\n");
                }

                else if (escolha_produto == 4)
                {
                    carrinho += preco4;
                    printf("'Carne' Adicionado ao carrinho!\n");
                }
                
                // Mostrando carrinho depois da escolha
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

        // Escolha do usuario para continuar ou fechar o programa
        printf("\nDeseja continuar no nosso sistema?\n 1 - 'Sim'\n 2 - 'Não'\n");
        printf("Escolha: ");
        scanf("%d", &rodando);

    } while (rodando != 2);

    // Mensagem de despedida
    printf("\n ------ Agradecemos a sua preferência! ------\n");
    printf("\n Código: Victor, Priscila e Luan.");

    return 0;
}
