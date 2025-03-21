# RETO 1

## Analisis del problema.
Para este reto se pide ralizar una calculadora de ingenieria en donde se usa un menu que nos da varias diferentes opciones entre las cuales esta:

1. Calcular Ley de Ohm  
2. Calcular Factor de Potencia  
3. Calcular Resistencia de un Conductor  
4. Calcular Valor de la Resistencia para un LED  
5. Salir   

### Calcular ley de ohm
 1. cuando se seleccione la opcion ```calcular ley de ohm``` este debe de desplegar otro submenu en el cual nos pregunte que queremos calcular si voltaje, resistencia o corriente.
 
 2. Dependiendo de la opcion escogida este pide loS datos necesarios.  

- V = I * R  
- I = V / R  
- R = V / I  

- Si se quiere calcular V se necesita pedir I y R  
- Si se quiere calcular I se necesita pedir V y R  
- Si se quiere calcular R se necesita pedir V e I  

### Calcular factor de potencia
1. Después de seleccionar la opción ```Calcular Factor de Potencia```, el programa debe presentar un submenú donde el usuario puede elegir qué parámetro desea calcular: potencia activa, potencia aparente o factor de potencia.  

2. Entrada de Datos: el programa debe solicitar al usuario los valores necesarios para calcular el parámetro seleccionado.  

- Potencia aparente: S = V * I    
- Potencia activa: P = S * cos(θ) = V * I * cos(θ)  
- Factor de potencia: FP = cos(θ) = P / S  

- Si se quiere calcular P se necesita pedir V, I y el FP o el angulo θ   
- Si se quiere calcular S se necesita pedir V y I    
- Si se quiere calcular FP se necesita pedir P y S o el angulo θ   

### Calcular resistencia de un conductor 
1. Después de seleccionar la opción ```Calcular Resistencia de un Conductor```, el programa debe presentar un submenú donde el usuario puede seleccionar el material del conductor para el cálculo de la resistencia, entre: oro, aluminio, cobre y otros.    

2. Para los tres primeros, las constantes de Coeficiente Temperatura y la Resistividad a 20ºC, deben estar guardadas en memoria, para otros conductores, se debe solicitar al usuario.  

3. 

### Resistencia para un LED
1. Después de seleccionar la opción ```Calcular Valor de la Resistencia para un LED```, el programa debe solicitar al usuario los siguientes datos:

- Tensión de la fuente en voltios (V).  
- Número de ledes que se conectarán en el circuito.  
- Tipo de conexión de los ledes: serie o paralelo.  
- Tensión nominal del LED en voltios ($V_f$).  
- Corriente nominal del LED en amperios ($I_f$).  

2. Después de realizar los cálculos, el programa debe mostrar al usuario los siguientes resultados:  
    
- Valor de la resistencia ($*R*$).  
- Potencia de la resistencia ($*P_{R}*$).  
- Potencia total del circuito ($*P_{Total}*$).  
- Corriente total suministrada por la fuente ($*I_{Total}*$).  