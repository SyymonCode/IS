# CASO DE USO
***
## Cargar datos

**ID:** 011

**Breve descripción:** Crea un archivo nuevo o lo carga si no existe

**Actores principales:** Usuario

**Actores secundarios:** Alumnos

**Precondiciones:**
1. Tener un fichero para cargar
2. En el caso de que no exista, tener memoria para crear uno

**Flujo principal:**
1. El caso de uso comienza cuando se ejecuta el programa
2. El sistema comprueba si existe datos para cargar. Si existen los carga
3. Si no existen, el programa crea los datos necesarios.

**Postcondiciones:**
1. Si hay algún tipo de error al cargar o crear los datos, se muestra por pantalla.
***
## Guardar datos

**ID:** 012

**Breve descripción:** Se guardan los datos del programa y esos mismos cambios se guardan en el fichero auxiliar.

**Actores principales:** Usuario

**Actores secundarios:** Alumnos

**Precondiciones:**
1. Debe de existir un fichero donde guardar los datos y un backup. Si no, se crea este último.

**Flujo principal:**
1. Al modificar un dato, se guarda automáticamente.
2. Al finalizar el programa, pregunta al usuario si quiere realizar el backup.

**Postcondiciones:**
1. Mostrar por pantalla que se ha guardado correctamente.

**Flujos alternativos:**
1. SI no se consigue abrir, cerrar o guardar el fichero, mostrar un error.
***
## Introducir alumnos

**ID:** 020

**Breve descripción:** El sistema permite introducir usuario

**Actores principales:** Usuario

**Actores secundarios:** Alumnos

**Precondiciones:**
1. Ha de existir un archivo donde poder introducir los datos

**Flujo principal:**
1. Se entra en este caso cuando el usuario busca introducir nuevos alumnos
2. Pide introducir la información de los campos obligatorios
3. Pregunta si quiere introducir datos en los campos opcionales y en caso afirmativo, los pide.

**Postcondiciones:**
1. Muestra todos los datos introducidos

**Flujos alternativos:**
1. En caso de introducir algún campo
***
## Buscar alumnos

**ID:** 030

**Breve descripción:** El sistema permite buscar a una alumno por DNI, apellido o grupo.

**Actores principales:** Usuario

**Actores secundarios:** Alumnos

**Precondiciones:**
1. El alumno a buscar debe estar registrado en la base de datos con anterioridad.

**Flujo principal:**
1. Se selecciona la opción en el menú de buscar alumno.
2. Se pide el campo por el cual se buscará al alumno.
3. Se introduce el dato del alumno y el programa lo buscará.

**Postcondiciones:**
1. El alumno quedara seleccionado por el programa.

**Flujos alternativos:**
1. El sistema muestra por pantalla un mensaje de error si el alumno no existe.
***
## Mostrar alumnos

**ID:** 041

**Breve descripción:** El sistema permite mostrar los alumnos buscándolos por su DNI

**Actores principales:** Usuario

**Actores secundarios:** Alumnos

**Precondiciones:**
1. El alumno debe existir.

**Flujo principal:**
1. El usuario introduce el DNI del alumno que quiere buscar.
2. El sistema busca el alumno en el fichero.

**Postcondiciones:**
1. Los datos del alumno se muestran por pantalla.

**Flujos alternativos:**
1. El sistema muestra un mensaje de error si el alumno no existe.    
***
## Mostrar listado

**ID:** 042

**Breve descripción:** El sistema muestra por pantalla todos los alumnos

**Actores principales:** Usuario

**Actores secundarios:** Alumnos

**Precondiciones:**
1. Deben existir alumnos en la base de datos.

**Flujo principal:**
1. El sistema busca todos los alumnos existentes

**Postcondiciones:**
1. El sistema muestra por pantalla todos los alumnos

**Flujos alternativos:**
1. El sistema muestra un mensaje de error si no existen alumnos en el fichero.
***
## Editar alumnos

**ID:** 051

**Breve descripción:** Permite cambiar la información de los alumnos existentes.

**Actores principales:** Usuario

**Actores secundarios:** Alumno

**Precondiciones:**
1. El alumno debe existir

**Flujo principal:**
  1. Empieza cuando el usuario desea modificar el alumno.
  2. El usuario introduce los datos del alumno y el sistema lo busca.
  3. Una vez encontrado el alumno, el usuario introduce los datos que desea cambiar.

**Postcondiciones:**
1. El sistema muestra los nuevos datos editados del alumno por pantalla.

**Flujos alternativos:**
1. Si el alumno no existe, el sistema muestra un error por pantalla.
***
## Borrar alumnos

**ID:** 052

**Breve descripción:** Permite al usuario eliminar alumnos de la lista.

**Actores principales:** Usuario

**Actores secundarios:** Alumno

**Precondiciones:**
1. El alumno debe existir

**Flujo principal:**
1. El usuario introduce el DNI o apellido del alumno y el sistema lo busca.
2. El sistema busca al alumno y lo elimina.

**Postcondiciones:**
1. Aparece un mensaje por pantalla que muestra que el alumno se ha borrado satisfactoriamente.

**Flujos alternativos:**
1. Aparece un mensaje por pantalla que avisa de que ha sucedido un error.
