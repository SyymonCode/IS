**(Anverso):**  
**ID:** 011 **Cargar datos**  
Se debe de crear un archivo de datos nuevo o cargarlo si ya existe.  
**Prioridad** 1  

**(Reverso):**  
El programa carga los datos del fichero binario en el programa. Dado el caso de que no exista ningun fichero binario que haga referencia al que haga referencia el programa, se creará un nuevo fichero que contará como la agenda.
***
**(Anverso):**  
**ID:** 012 **Guardar datos**  
Como usuario quiero poder guardar toda la información que escriba en el programa.  
**Prioridad** 1  

**(Reverso):**  
Automático. Cada vez que se realice una modificación, se introduzcan datos o se eliminen, se guardará en el fichero binario los datos del programa.
Al finalizar el programa, se preguntará si se desean guardar los datos en la copia de seguridad. Si los datos han sido modificados por un ayudante, al entrar un coordinador se le preguntará si desea añadir los cambios.
***
**(Anverso):**  
**ID:** 020 **Introducir alumnos**  
Se me debe permitir introducir un nuevo alumno con los campos: DNI, nombre, email,  curso, teléfono de contacto, dirección postal, fecha de nacimiento, si es a tiempo parcial o no, equipo en el que está y si es líder o no.  
**Prioridad** 2  

**(Reverso):**  
Se introduce en las distintas variables los datos correspondientes introducidos. De estas variables, opcionales serán el equipo y si es lider o no.
***
**(Anverso):**  
**ID:** 030 **Buscar alumnos**  
Como usuario, quiero buscar un alumno determinado, buscandolo por DNI por apellido o por su grupo.  
**Prioridad** 3  

**(Reverso):**  
El programa puede buscar un alumno de la base de datos en base al tipo de campo deseado. En el caso de que existan varios alumnos con el mismo apellido, se introducirá el DNI del alumno para poder discernir entre ambos.
***
**(Anverso):**  
**ID:** 041 **Mostrar alumnos**  
Como usuario, quiero ver/mostrar los datos de un determinado alumno.  
**Prioridad** 4  

**(Reverso):**  
El programa mostrará el alumno por pantalla, una vez se hayan introducido su apellido, o su DNI en el caso de que el apellido provoque conflictos.
***
**(Anverso):**  
**ID:** 042 **Mostrar listado de alumnos**  
Como usuario, quiero mostrar todos los alumnos, tanto de forma ascendente como descendente, además de por apellido, o curso más alto o DNI.  
**Prioridad** 4  

**(Reverso):**  
El programa busca y enseña todos los alumnos. Organiza la forma en la que se enseñan, ya sea por orden alfabetico, numero de lista, grupo y de forma ascendenete y descendente
***
**(Anverso):**  
**ID:** 051 **Editar alumnos**  
Al usar el programa, puedo modificar información de los alumnos que ya he introducido previamente.  
**Prioridad** 5  

**(Reverso):**  
El programa accede a dichos alumnos y permite editar los diferentes campos del alumnos. Estos datos podrán ser modificados uno a uno o en grupos
***
**(Anverso):**  
**ID:** 052 **Borrar alumnos**  
Si por algún casual he introducido algún alumno erróneamente, se me permite poder borrar ese alumnos.  
**Prioridad** 5

**(Reverso):**  
El programa permite al usuario decidir qué alumnos borrar del conjunto de alumnos.Estos se elegirán usando el apellido o en caso de que haya conflicto se podrá usar el DNI.
***
