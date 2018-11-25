# Diagrama de clases

  En este diagrama de clases, para el programa de agenda de profesor encontramos
4 clases. En la clase persona se encuentran las variables referentes a una persona cualquiera,
tales como los datos básicos de su DNI junto con las funciones basicas getters y setters correspondientes.

  La clase profesor y alumno son clases hijas de la clase persona. Las 
diferencias de estas son que la clase Profesor contiene informacion sobre este, tal como su
usuario en el sistema ademas de la caracteristica distintiva del cargo que ocupa el profesor. Ademas, 
en la susodicha funcion se encuentran funciones que realizan los coordinadores, como son guardar y copiar.

  En el caso de la clase alumno se encuentran variables que no pertenecen explicitamente a una Persona, si no que son caracteristicas unicas
del Alumno, tales como el curso mas alto matriculado, si estudia en tiempo parcial o no, etc. Se le añade a
estas variables las funciones necesarias para observar e indicar cada variable.

  Finalmente, la clase Agenda representa la base de datos donde se deposita la informacion sobre los alumnos que introducen 
los profesores. En ella se encuentra la lista de alumnos junto con las funciones modificadoras de dicha lista.
