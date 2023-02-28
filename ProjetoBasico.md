# PROJETO BÁSICO - SISTEMA DE AUTOMAÇÃO RESIDENCIAL
*Fevereiro 2023*  

Este documento formaliza o **projeto conceitual** do Sistema de Automação Residencial que norteia **o desenvolvimento das soluções 
de engenharia e de sistemas de software** do projeto de automação residencial conduzido no contexto de **atividade extra classe** cujo tema é **Sistemas Embarcados**,
conduzida pelo Prof Clayton J A Silva no Centro Universitário Ibmec RJ.

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

#### Objetivos para 2023.1
- Conclusão das funcionalidades elencadas em 2022.2 e apresentação da **solução integrada**;
- Inclusão e desenvolvimento de funcionalidades do subsistema de energia;
- Ampliação das funcionalidades dos subsistemas de iluminação, segurança;
- Atualização do sistema integrador e desenvolvimento da nova versão da solução 2022.2. 

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

## III. Funcionalidades
Os principais requisitos funcionais do sistema estão listados a seguir

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




