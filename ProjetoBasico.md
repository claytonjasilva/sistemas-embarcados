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

## 1. Considerações gerais
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

