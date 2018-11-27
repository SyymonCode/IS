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
