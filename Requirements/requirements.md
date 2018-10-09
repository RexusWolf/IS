# **Requisitos software P2**
* Aplicación que gestione datos introducidos por el alumno que permita:
	* Inserción de alumno:
		* Datos alumno:
			* DNI
			* Nombre
			* Apellidos
			* Teléfono
			* Email corporativo
			* Dirección Postal
			* Curso más alto en el que está matriculado
			* Fecha de nacimiento
			* Nº de equipo **(opcional)**
			* ¿Tiene Rol de líder? **(opcional)**
	* Búsqueda de alumno:
		* Por Apellidos (En caso de conflicto, preguntar DNI)
		* Por DNI
		* En caso de no encontrar un alumno, volver a preguntar al usuario.
	* Borrado de alumno.
		* Búsqueda por apellido. (En caso de conflicto, preguntar DNI)
		* Búsqueda por DNI.
		* Al borrar el líder de un equipo, ese equipo se queda sin líder hasta que se asigne otro.
		* Borrado completo de todos los alumnos.
	* Posibilidad de modificar datos de alumnos.
	* Posibilidad de modificar líder de un grupo.
	* Permite la muestra de alumnos:
		* HTML
		* Markdown
		* Función que muestre todos los alumnos y que genere 1 solo fichero.
		* Ordenación ascendente/descendente:
			* Ordenado de forma alfabética (Nombre/Apellido).
			* DNI.
			* Curso más alto en el que está matriculado.
	* Debe funcionar en sistemas Linux.
	* Restricciones:
		* Nº de alumnos totales = 150.
		* Nº de líderes por grupo = 1.
		* Nº de alumnos por grupo no es una restricción.
	* Importación de datos (*mediante un fichero binario*).
	* Guardado de copias de seguridad (*en ficheros binarios*).
	* Requisitos no funcionales:
		* Simplicidad de la aplicación.
		* Interfaz atractiva.
		* Inglés/Español.
		* Esté codificado en **C++**.
