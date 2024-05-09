## HARDWARE & SOFTWARE


**HARDWARE** = se puede modificar
**SOFTWARE** = NO se puede modificar

**esquema Von Neumann**

![](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e5/Von_Neumann_Architecture.svg/1200px-Von_Neumann_Architecture.svg.png)

:::success
GREEN  PART = program
:::

### Tipos cmputadoras
servidor
protatil
torre
movil
smartwatch
calculadora
consolas 
TV
electrodomestico (microondas)
aire condicionado
router (wiffi)

![](https://media3.giphy.com/media/DBW3BniaWrFo4/200w.gif?cid=6c09b952193zq8fr2mhcmvzvstoldd66k0g2mrffyz8z7qwa&ep=v1_gifs_search&rid=200w.gif&ct=g)

---
**MICROCONTROLADOR** = placa / circuito con **baja capacidad proceso**

![](https://thelogisticsworld.com/wp-content/uploads/2023/05/placa-de-circuito-electronico.jpg)

```javascript
// ordenadores muy muy sencillos
EJEMPLO
arduino
calculadora basica
````
---
### RECURSOS (capacidades) de un  ordenador

- capacidad procesado
    - CPU (**c**entral **p**rocessing **u**nit) = calculos muy complejos muy rapidos
    - GPU (**g**raphic **p**rocessing **u**nit) = muchos calculos sencillos
- memoria 
    - primaria
    - secundaria
- ancho de vanda - velocidadde comunicacion
    - entre dos ordenadores
    - entre piezas de un mismo ordenador

---
NUMEROS BINARIOS

1bit = nucleo de informacion // **2 possibles valores**
8bits = 1byte // **$2^8$ possibles valores**
  
:::warning
bit = **b**
byte = **B**
:::
:::info
termina en 0 = par
termina en 1 = impar
::::
````java
// elevar el bit sobre el numero dos 
1bit = 2 valores posibles // 2^1= 1
2bits = 4 valores posibles // 2^2 = 4
3bits = 8 valores posibles // 2^3 = 8
4bits = 16 valores posibles // 2^4 = 16
    ...
8bits = 256 valores posibles // 2^8 = 256
````
![image](https://hackmd.io/_uploads/rkikEt7bR.png)
:::info
**MULTIPLOS**
1KB (kilo byte) = $2^{10}$ = 1024 bytes
1MB (mega byte) = $2^{20}$ bytes  = $2^{23}$ bits // posibilidades = $2^{(2^{23})}$
1GB (giga byte) = $2^{30}$ bytes  = $2^{33}$ bits // posibilidades = $2^{(2^{33})}$
1TB (tega byte) = $2^{40}$ bytes  = $2^{43}$ bits // posibilidades = $2^{(2^{43})}$
:::
:::warning
**EJERCICIO**
Posibles valores en un discoduro que guarda 1,44MB
:::warning
 **b** = bit
 **B** = byte
 
1,44 · $2^{20}$(B) · $2^3$(b) = 1,44 · $2^{23}$ = 
:::warning
$2^{(1,44 · 2^{23})}$ posibilidades
:::

---
#### VENTAJAS & INCONVENIENTES BINARIO (vs DECIMAL)
- facil hacer circuito electronico binario
``(/) = 0 //
(_) = 1``
- operaciones aritmeticas son **largas & sencillas**
- numeros en binario **largos** = dificulta uso humanos
``1000(decimal) = 1111101000(binario)``
---
**REGISTRO** = razon por la que hay "0" a la izquierda

![image](https://hackmd.io/_uploads/SktSPdwZR.png)

- mas habitual = BYTE
    - bit
        - unidad de infotmacion (0 & 1)
        - 1 byte = 8 bits
            **EJ** 64 bits = 8 bytes (64 : 8 = 8)

---
### CONVERSION (binario, decimal, octal, hexadecimal)

| BINARIO | DECIMAL | OCTAL | HEXADECIMAL |
|:-------:|:-------:|:-----:|:-----------:|
|  00000  |    0    |   0   |      0      |
|  00001  |    1    |   1   |      1      |
|  00010  |    2    |   2   |      2      |
|  00011  |    3    |   3   |      3      |
|  00100  |    4    |   4   |      4      |
|  00101  |    5    |   5   |      5      |
|  00110  |    6    |   6   |      6      |
|  00111  |    7    |   7   |      7      |
|  01000  |    8    |  10   |      8      |
|  01001  |    9    |  11   |      9      |
|  01010  |   10    |  12   |      A      |
|  01011  |   11    |  13   |      B      |
|  01100  |   12    |  14   |      C      |
|  01101  |   13    |  15   |      D      |
|  01110  |   14    |  16   |      E      |
|  01111  |   15    |  17   |      F      |
|  10000  |   16    |  20   |     10      |
|  10001  |   17    |  21   |     11      |
|  10010  |   18    |  22   |     12      |
|  10011  |   19    |  23   |     13      |
|  10100  |   20    |  24   |     14      |

![10001100011 (1)](https://hackmd.io/_uploads/SJKoGIq-0.png)

#### PRACTICA

![DECIMAL hexadecimal y binario](https://hackmd.io/_uploads/Hk83E85W0.png)

memoria primaria = directo a la cpu (ej. RAM)

---

## LENGUAJES del MARCADO

- classificar la informacion en ETIQUETAS(tags)
:::info
HTML (HIPER TEXT MARKUP LENGUAGE)
XML``<nombre>contenido</nombre>``
:::
pagina HTML --> HTML5(2010)
``<!DOCTYPE html>``
``<HTML>``
``<HEAD>``
``<TITLE>``mi pagina
``</TITLE>``
``</HEAD>``
``<BODY>``
mi primera pagina
``</BODY>``
``</HTML>``
:::warning
<...> = abrir
</...> = cerrar
:::

---

identado los espacios antes de la line

- texto identado
- texto sin identar


 ![Imatge de WhatsApp 2024-05-06 a les 09.35.58_90477429](https://hackmd.io/_uploads/By4L0ZIMR.jpg)



<!DOCTYPE html>
<html>
<head>
<title>Tags html</title>
</head>
<body>

<h1>Tags html</h1>

<h3>1. Headings:</h3>
<h1>H1</h1>
<h2>H2</h2>
<h3>H3</h3>
<h4>H4</h4>
<h5>H5</h5>
<h6>H6</h6>

<hr>

<h3>2. HTML links are defined with the "a" tag:</h3>
<a href="https://www.youtube.com/watch?v=hN_q-_nGv4U">My favorite song for at moment</a>

<hr>

<h3>3. HTML images are defined with the "img" tag:</h3>
<p>My favorite art work:</p>
<img src="https://wp.es.aleteia.org/wp-content/uploads/sites/7/2021/01/WEB3-HANDS-CREATION-Creation_of_Adam_Michelangelo_Detail-PD.jpg?w=640&crop=1" alt="W3Schools.com" width="400" height="200">

<hr>

<h3>4. HTML buttons are defined with the "button" tag:</h3>
<button>Click here</button>

<hr>

<h3>5. List</h3>
<h4>An Unordered HTML List</h4>

<ul>
  <li>CPU</li>
  <li>RAM</li>
  <li>CD</li>
</ul>  

<h4>An Ordered HTML List</h4>

<ol>
  <li>wake up</li>
  <li>wash my face</li>
  <li>breakfast</li>
</ol> 

<hr>

<h3>6. Paragraphs</h3>

<p>This is a paragraph.</p>

<p>
This paragraph
contains      a lot of spaces
in the source     code,
but the    browser 
ignores it.

</p>
<h4>with line breaks "< br >": </h4>

<p>  
My Bonnie lies over the ocean.
<br>
 My Bonnie lies over the sea.
<br>
My Bonnie lies over the ocean.
</p>


<h4>with"< pre >":</h4> <p>(preserves both spaces and line breaks)</p>

<pre>
   My Bonnie lies over the ocean.

   My Bonnie lies over the sea.

   My Bonnie lies over the ocean.
</pre>


<hr>

<h3>7. Styles</h3>

<p>I am normal</p>
<p style="color:red;">I am red</p>
<p style="color:blue;">I am blue</p>

<p>I am <sup>superscripted</sup></p>
<p>I am <sub>subscripted</sub></p>
<p><q>I am a quote</q></p>

<p><del>I am deleated</del></p>
<p><mark>I am marked</mark></p>
<p><b>I am bold</b></p>
<p><u>I am underlined</u></p>
<p><i>I am cursvie</i></p>
<p style="font-family:courier;">This is a courier font</p>
<p style="text-align:center;"> I am a centered paragraph.</p>
<p style="font-size:50px;">This is a 50px font-size</p>
<p style="font-size:10px;">This is a 10px font-size</p>

<hr>

<h3>8. Background colour</h3>

< body style="background-color:blue;" >

<hr>

<meta charset = "UTF8"> = para que los signos extra como las tildes se puedan usar
</body>
</html>
    
---

### Pagina web (estatica o dinamica)
    ESTATICAS(HTML, CSS, JavaScript) = se actualizan en cada nuevo desarollo (despliegue = deploy)
    DINAMICAS = se generan nuevas en cada llamada
 :::info 
diferencia= páginas web estáticas, que muestran el mismo contenido para todos los usuarios, las páginas web dinámicas pueden personalizarse y cambiar en tiempo real
:::
#### tipos archivo:
1. HTML
    - marcado y texto
    - lineas generales de la pagina
    - tiene tags
2. CSS
    - cascade style sheet
    - estilos (formado)
3. JavaScript
    - lenguaje de programacion 
    - Tiene bucles, objetos y funciones
    
:::info
JavaScript lenguaje bajamente tipado
:::
---

### Redes
**Arquitectura**
    ``cliente - servidor``
- ordenador cliente
    - peticiones / request (URL) unit resource location
    
    **ENLACE vs URL:**
    - **enlace** puede poner pulsa aqui
    - **URL** noel enlace te lleva al URL
    
:::warning
URL
![MicrosoftTeams-image (1)](https://hackmd.io/_uploads/r1_ofecMA.jpg)

dominio = IP(internal protocol adress) 
        4 o 6 numeros de 0 a 255
    **EJ** 212239.11.38
:::
**Para traducir** 
- dominios con **IP**(listado de dominios con sus IP) necesitan un **DNS** (domain name server)
