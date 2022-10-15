# Estructuras_Ficheros

  
----------------------------------------------
   Gaudeamus igitur iuvenes dum sumus.
----------------------------------------------
       ++Hilario Iglesias Martínez++
---------------------------------------------
Este programa fue realizado en una plataforma
LINUX Ubuntu 20.04.4 LTS.
Bajo el standard ANSI-C,
 
-------------------------------------------

Sencillo ejemplo sobre el manejo
en ANSI-C, de ficheros y estructuras para
colocar datos.

Este ejemplo consta de dos programas:
Escritura_Registros.c
Lectura_Registros.c

El primero:"Escritura_Registros.c", abre 
un fichero de texto indicado.
-Por ejemplo: entrada-
Una vez abierto nos va pidiendo 
una serie de datos para alojarlos en una estructura,
y escribirlos en dicho fichero "entrada".

Después, deberemos ejecutar:"Lectura_Registros.c"
que  nos pedirá  el fichero, en nuestro caso:
 "entrada", y volcará por consola
los datos existentes en el mismo.

Se puede jugar con estos sencillos programas.
**************************************************************
COMPILACIÓN:
gcc -Wall -Werror -o  Escritura_Registros Escritura_Registros.c
--------------------------------------------------------------------------
gcc -Wall -Werror  -o Lectura_Registros Lectura_Registros.c

------------------------------------------------------------
EJECUCIÓN:
--------------------------------------------------
./Escritura_Registros
--------------------------------------------------------
./Lectura_Registros 
----------------------------------------------------------



