/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
     char array1[][100] = {
        "Considerando que temos bons administradores de rede, ",
        "Por outro lado, ",
        "Assim mesmo, ",
        "No entanto, não podemos esquecer que ",
        "Do mesmo modo, ",
        "A implantação, na prática, prova que ",
        "Nunca é demais lembrar o impacto destas possíveis vulnerabilidades, uma vez que ",
        "As experiências acumuladas demonstram que ",
        "Acima de tudo, é fundamental ressaltar que ",
        "O incentivo ao avanço tecnológico, assim como ",
        "Não obstante, ",
        "Todas estas questões, devidamente ponderadas, levantam dúvidas sobre se ",
        "Pensando mais a longo prazo, ",
        "O que temos que ter sempre em mente é que ",
        "Ainda assim, existem dúvidas a respeito de como ",
        "Enfatiza-se que ",
        "Todavia, ",
        "No nível organizacional, ",
        "O empenho em analisar ",
        "Percebemos, cada vez mais, que ",
        "No mundo atual, ",
        "É importante questionar o quanto ",
        "Neste sentido, ",
        "Evidentemente, ",
        "Por conseguinte, ",
        "É claro que ",
        "Podemos já vislumbrar o modo pelo qual ",
        "Desta maneira, ",
        "O cuidado em identificar pontos críticos n",
        "A certificação de metodologias que nos auxiliam a lidar com "
    };

    // Segundo array de strings
    char array2[][100] = {
        "a implementação do código ",
        "a complexidade computacional ",
        "a lógica proposicional ",
        "a lei de Moore ",
        "o novo modelo computacional aqui preconizado ",
        "o desenvolvimento contínuo de distintas formas de codificação ",
        "a constante divulgação das informações ",
        "a consolidação das infraestruturas ",
        "a consulta aos diversos sistemas ",
        "a preocupação com a TI verde ",
        "a interoperabilidade de hardware ",
        "a disponibilização de ambientes ",
        "o aumento significativo da velocidade dos links de Internet ",
        "a criticidade dos dados em questão ",
        "o desenvolvimento de novas tecnologias de virtualização ",
        "a alta necessidade de integridade ",
        "o crescente aumento da densidade de bytes das mídias ",
        "a necessidade de cumprimento dos SLAs previamente acordados ",
        "a utilização de SSL nas transações comerciais ",
        "a utilização de recursos de hardware dedicados ",
        "a revolução que trouxe o software livre ",
        "o índice de utilização do sistema ",
        "o comprometimento entre as equipes de implantação ",
        "a determinação clara de objetivos ",
        "a adoção de políticas de segurança da informação ",
        "a valorização de fatores subjetivos ",
        "a percepção das dificuldades ",
        "o entendimento dos fluxos de processamento ",
        "o consenso sobre a utilização da orientação a objeto ",
        "o uso de servidores em datacenter "
    };
        // Terceiro array de strings
    char array3[][100] = {
        "nos obriga à migração ",
        "cumpre um papel essencial na implantação ",
        "exige o upgrade e a atualização ",
        "auxilia no aumento da segurança e/ou na mitigação dos problemas ",
        "garante a integridade dos dados envolvidos ",
        "assume importantes níveis de uptime ",
        "facilita a criação ",
        "inviabiliza a implantação ",
        "oferece uma interessante oportunidade para verificação ",
        "acarreta um processo de reformulação e modernização ",
        "pode nos levar a considerar a reestruturação ",
        "representa uma abertura para a melhoria ",
        "ainda não demonstrou convincentemente que está estável o suficiente ",
        "talvez venha causar instabilidade ",
        "imponha um obstáculo ao upgrade para novas versões ",
        "minimiza o gasto de energia ",
        "conduz a um melhor balanceamento de carga ",
        "agrega valor ao serviço prestado ",
        "é um ativo de TI ",
        "implica na melhor utilização dos links de dados ",
        "não pode mais se dissociar ",
        "possibilita uma melhor disponibilidade ",
        "causa uma diminuição do throughput ",
        "otimiza o uso dos processadores ",
        "faz parte de um processo de gerenciamento de memória avançado ",
        "causa impacto indireto no tempo médio de acesso ",
        "apresenta tendências no sentido de aprovar a nova topologia ",
        "estende a funcionalidade da aplicação ",
        "deve passar por alterações no escopo ",
        "afeta positivamente o correto provisionamento "
    };
    // Quarto array de strings
    char array4[][100] = {
        "dos requisitos mínimos de hardware exigidos.",
        "dos paradigmas de desenvolvimento de software.",
        "do sistema de monitoramento corporativo.",
        "das novas tendencias em TI.",
        "dos equipamentos pré-especificados.",
        "das direções preferenciais na escolha de algorítimos.",
        "do bloqueio de portas imposto pelas redes corporativas.",
        "das janelas de tempo disponíveis.",
        "dos índices pretendidos.",
        "das formas de ação.",
        "dos paralelismos em potencial.",
        "da rede privada.",
        "das ferramentas OpenSource.",
        "dos métodos utilizados para localização e correção dos erros.",
        "de todos os recursos funcionais envolvidos.",
        "da utilização dos serviços nas nuvens.",
        "da gestão de risco.",
        "da terceirização dos serviços.",
        "de alternativas aos aplicativos convencionais.",
        "dos procedimentos normalmente adotados.",
        "da garantia da disponibilidade.",
        "do fluxo de informações.",
        "do levantamento das variáveis envolvidas.",
        "da autenticidade das informações.",
        "do impacto de uma parada total.",
        "das ACLs de segurança impostas pelo firewall.",
        "da confidencialidade imposta pelo sistema de senhas.",
        "do tempo de down-time que deve ser mínimo.",
        "dos protocolos comumente utilizados em redes legadas.",
        "dos problemas de segurança escondidos que existem nos sistemas operacionais proprietários."
    };
    
    char Nomes[][10] = {"Gabriel", "Lucas", "Enzo", "João", "Daniel", "Lucca", "Braga", "Iraupuã", "Kenzo", "Nicolas"};
    for(int i = 0; i<4; i++){
    
    int numero1 = rand() % (sizeof(Nomes) / sizeof(Nomes[0]));
    int numero2 = rand() % (sizeof(array1) / sizeof(array1[0]));
    int numero3 = rand() % (sizeof(array2) / sizeof(array2[0]));
    int numero4 = rand() % (sizeof(array3) / sizeof(array3[0]));
    int numero5 = rand() % (sizeof(array4) / sizeof(array4[0]));

    printf("%s Diz:\n'%s%s%s%s'\n", Nomes[numero1], array1[numero2], array2[numero3], array3[numero4], array4[numero5]);
    
    }
    return 0;
}
