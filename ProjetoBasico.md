# PROJETO BÁSICO - SISTEMA DE AUTOMAÇÃO RESIDENCIAL
*Fevereiro 2023*  
<a id="ancora"></a>

Este documento formaliza o **projeto conceitual** do Sistema de Automação Residencial que norteia **o desenvolvimento das soluções 
de engenharia e de sistemas de software** do projeto de automação residencial conduzido no contexto de **atividade extra classe** cujo tema é **Sistemas Embarcados**,
conduzida pelo Prof Clayton J A Silva no Centro Universitário Ibmec RJ.
#### Sumário
Introdução. [Breve histórico](#ancorahistorico)  
Introdução. [Operadores](#ancoraobjetivos)  
Introdução. [Instruções simples e compostas](#ancoraescopo)  
I. [Considerações gerais](#ancoraconsideracoes)  
II. [Condicionantes](#ancoracondicionantes)   
III. Funcionalidades [Segurança](#ancoraseguranca)  
III. Funcionalidades [Monitoramento](#ancoramonitoramento)  
III. Funcionalidades [Iluminação](#ancorailuminacao)   
III. Funcionalidades [Eletricidade](#ancoraeletricidade)  
III. Funcionalidades [Hidráulica](#ancorahidraulica)  
III. Funcionalidades [Multimídia](#ancoramultimidia)  
III. Funcionalidades [Hidráulica](#ancoraeletrodomesticos)  
III. Funcionalidades [Sistema integrador](#ancoraintegrador)   
IV. [Requsitos não funcionais](#ancoranaofuncionais)

<a id="ancorahistorico"></a>
#### Breve histórico
O grupo de Sistemas Embarcados foi criado no início do primeiro semestre de 2022 com os seguintes objetivos gerais:  
1. Sedimentar conceitos teóricos discutidos em sala nas disciplinas de conteúdo correlato;
2. Ampliar o conhecimento sobre as especificações de *hardware* de sensores e atuadores disponíveis no mercado;
3. Ampliar o conhecimento sobre a programação de microcontroladores;
4. Desenvolver conhecimento sobre gestão de projetos de sistemas de TI - especialmente gestão ágil de projetos;
5. Desenvolver conhecimento sobre o desenvolvimento de projetos multidisciplinares.

As fases do trabalho realizado nesse período foram as seguintes:
1. 2022.1 - Aprofundamento do conhecimento sobre programação de microcontroladores, com a utilização de sensores variados, entre os quais
  - LCD 1602, *display* de 16 caracteres em 2 linhas;
  - *Buzzer*, alarme piezoelétrico;
  - Sensor de presença;
  - Sensor de temperatura;
  - ... 
2. 2022.2 - Seleção do projeto de **Casa Inteligente** para nortear o prosseguimento das atividades:
  - Seleção dos subsistemas levantados no projeto conceitual: iluminação, segurança e integração;
  - Seleção e desenvolvimento das funcionalidades dos subsistemas a serem tratados: alarme de gases tóxicos, acendimento de cenas de iluminação, 
integração para plataformas *desktop* e móvel celular (SO Android);
  - Prototipação das soluções desenvolvidas em modelo reduzido de MDF.

<a id="ancoraobjetivos"></a>
#### Objetivos para 2023.1
- Conclusão das funcionalidades elencadas em 2022.2 e apresentação da **solução integrada**;
- Inclusão e desenvolvimento de funcionalidades do subsistema de energia;
- Ampliação das funcionalidades dos subsistemas de iluminação, segurança;
- Atualização do sistema integrador e desenvolvimento da nova versão da solução 2022.2. 

<a id="ancoraescopo"></a>
#### Delimitação do escopo
- Todas as questões de rede e demais componentes de infraestrutura de TIC estão **fora do escopo** do trabalho;
- O desenvolvimento do trabalho estará restrito aos aspectos relacionados com sistemas embarcados;
- As soluções parciais serão validadas em ambientes de desenvolvimento como Arduíno e Raspberry Pi.

<a id="ancoraconsideracoes"></a>
## I. Considerações gerais
Segundo a Associação Brasileira de Automação Residencial e Predial (AURESIDE), o termo automação residencial está consagrado no Brasil. Seu sentido é estendido quando aplicado à automação residencial:  

"é o conjunto de serviços proporcionados por sistemas tecnológicos integrados, como o melhor meio de satisfazer as necessidades   
básicas de segurança, de comunicação, de gestão energética e de conforto de uma habitação."

No contexto do projeto desenvolvido, **os subsistemas** da Casa Inteligente são:
1. **Segurança**: inclui os sensores de atividades anormais, como por exemplo invasões e 
vazamentos, vandalismo em dispositivos e cabos, a geração e o envio de alertas e a 
execução de ações, como a ligação de um holofote e de uma sirene, e o controle de 
acesso.  
2. **Monitoramento**: inclui as câmeras e o sistema para armazenamento indexado por 
horário e a recuperação de imagens.  
3. **Iluminação**: inclui não somente as lâmpadas, luminárias, abajures etc como também 
as persianas ou mesmo o controle de janelas, basculantes e clarabóias para fins de 
iluminação.  
4. **Climatização**: inclui os aparelhos de ar-condicionado, a abertura e fechamento de 
janelas, basculantes etc para fins de ventilação, e o sensoriamento e as ações para 
fins de controle da umidade relativa do ar.  
5. **Eletricidade**: inclui o monitoramento do consumo, a geração privativa e a venda de 
energia elétrica e as ações necessárias para, quando for o caso, corte.  
6. **Hidráulica**: inclui o monitoramento do consumo de água, o controle da irrigação e, 
quando for o caso, as ações para o corte. O monitoramento de inundações está 
incluído na segurança.  
7. **Multimídia**: inclui o *home theater*, o som ambiente e a tv por assinatura. É 
considerado que os aplicativos para a exibição de serviços de *streaming* estarão 
disponíveis nos dispositivos pessoais dos habitantes da casa, sendo que modelos 
destes dispositivos são sugeridos neste trabalho.  
8. **Eletrodomésticos**: inclui fogão, geladeira, lavadora, secadora, aspirador, cafeteira, 
máquina de fazer pão etc que podem oferecer alguma facilidade de automação.  
9. **Utilidades**: inclui o monitoramento e ações para animais de estimação, o controle da 
quantidade, da validade e do recompletamento da despensa e quaisquer dispositivos ou 
sistemas que proporcionem alguma utilidade para o usuário da casa.  
10. **Infraestrutura de TI**: inclui o computador servidor, o dispositivo ou espaço para 
armazenamento de arquivos, as redes de comunicação de dados e as conexões à 
Internet.  
11. **Sistema integrador**: inclui os paineis de controle, os controles remotos e o software 
de integração ou aplicação integradora para o controle da automação residencial.  
[Topo](#ancora)

<a id="ancoracondicionantes"></a>
## II. Condicionantes
As condicionanetes são os aspectos que orientaram a elaboração dos requisitos funcionais do projeto conceitual da Casa Inteligente.
1. Segurança
  - Garantir ao usuário final o controle da segurança de sua residência;
  - Reduzir a exposição do morador na entrada e saída;
  - Facilitar e agilizar a comunicação com os órgãos de segurança;
  - Realizar a identificação biométrica ou via cadastro;
  - Automatizar a abertura e o fechamento de portões;
  - Desencadear alertas e soar alarmes;
  - Emitir relatórios;
  - Trancar portas e janelas automaticamente;
  - Detectar vazamentos de água e de gás; e
  - Detectar a presença de fogo e de fumaça.
2. Monitoramento visual
  - Garantir ao usuário final o monitoramento visual de sua residência;
  - Realizar o monitoramento por câmeras;
  - Permitir estabelecimento de comunicação áudio-visual entre cômodos; e
  - Identificar movimentos estranhos e notificar.
3. Iluminação
  - Realizar o controle de iluminação natural e artificial;
  - Ter iluminação de passagem ou de referência que acende com sensor de presença;
  - Detectar a incidência de excesso de luz natural e acionar persianas, cortinas etc;
  - Abrir e fechar janelas automaticamente de forma programada;
  - Utilizar lâmpadas de led ou outros tipos econômicos e com baixo teor de mercúrio;
  - Utilizar sensores de presença; e
  - Ter janelas e portas inteligentes.
4. Climatização
  - Regular automaticamente a temperatura;
  - Realizar o controle da umidade relativa do ar; e
  - Ter gavetas de cozinha com temperatura controlável.
5. Eletricidade
  - Realizar o controle e reduzir o consumo;
  - Aumentar o aproveitamento energético;
  - Maximizar o aproveitamento da iluminação natural e da circulação de ar;
  - Assegurar a qualidade da distribuição de energia dentro da residência ;
  - Utilizar geradores fotovoltaicos e eólicos;
  - Utilizar sensores de presença;
  - Realizar a medição do consumo para cada saída; e
  - Disponibilizar estações de recarga para automóveis.
6. Hidráulica
  - Realizar o controle de vazão das bacias sanitárias, sistemas de descargas, chuveiros e misturadores;
  - Realizar a medição setorizada do consumo de água;
  - Monitorar os níveis dos reservatórios;
  - Ter sistema de irrigação inteligente; e
  - Realizar o controle de vazamentos.
7. Multimídia
  - Ter som integrado para a mesma música ser ouvida em toda a casa;
  - Utilizar alto falantes discretos no teto; e
  - Ser possível conectar pendrives ou *smartphones* em qualquer cômodo para reprodução de mídias.
8. TI
  - Facilitar o acesso do usuário às tecnologias;
  - Maximizar a interoperabilidade;
  - Integrar os diversos sistemas;
  - Ser possível realizar o controle por dispositivos móveis e fixos;
  - Permitir a integração com Internet e nuvem;
  - Ter painel de controle integrado a espelho e a TV; e
  - usar de interfaces de programação de aplicações (API), preferencialmente abertas e, portanto, disponíveis gratuitamente.   
[Topo](#ancora)

## III. Funcionalidades
Os principais requisitos funcionais do sistema estão listados a seguir

<a id="ancoraseguranca"></a>
### III.1 Segurança

| Elemento do Subsistema | Descrição |
| - | - |
| Perímetro do terro da casa | Possibilitar o controle remoto de portas e portões |
| | Ser possível programar para que sejam detectadas quaisquer tentativas de transposição dos muros externos que cercam o terreno |
| | Identificar em qual segmento do perímetro se houve intrusão |
| | Ser possível programar para que sejam acionados alarmes sonoros (sirenes ou gravações) e holofotes que iluminem a área onde houve a intrusão |
| | Detectar e notificar a abertura não autorizada dos portões |
| | Detectar e notificar ações de vandalismo dos dispositivos e do cabeamento de segurança |
| No acesso à casa propriamente dita | Possibilitar o controle remoto de portas e janelas |
| | Ser possível programar para que sejam detectadas e notificadas intrusões, Identificando o setor, porta ou janela do ocorrido |
| | Verificar a situação das portas e janelas |
| | Ser possível detectar intrusos a até pelo menos 3 metros de distância da casa |
| | Possibilitar o acionamento de um alarme sonoro (sirenes/voz de alerta) e holofotes iluminando o setor em que houve a intrusão |
| Nos ambientes internos da casa | Para cômodos muito grandes, deverá possibilitar a divisão por zonas de proteção |
| | Identificar em qual cômodo e, se for o caso em qual zona do mesmo, houve a intrusão |
| | Ser possível programar para que sejam acionados alarmes sonoros (sirenes ou gravações) e o acendimento das luzes no cômodo onde houve a intrusão |
| | Ter botões de pânico nos cômodos da casa para acionamento de uma empresa de segurança contratada |
| Na prevenção de incêndios | Detectar um princípio de incêndio, a presença de monóxido de carbono (CO), gases inflamáveis e de fumaça |
| | Identificar em qual cômodo e se for o caso em qual zona do mesmo, houve o sinistro |
| | Para cômodos muito grandes, deverá possibilitar a divisão por zonas de proteção |
| | Ser possível programar para que sejam acionados alarmes sonoros (sirenes ou gravações) e o acendimento das luzes onde houve a detecção da anormalidade |
| | Ter sprinklers de acionamento automático |
| No controle de acesso | Possibilitar a validação biométrica ou por senha para abertura automática das portas e portões de entrada de pedestres |
| | Permitir a integração com o sistema de monitoramento por câmeras para visualização e identificação de pessoas que solicitam a entrada em seus portões |
| | Gerar relatório de entrada e saída da propriedade |
| | Permitir a conversa com visualização de quem está no portão de acesso de pedestres por vídeo porteiro, inclusive à noite |
| | Ser possível definir horários e códigos de acesso para os funcionários |
| | Permitir a ativação de um alarme para acionamento indevido da fechadura ou abertura de um portão de acesso de pedestre ou veículos |
| | Notificar caso o alarme seja acionado |
| | Liberar, remotamente, o acesso de pessoas |
| | Abrir o portão de acesso de veículos automaticamente, sem intervenção do motorista, ao identificar um veículo cadastrado |
| Quanto a vazamento de gás e acúmulo de CO | Detectar e notificar um vazamento de gás |
| | Detectar e notificar o acúmulo de CO |
| Requisitos gerais | Acessar todas as funcionalidades de programação, operação e controle do sistema de segurança via smartphone |
| | Permitir que o sistema seja acionado por um ou mais períodos pré-determinados de tempo, independentemente por subsistema |
| | Ser o mais imune possível a falsos alarmes |
| | Ser integrado ao sistema de monitoramento por câmeras de forma a possibilitar a visualização da região correspondente ao acionamento de um alarme |
| | Abrir as portas e janelas automaticamente em caso de alarme de incêndio, de vazamento de gás, do acúmulo de CO, de gases inflamáveis e de fumaça |
| | Dispor de alimentação de energia ininterrupta |
| | Gerar relatórios de todas as ocorrências |
[Topo](#ancora)

<a id="ancoramonitoramento"></a>
### III.2 Monitoramento

| Elemento do Subsistema | Descrição |
| - | - |
| Nas áreas externas | Permitir a programação de percursos de monitoração para câmeras selecionadas |
| | Permitir a identificação de placa de carro |
| | Operar em condições climáticas adversas |
| | Ter proteção antivandalismo |
| No sistema de armazenamento | Permitir a recuperação das imagens de uma câmera a partir de uma data e hora |
determinadas, até 48h depois;
| | Permitir a captura e exportação de um quadro da imagem recuperada de uma câmera |
| | Permitir a exportação de sequência de vídeos de uma câmera |
| | Gerar relatórios |
| Requisitos gerais | Monitorar as entradas externas e internas |
| | Monitorar as áreas externas e internas selecionadas pelos moradores |
| | Detectar e notificar quando alguém se aproximar das entradas externas e internas |
| | Notificar quando uma câmera deixar de gravar| 
| | Permitir a programação de horários para funcionamento de câmeras selecionadas |
| | Permitir, em câmeras selecionadas, a emissão e/ou captura de som |
| | Permitir a gravação dos vídeos em um sistema de armazenamento local |
| | Permitir múltiplos acessos ao sinal de vídeo de uma mesma câmera |
| | Exibir um mosaico com os imagens das câmeras externas e internas separadamente |
| | Permitir a seleção, no mosaico, da imagem de uma câmera e aumentá-la |
| | Permitir a captura de um quadro da imagem de uma câmera |
| | Permitir a regulagem da qualidade da imagem |
[Topo](#ancora)

<a id="ancorailuminacao"></a>
### III.3 Iluminação
| Elemento do Subsistema | Descrição |
| - | - |
| Em qualquer cômodo, incluindo áreas de passagem | Permitir a configuração e o salvamento de diferentes cenas de iluminação |
| | Permitir a configuração de limites de luminosidade para a ativação automática de cenas |
| | Permitir a configuração de horários para a ativação automática de cenas |
| | Ativar uma cena automaticamente com a entrada de uma pessoa |
| | Desativar a iluminação automaticamente com a saída de todas as pessoas do cômodo |
| | Ativar e desativar cenas automaticamente conforme programado |
| | Ter iluminação apenas de orientação onde for considerado necessário, que seja ativada e desativada automaticamente |
| | Ter luz de emergência que seja ativada automaticamente quando faltar energia |
| | Controlar o acionamento de persianas de acordo com a luminosidade |
| | Permitir o controle remoto da seleção de cenas e da regulagem da intensidade |
| | Permitir o controle local (no cômodo) da seleção de cenas e da regulagem da intensidade |
| | Permitir abrir e fechar cortinas e persianas por comando remoto e automaticamente |
| | Permitir o controle de dispositivos de iluminação legados |
| Em áreas de passagem | Ativar iluminação de orientação apenas durante a passagem e em seguida desativar |
| Em áreas externas | Permitir a configuração de diferentes cenas de iluminação |
| | Permitir a configuração de limite de luminosidade para a ativação automática de cenas |
| | Permitir a configuração de horários para a ativação automática de cenas |
| | Ativar e desativar cenas automaticamente conforme configurado |
| No controles central e nos controles móveis | Exibir a situação da iluminação da casa inteira |
| | Permitir a ativação e desativação de cenas de iluminação da casa inteira |
| | Permitir a desativação da iluminação da casa inteira com um só comando |
| | Permitir a regulação da intensidade da iluminação |
| | Permitir a configuração de cenas para qualquer cômodo ou área da casa |
[Topo](#ancora)

<a id="ancoraeletricidade"></a>
### III.4 Eletricidade
| Elemento do Subsistema | Descrição |
| - | - |
| Na distribuição de energia | Possibilitar a ligação e o desligamento da energia elétrica fornecida por cada tomada da casa individualmente |
| | Permitir a definição de períodos pré-programados para a ligação e desligamentos de tomadas |
| | Possibilitar ligação e o desligamento da energia elétrica geral da casa |
| | Possuir tomadas para carregamento de baterias de carros elétricos |
| Na geração de energia | Possuir subsistemas de geração de energia alternativa como, por exemplo, painéis solares e turbinas eólicas |
| | Implantar o sistema de compensação de energia elétrica |
| | Emitir relatórios por período sobre a geração de energia elétrica |
| | Ter circuitos elétricos selecionados atendidos por nobreaks |
| | Possuir gerador para suprir a energia elétrica da casa, com ligação automática em caso de ausência de fornecimento das demais fontes |
| | Ter meios de armazenar a energia gerada em excesso |
| No consumo de energia | Permitir a verificação do consumo de energia em todos os pontos que tiverem medidores de energia instalados |
| | Baseado no consumo de energia na residência, deve permitir que o usuário visualize os créditos disponíveis |
| | Permitir a visualização de um histórico de consumo de energia da residência |
| | Permitir a comparação os dados obtidos pelos medidores de energia e os dados da distribuidora de energia |
| | Emitir relatórios por período sobre o consumo de energia |
[Topo](#ancora)

<a id="ancoraclimatizacao"></a>
### III.5 Climatização
| Descrição |
| - |
| Saber, a qualquer momento, as temperaturas externa e interna de qualquer cômodo |
| Saber, qualquer momento, o estado dos aparelhos de ar-condicionado de qualquer cômodo, incluindo a intensidade da ventilação |
| Permitir a ligação e o desligamento da climatização de qualquer cômodo e o ajuste da intensidade da ventilação |
| Saber a umidade relativa do ar externa e em qualquer cômodo |
| Ser notificado se a umidade atingir limite recomendado pela OMS (20%) |
| Permitir a ligação e o desligamento da umidificação de qualquer cômodo e o ajuste da intensidade da umidade |
| Programar a temperatura na qual qualquer cômodo deve permanecer |
| Programar horários para a climatização e a umidificação automáticas entrarem em operação |
| Gravar configurações de climatização e umidificação por horários e dias da semana |
| Ativar, desativar e configurar a climatização de qualquer cômodo manualmente |
| Ter um comando para desligar toda a climatização ao mesmo tempo |
| Abrir e fechar, automaticamente, as janelas, basculantes, clarabóias que forem relacionadas à climatização e umidificação |
| Saber o estado, ligar, desligar e ajustar a velocidade de ventiladores |
| Gerar relatórios |
[Topo](#ancora)

<a id="ancorahidraulica"></a>
### III.6 Hidráulica
| Descrição |
| - |
|  Monitorar o consumo de água |
| Detectar inundações |
| Interromper, liberar e ajustar a vazão de fluxos de água manualmente  |
| Verificar o estado, ativar, desativar e ajustar manualmente o fluxo de água da irrigação |
| Programar horários para ativação e desativação automáticas da irrigação |
| Programar a vazão dos fluxos de água de irrigação |
| Monitorar a temperatura da água |
| Gerar relatórios |
[Topo](#ancora)

<a id="ancoramultimidia"></a>
### III.7. Multimídia
| Descrição |
| - |
| Reproduzir música em qualquer ambiente a partir de qualquer dispositivo |
[Topo](#ancora)

<a id="ancoraeletrodomesticos"></a>
### III.8 Eletrodomésticos
| Elemento do Subsistema | Descrição |
| - | - |
| Cafeteira e máquina de fazer pão | Saber os níveis dos estoques dos consumíveis |
| | Selecionar e comandar remotamente o início da elaboração do produto |
| | Programar horário para o início automático do preparo |
| | Ser avisado de que o produto está pronto |
| Lavadora | Ser possível comandar remotamente o início ou encerrar o funcionamento |
| | Monitorar status do ciclo;
| | Monitorar reservatórios de consumíveis.
| Secadora | Ser possível programar o horário de início da operação |
| | Saber se o ciclo de secamento já foi concluído.
| Fogão |Monitorar situação das bocas e do forno para saber se estão ligados ou desligados |
| | Monitorar a temperatura do forno;
| | Ligar e desligar bocas e forno remotamente;
| | Programar ligação e desligamento automáticos.
| Forno isolado | Monitorar situação para saber se está ligado ou desligado e a temperatura se for o caso |
| | Programar configuração de operação e horário para ligação e desligamento.
| Geladeira | Verificar, por câmera, o conteúdo da geladeira |
| | Monitorar abertura de porta;
| | Monitorar temperatura interna;
| | Monitorar a validade dos produtos e notificar a proximidade do vencimento da mesma |
| | Notificar quando foi necessário trocar o filtro de água |
| | Ser possível programar para fazer gelo |
[Topo](#ancora)

<a id="ancoraintegrador"></a>
### III.9 Sistema integrador
| Descrição |
| - |
| Ser utilizado em tablets e smartphones |
| Ser seguro |
| Pode| ser usado via Internet |
| Ser |imples, fácil e intuitivo |
| Facilitar o acesso a sistemas proprietários |
| Facilitar o acesso a outras aplicações |
| Permitir a visualização da situação atual da casa utilizando-se de plantas e mapas |
| Permitir a execução de macros do tipo “sair pra jantar”, “viagem longa”, ..., que acionem configurações predeterminadas para os subsistemas de automação |
[Topo](#ancora)

<a id="ancoranaofuncionais"></a>
## IV - Requisitos não funcionais
Alguns autores recomendam que o projeto de sistemas de engenharia sejam desenvolvidos em ciclos incrementais que contemplem:
- Análise de necessidades;
- Modelagem funcional;
- Modelagem física;
- Testes e avaliações.  
[Topo](#ancora)

Por se tratar de um projeto acadêmico o escopo de cada semestre será definido semestre a semestre, conforme sejam as funcionalidades a implementar
de cada subsistema - orientado pelo projeto básico ou conceitual. 

Em consequência, **o modelo físico, consequentemente os requisitos não funcionais, assim como os testes, serão realizados durante as *sprints* - delimitadas em cerca de 12 semanas**
(maior do aquele normalmente aplicado no modelo de gestão do *Scrum*)



